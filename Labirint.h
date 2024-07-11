#pragma once
#include <Windows.h>
#include "MyHeader.h"

MyAction LabirintDraw(System::Drawing::Graphics^ graph);
void Labirint();
void LabirintKeys(int pKey);
//int Moving(char pnRow, char pnCol, const BOOL pKey);
int Moving(char pnRow, char pnCol, System::Drawing::Graphics^ graph, const BOOL pKey);
int GetRow();
int GetCol();
int StartMoving(System::Drawing::Graphics^ graph);