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
    tB_title->Text = "Рекурсия";

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


        lB_output->Items->Add("№\tЗначение\t\tНакопленная сумма");
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

void drawGraph(Graphics^ pGraph, pStRecursion pRec, int pSizeRec, RECT pstRect) {
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
    pGraph->DrawRectangle(WhitePen, pstRect.left, pstRect.top, pstRect.right - pstRect.left, pstRect.bottom - pstRect.top);
    
    Font^ font = gcnew Font("New Time Roman", 16);
    SolidBrush^ brush = gcnew SolidBrush(Color::YellowGreen);
    String^ sHeading = "График рекурентного соотношения";
    int nHeadSize = sHeading->Length, nInd = 50;
    int zInd = ((pstRect.right - pstRect.left) - font->Size * sHeading->Length) / 2 + nInd;
    
    pGraph->DrawString(sHeading, font, brush, pstRect.left + zInd, pstRect.top);

    RECT rAxisX(pstRect);
    rAxisX.top += 30;
    rAxisX.left += 100;
    rAxisX.right += 20;
    rAxisX.bottom += 60;
    drawAxisX(pGraph, rAxisX, nMinAxisX, nMaxAxisX, pSizeRec);  // Отрисовать ось X
    drawAxisY(pGraph, rAxisX, nMinAxisY, nMaxAxisY, 5);         // Отрсовать ось Y

}

// Отрисовка оси X
void drawAxisX(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec) {
    PointF p1;
    PointF p2;
    p1.X = pArea.right;
    p1.Y = pArea.bottom;

    p2.X = pArea.right;
    p2.Y = pArea.bottom;

    Pen^ pen = gcnew Pen(Color::White, 2);
    pGraph->DrawLine(pen, p1, p2);

    // Шрифт на оси X
    Font^ font = gcnew Font("New Time Roman", 12);
    SolidBrush^ brush = gcnew SolidBrush(Color::White);
    String^ sAxis = gcnew String("Идентификатор значений");
    int indAxis = ((pArea.right - pArea.left) - sAxis->Length) / 2;
    pGraph->DrawString(sAxis, font, brush, pArea.left + indAxis, pArea.bottom + 10);

    float nPxPerVal = (pArea.right - pArea.left) / (pMax - pMin);

    pen->Width = 1;
    pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
    pen->Color = Color::Yellow;

}

void drawAxisY(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec) {

}