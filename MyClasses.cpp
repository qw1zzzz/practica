#include "MyClasses.h"
#include <sstream>
#include <stdexcept>

using namespace System::Runtime::InteropServices;
void StringToChar(System::String^ s, std::string& os) {
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
}

System::String^ CharToString(char* str) {
	System::IntPtr dPtr = Marshal::AllocHGlobal(strlen(str) + 1);
	char* sDes = (char*)dPtr.ToPointer();
	for (int i = 0; i < int(strlen(str)); i++) {
		sDes[i] = str[i];
	}
	return Marshal::PtrToStringAnsi((System::IntPtr)str);
}

char* EncodeText(char* psText) {
	unsigned char sBit = psText[0] & 0x80;

	for (int i = 0; i < int(strlen(psText)) - 1; i++) {
		psText[i] = psText[i] << 1;
		psText[i] |= (psText[i + 1] & 0x80) >> 7;
	}

	psText[strlen(psText) - 1] = psText[strlen(psText) - 1] << 1;
	psText[strlen(psText) - 1] |= sBit >> 7;

	return psText;
}

char* DecodeText(char* psText) {
	unsigned char sBit = (psText[strlen(psText) - 1] & 0x01) << 7;
	
	for (int i = strlen(psText) - 1; i > 0; i--) {
		psText[i] = (psText[i] >> 1) & 0x7f;
		psText[i] |= (psText[i - 1] & 0x01) << 7;
	}

	psText[0] = (psText[0] >> 1) & 0x7f;
	psText[0] |= sBit;
	return psText;
}

int GetValueInt(std::string pText) {
	if (pText.empty()) return 0;
	int npos = pText.find("="),
		nval = atoi(pText.substr(npos + 1).c_str());
	return nval;
}

void qSort(string* sArr, int nFirst, int nLast, int dir) {
	string sMid = sArr[(nFirst + nLast) / 2];
	int i = nFirst, j = nLast;
	do {
		while (sArr[i].compare(sMid) * dir < 0) i++;
		while (sArr[j].compare(sMid) * dir > 0) j--;
		if (i < j) sArr[i].swap(sArr[j]);
		if (i <= j) i++;
		if (i <= j) j--;
	} while (i < j);
	if (nFirst < j) qSort(sArr, nFirst, j, dir);
	if (i < nLast) qSort(sArr, i, nLast, dir);
}