#include "Labirint.h"

using namespace System::Drawing;

UINT nSRow = 0, nSCol = 16; //Координаты старта
UINT nERow = 31, nECol = 16; //Координаты конца

const int nL = 32;
const int nC = 32;

UINT nBit = 0b1000'0000'0000'0000'0000'0000'0000'0000;

UINT nRow = nSRow, nCol = nSCol; //Координаты жука

UINT* nMov = 0, * nPath = 0;

UINT nCash = 0;
COORD position;

int nWBlock = 16, nHBlock = 16; // Размер блока лабиринта
int nLC = 700, nTC = 200;       // Начальные координаты отрисовки

UINT lab[nL]{ 0b1111'1111'1111'1111'0111'1111'1111'1111,
				   0b1111'1111'1100'0000'0000'0011'1111'1111,
				   0b1111'1111'1001'1111'1111'1001'1111'1111,
				   0b1111'1111'0011'0011'1100'1100'1111'1111,
				   0b1111'1111'0111'1111'1111'1110'1111'1111,
				   0b1111'1111'0111'1011'1101'1110'1111'1111,
				   0b1111'1111'0011'1100'0011'1100'1111'1111,
				   0b1111'1111'1001'1111'1111'1001'1111'1111,
				   0b1111'1111'1100'0000'0000'0011'1111'1111,
				   0b1111'1111'1111'1110'0111'1111'1111'1111,
				   0b1111'1111'1111'1110'0111'1111'1111'1111,
				   0b1111'1100'0000'0000'0000'0000'0011'1111,
				   0b1111'0001'1101'1111'1111'1011'1000'1111,
				   0b1110'0111'1001'1111'1111'1001'1110'0111,
				   0b1110'1111'0011'1111'1111'1100'1111'0111,
				   0b1110'1110'0111'1111'1111'1110'0111'0111,
				   0b1110'1110'1110'0011'1100'0111'0111'0111,
				   0b1110'1100'0000'1000'0001'0000'0011'0111,
				   0b1110'1001'1110'0011'1100'0111'1001'0111,
				   0b1110'1011'1111'1111'1111'1111'1101'0111,
				   0b1110'0011'1111'1111'1111'1111'1100'0111,
				   0b1111'1001'1111'1111'1111'1111'1001'1111,
				   0b1111'1100'1111'0011'1100'1111'0011'1111,
				   0b1111'1110'0011'1000'0001'1100'0111'1111,
				   0b1111'1111'1000'1111'1111'0001'1111'1111,
				   0b1111'1111'1100'0111'1110'0011'1111'1111,
				   0b1111'1111'1111'0011'1100'1111'1111'1111,
				   0b1111'1111'1111'1000'0001'1111'1111'1111,
				   0b1111'1111'1111'1101'1011'1111'1111'1111,
				   0b1111'1111'1111'1101'1011'1111'1111'1111,
				   0b1111'1111'1111'1100'0011'1111'1111'1111,
				   0b1111'1111'1111'1111'0111'1111'1111'1111,
}/*, * nMov = 0*/;

int StartMoving(System::Drawing::Graphics^ graph) {
	nMov = new (UINT[nL]);
	memset(nMov, 0, sizeof(UINT) * nL);
	nPath = new UINT[nL];
	memset(nPath, 0, sizeof(UINT) * nL);

	int res = Moving(nRow, nCol, graph, false);
	delete nMov;
	return res;
}

//int Moving(char pnRow, char pnCol, const BOOL pKey) {
int Moving(char pnRow, char pnCol, System::Drawing::Graphics^ graph, const BOOL pKey) {
	int res = 0;

	System::Drawing::Rectangle rc(nLC, nTC, nWBlock * nL, nHBlock * nC);
	System::Drawing::Rectangle rcBlock(0, 0, nWBlock, nHBlock);
	System::Drawing::Color clr = System::Drawing::Color::Yellow; // :FromArgb(255, 192, 192, 192);
	Color clrIO = Color::FromArgb(0);
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(clr);

	rcBlock.Y = nTC + pnRow * nHBlock;
	rcBlock.X = nLC + nWBlock * pnCol;
	graph->FillRectangle(brush, rcBlock); // Отрисовка поля лабиринта

	nMov[pnRow] |= nBit >> pnCol; //Здесь был жук
	nPath[pnRow] |= nBit >> pnCol;

	if ((pnRow == nERow) && (pnCol == nECol))
		return 999;

	// Определить могу ли шагать вниз
	if (pnRow + 1 <= nL)
		if (!(lab[pnRow + 1] & (nBit >> pnCol)) && !(nMov[pnRow + 1] & (nBit >> pnCol)))
			if (res = Moving(pnRow + 1, pnCol, graph, pKey)) return res;

	// Определить могу ли шагать влево
	if (pnCol - 1 >= 0)
		if (!(lab[pnRow] & nBit >> (pnCol - 1)) && !(nMov[pnRow] & (nBit >> (pnCol - 1))))
			if (res = Moving(pnRow, pnCol - 1, graph, pKey)) return res;

	// Определить могу ли шагать  вправо
	if (pnCol + 1 <= nC)
		if (!(lab[pnRow] & nBit >> (pnCol + 1)) && !(nMov[pnRow] & (nBit >> (pnCol + 1))))
			if (res = Moving(pnRow, pnCol + 1, graph, pKey)) return res;

	// Определить могу ли шагать вверх
	if (pnRow - 1 >= 0)
		if (!(lab[nRow - 1] & (nBit >> pnCol)) && !(nMov[pnRow - 1] & (nBit >> pnCol)))
			if (res = Moving(pnRow - 1, pnCol, graph, pKey)) return res;

	rcBlock.Y = nTC + pnRow * nHBlock;
	rcBlock.X = nLC + nWBlock * pnCol;
	brush->Color = Color::Black;
	graph->FillRectangle(brush, rcBlock);    // Отрисовка поля лабиринта
	nPath[pnRow] &= ~(nBit >> pnCol);

	return 0;	
}

