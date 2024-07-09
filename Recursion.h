#pragma once
#include <Windows.h>
#include <string>

using namespace System::Drawing;
using namespace System;

typedef struct _stRecursion {
	int nIdStruct;
	double nVal;
	double nSum;
	_stRecursion() {
		nIdStruct = 0;
		nVal = 0;
		nSum = 0;
	}
} stRecursion, *pStRecursion;

static CURSORINFO pci;

void drawAxisX(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec);
void drawAxisY(Graphics^ pGraph, RECT pArea, float pMin, float pMax, int pSec);
void drawGraph(Graphics^ pGraph, pStRecursion pRec, int pSizeRec, RECT pstRect);
void DrawTextRotate(Graphics^ pGraph, String^ pText, System::Drawing::Rectangle pRect, Font^ pFont, Brush^ pBrush, float angle);