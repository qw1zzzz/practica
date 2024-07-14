#pragma once
#include <Windows.h>
#include <string>

using namespace System::Drawing;
using namespace System;


typedef struct _stRecursion {
	int nIdStruct;
	float nVal;
	float nSum;
	_stRecursion() {
		nIdStruct = 0;
		nVal = 0;
		nSum = 0;
	}
} stRecursion, *pStRecursion;

static CURSORINFO pci;

void drawAxisX(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec, int mod);
void drawAxisY(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec, int mod);
void drawGraph(Graphics^ pGraph, pStRecursion pRec, int pSizeRec, RECT pstRect, int mode);
void DrawTextRotate(Graphics^ pGraph, String^ pText, System::Drawing::Rectangle pRect, Font^ pFont, Brush^ pBrush, float angle);