int GetRow() { return nRow; }
int GetCol() { return nCol; }

void LabirintKeys(int pKey) {
	switch (pKey) {
	case 27: {
		nRow = 0;
		nCol = 16;
	}break;
		// Влево
		case 37:{
			if (nCol - 1 < 0 || lab[nRow] & (nBit >> (nCol - 1))) {
				Beep(750, 300);
			}
			else {
				nCol--;
			}
			break;
		}
		// Вверх
		case 38: {
			if (nRow == 0 || (lab[nRow - 1] & (nBit >> nCol))) {
				Beep(750, 300);
			}
			else {
				nRow--;
			}
			break;
		}
		// Вправо
		case 39: {
			if (nCol + 1 > nC || lab[nRow] & (nBit >> (nCol + 1))) {
				Beep(750, 300);
			}
			else {
				nCol++;
			}
			break;
		}
		// Вниз
		case 40: {
			if (nRow == nL || lab[nRow + 1] & (nBit >> nCol)) {
				Beep(750, 300);
			}
			else {
				nRow++;
			}
			break;
		}
	}
}

MyAction LabirintDraw(System::Drawing::Graphics^ graph) {
	//void Labirint() {
	//	UINT vv = 0b1111'1111'0000'0000'1111'1111'0000'0000;
	//	unsigned char = sKey = 0;
	//	char* sTitle = 0;
	UINT i, j;
	//	UINT nWidChar = 0;
	//	UINT nHeiChar = 0;
	//	HDC = 0;
	//	Font* fnt = new Font();

	//	// Отрисовка места под лабиринт
	System::Drawing::Rectangle rc(nLC, nTC, nWBlock * nL, nHBlock * nC);
	System::Drawing::Rectangle rcBlock(0, 0, nWBlock, nHBlock);
	System::Drawing::Color clr = System::Drawing::Color::FromArgb(255, 192, 192, 192);
	Color clrIO = Color::FromArgb(0);
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(clr);

	graph->FillRectangle(brush, rc); // Отрисовка поля лабиринта

	//	SetConsoleTitle(L"Программа лабиринт");
	//	tB_title->Text = "Прохождение лабиринта.";
	//	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Получение дескриптора устройства стандартного вывода

	rcBlock.Width = nWBlock;
	rcBlock.Height = nHBlock;
		for (int i = 0; i < nL; i++) {
			rcBlock.Y = nTC + i * nHBlock;
			for (int j = 0; j < nC; j++) {
				rcBlock.X = nLC + nWBlock * j;
				/*if ((lab[i] & (nBit >> j))) {
					brush->Color = clrIO;
					graph->FillRectangle(brush, rcBlock);
				}
				else */
				if ((i == nRow) && (j == nCol)) {
					brush->Color = Color::Green; //clrIO
					graph->FillRectangle(brush, rcBlock);
				}
				else if ((i == nSRow) && (j == nSCol) || ((i == nERow) && (j == nECol))) {
					brush->Color = Color::Red; //clrIO;
					graph->FillRectangle(brush, rcBlock);
				}
				else if (!(lab[i] & (nBit >> j))) {
					if ((nPath != 0) && (nPath[i] & (nBit >> j)))
						brush->Color = Color::Yellow;
					else
						brush->Color = Color::Black;
				graph->FillRectangle(brush, rcBlock);
				}
			}
		}
		//Обработка завершения
		if ((nRow == nERow) && (nCol && nECol)){
			nRow = 0;
			nCol = 16;
			return act_LABIRINTEXIT;
		}
		else
			return act_LABIRINT;
}