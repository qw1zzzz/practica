#include "Recursion.h"
#include <stdlib.h>
#include <string>
#include "MyForm.h"

using namespace app;

double recSH(double y, double sum, double an, int n, pStRecursion pStRec) {
    if (n == 1) {
        an = 1 / y;
    }
    else {
        an = an * (((2.0 * n - 3) / (2 * n - 1)) * pow(1 / y, 2));
    }
    sum = sum + an;

    pStRec[n - 1].nIdStruct = n;
    pStRec[n - 1].nVal = an;
    pStRec[n - 1].nSum = sum;

    (pStRec + n - 1)->nVal = an;
    (*(pStRec + n - 1)).nVal = an;
    
    if (n >= 11) return sum;
    return recSH(y, sum, an, n + 1, pStRec);
}




void MyForm::Recursion() {
    tB_title->Text = "Расчет рекурентного соотношения последовательности";

    float y = 0, sum = 0, an1 = 0;

    InputData^ idt = gcnew InputData;
    idt->SetLable("Введите начальное значение Y ");
    if (idt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ sRes = idt->GetText();

        y = Convert::ToDouble(sRes);
        idt->Visible = false;

        RecOut = new stRecursion[11];
        memset(RecOut, 0, sizeof(stRecursion) * 11);

        sum = recSH(y, 0, an1, 1, RecOut);
        
        String^ sItem = gcnew String("");
        System::Globalization::NumberFormatInfo^ ifp = gcnew System::Globalization::NumberFormatInfo;
        System::Globalization::CultureInfo^ ifc = gcnew System::Globalization::CultureInfo("ru-RU");
        ifp->NumberDecimalDigits = 4;
        ifc->NumberFormat->NumberDecimalDigits = 4;


        lB_output->Items->Add("№\tЗначение\tНакопленная сумма");
        for (int i = 0; i < 11; i++) {
            sItem = Convert::ToString(RecOut[i].nIdStruct);
            sItem += "\t" + RecOut[i].nVal.ToString("n", ifp);
            sItem += "\t\t" + RecOut[i].nSum.ToString("N", ifc);
            lB_output->Items->Add(sItem);
        }
        lB_output->Items->Add("");
        lB_output->Items->Add("\r\r\r Накопленная сумма y = " + sum.ToString("N", ifc));
    }

    idt->Close();
}

