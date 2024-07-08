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