void drawGraph(Graphics^ pGraph, pStRecursion pRec, int pSizeRec, RECT pstRect, int mode) {
    if (pSizeRec == 0 | pRec == NULL) return;

    float nMinAxisX, nMaxAxisX, nMinAxisY, nMaxAxisY; // Мин и Макс значения по осям

    // Определить границы графика
    nMinAxisY = nMaxAxisY = pRec[0].nVal;
    nMinAxisX = pRec[0].nIdStruct;
    nMaxAxisX = pRec[pSizeRec - 1].nIdStruct;
    for (int i = 1; i < pSizeRec; i++) {
        if (nMinAxisY > pRec[i].nVal)
            nMinAxisY = pRec[i].nVal;
        if (nMinAxisY > pRec[i].nSum)
            nMinAxisY = pRec[i].nSum;

        if (nMaxAxisY < pRec[i].nVal)
            nMaxAxisY = pRec[i].nVal;
        if (nMaxAxisY < pRec[i].nSum)
            nMaxAxisY = pRec[i].nSum;
    }

    // Отрисовка места размещения графика

    Pen^ WhitePen = gcnew Pen(Color::White, 2);
    pGraph->DrawRectangle(WhitePen, pstRect.left, pstRect.top, pstRect.right - 450, pstRect.bottom - 90);

    Font^ font = gcnew Font("New Time Roman", 16);
    SolidBrush^ brush = gcnew SolidBrush(Color::WhiteSmoke);
    String^ sHeading = "";
    if (mode == 1) {
        sHeading = "График рекурентного соотношения";
    }
    else if (mode == 2) {
        sHeading = "График параметрической функции";
    }
    int nHeadSize = sHeading->Length, nInd = 150;
    int zInd = ((pstRect.right - pstRect.left) - font->Size * sHeading->Length) / 2 + nInd;

    pGraph->DrawString(sHeading, font, brush, pstRect.left + zInd, pstRect.top);

    RECT rAxisX(pstRect);
    rAxisX.top += 30;
    rAxisX.left += 100;
    rAxisX.right += 20;
    rAxisX.bottom += 60;
    drawAxisX(pGraph, rAxisX, nMinAxisX, nMaxAxisX, pSizeRec, mode);  // Отрисовать ось X
    drawAxisY(pGraph, rAxisX, nMinAxisY, nMaxAxisY, 5, mode);         // Отрсовать ось Y

    float nPxRepVal = (rAxisX.right - rAxisX.left);             // Кол-во пикселей по горизонтали

    int nY = (int)(rAxisX.bottom - (pRec[0].nVal - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
    int nSY = (int)(rAxisX.bottom - (pRec[0].nSum - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
    int nPxOld = rAxisX.left;

    WhitePen->Width = 4;
    switch (mode) {
        case 1: {
            for (int i = 0; i < pSizeRec; i++) {
                float nPxStep = rAxisX.left + (i)*nPxRepVal / (pSizeRec - 1);
                int nY2 = (int)(rAxisX.bottom - (pRec[i].nVal - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));

                WhitePen->Color = Color::Red;
                pGraph->DrawLine(WhitePen, (int)nPxOld, nY, (int)nPxStep, nY2);
                nY = nY2;

                int nSY2 = (int)(rAxisX.bottom - (pRec[i].nSum - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
                WhitePen->Color = Color::Blue;
                pGraph->DrawLine(WhitePen, (int)nPxOld, nSY, (int)nPxStep, nSY2);
                nSY = nSY2;

                nPxOld = nPxStep;
            }
        } break;

        case 2: {
            for (int i = 0; i < pSizeRec; i++) {
                float nPxStep = rAxisX.left + (i)*nPxRepVal / (pSizeRec - 1);
                int nY2 = (int)(rAxisX.bottom - (pRec[i].nVal - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));

                int nSY2 = (int)(rAxisX.bottom - (pRec[i].nSum - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
                WhitePen->Color = Color::Blue;
                pGraph->DrawLine(WhitePen, (int)nPxOld, nSY, (int)nPxStep, nSY2);
                nSY = nSY2;

                nPxOld = nPxStep;
            }
        } break;
                      
    }
}
// Поворот текста на оси Y
void DrawTextRotate(Graphics^ pGraph, String^ pText, System::Drawing::Rectangle pRect, Font^ pFont, Brush^ pBrush, float angle) {
    System::Drawing::Rectangle rect(0, 0, pRect.Height, pRect.Width);
    pGraph->ResetTransform();
    pGraph->RotateTransform(angle);

    pGraph->TranslateTransform(pRect.Left, pRect.Bottom, System::Drawing::Drawing2D::MatrixOrder::Append);
    StringFormat^ string_format = gcnew StringFormat();
    string_format->Alignment = StringAlignment::Center;
    string_format->LineAlignment = StringAlignment::Center;
    /*Pen^ pen = gcnew Pen(Color::White, 2);
    pGraph->DrawRectangle(pen, pRect);*/
    pGraph->DrawString(pText, pFont, pBrush, rect, string_format);
    pGraph->ResetTransform();
}

// Отрисовка оси X
void drawAxisX(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec, int mod) {
    PointF p1, p2;
    p1.X = pArea.left;
    p1.Y = pArea.bottom;

    p2.X = pArea.right;
    p2.Y = pArea.bottom;

    Pen^ pen = gcnew Pen(Color::LightGray, 3);
    pGraph->DrawLine(pen, p1, p2);

    // Шрифт на оси X
    Font^ font = gcnew Font("New Time Roman", 12);
    SolidBrush^ brush = gcnew SolidBrush(Color::White);
    String^ sAxis = gcnew String("");
    if (mod == 1) {
        String^ sAxis = gcnew String("Ось X");
    }
    else if (mod == 2) {
        String^ sAxis = gcnew String("Аргумент функции");
    }
   
    int indAxis = ((pArea.right - pArea.left) - sAxis->Length) / 2 - 60 ;
    pGraph->DrawString(sAxis, font, brush, pArea.left + indAxis, pArea.bottom + 20);


    float nPxPerVal = (pArea.right - pArea.left) / (pMax - pMin);

    pen->Width = 1;
    pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
    pen->Color = Color::LightYellow;
    for (int i = 0; i < pSec; i++) {
        float nPxStep = pArea.left + (i)*nPxPerVal * (pMax - pMin) / (pSec - 1);
        pGraph->DrawLine(pen, nPxStep, (float)pArea.bottom + 2, nPxStep, (float)pArea.top);
        brush->Color = Color::White;
        pGraph->DrawString(Convert::ToString(pMin + i), font, brush, nPxStep - font->Size / 2, pArea.bottom + 4);
    }
}

void drawAxisY(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec, int mod) {
    PointF p1, p2;
    p1.X = pArea.left;
    p1.Y = pArea.bottom;

    p2.X = pArea.left;
    p2.Y = pArea.top;

    Pen^ pen = gcnew Pen(Color::LightGray, 3);
    pGraph->DrawLine(pen, p1, p2);

    float nOlt = (pMax - pMin) / pSec;
    float nPxPerVal = (pArea.bottom - pArea.top) / (pMax - pMin);

    Font^ font = gcnew Font("New Time Roman", 12);
    SolidBrush^ brush = gcnew SolidBrush(Color::WhiteSmoke);
    String^ label = gcnew String("");
    if (mod == 1) {
        String^ label = gcnew String("Ось Y");
    }
    else if (mod == 2) {
        String^ label = gcnew String("Значение по Y");
    }
    
    int indexis = ((pArea.bottom - pArea.top) - label->Length) / 2;

    System::Drawing::Rectangle rect(int(pArea.left - font->Height), pArea.top, int(font->Height), int(pArea.bottom - pArea.top));

    DrawTextRotate(pGraph, label, rect, font, brush, -90);

    String^ sItem = gcnew String("");
    System::Globalization::NumberFormatInfo^ ifp = gcnew System::Globalization::NumberFormatInfo;
    System::Globalization::CultureInfo^ ifc = gcnew System::Globalization::CultureInfo("ru-RU");
    if (mod == 1) {
        ifp->NumberDecimalDigits = 4;
        ifc->NumberFormat->NumberDecimalDigits = 4;
    }
    else if (mod == 2){
        ifp->NumberDecimalDigits = 0;
        ifc->NumberFormat->NumberDecimalDigits = 0;
    }
    

    for (int i = 0; i < pSec + 1; i++) {
        float nPxStep = pArea.bottom - (i)*nPxPerVal * (pMax - pMin) / pSec;
        if (i > 0) {
            pen->Width = 1;
            pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
            pen->Color = Color::White;

            pGraph->DrawLine(pen, pArea.left - 3, int(nPxStep), pArea.right, int(nPxStep));
        }
        float val = (pMin + (i * nOlt));
        brush->Color = Color::White;
        pGraph->DrawString(val.ToString("n", ifp), font, brush, pArea.left - 100, int(nPxStep));
    }
}