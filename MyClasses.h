#pragma once
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

void StringToChar(System::String^ s, std::string& os);
System::String^ CharToString(char* str);
char* EncodeText(char* psText);
char* DecodeText(char* psText);
int GetValueInt(std::string pText);
//string GetName(std::string pText);

class cID {
	protected:
		int nId;			// Идентификатор класса
		std::string sName;	// Идентификатор типа (название класса)
	public:
		cID() : nId(0), sName("") {}
		cID(int pId, string pName) : nId(pId), sName(pName) {}

		int GetId() { return nId; }
		string GetName() { return sName; }
		void SetId(int pId) { nId = pId; }
		virtual void SetName(string pName) final { sName = pName; }
};

class cFigure : public cID {
	protected:
		int nx,				// Верхний левый угол по оси X
			ny,				// Верхний левый угол по оси Y
			nWid,			// Ширина фигуры
			nHei;			// Высота фигуры
		int brushColor,		// Цвет заливки
			penColor;		// Цвет контура
	public:
		cFigure() : nx(0), ny(0), nWid(100), nHei(50), brushColor(RGB(225, 150, 245)), penColor(RGB(128, 0, 128)) {
			sName = "cFigure";
		}
		cFigure(int pNx, int pNy) : nx(pNx), ny(pNy) {
			nWid = 100;
			nHei = 50;
			brushColor = RGB(225, 50, 45);
			penColor = RGB(255, 255, 255);
			sName = "cFigure";
		}
		cFigure(int pNx, int pNy, int pNWid, int pNHei) {
			nx = pNx;
			ny = pNy;
			nWid = pNWid;
			nHei = pNHei;
			brushColor = RGB(25, 50, 245);
			penColor = RGB(128, 128, 128);
			sName = "cFigure";
		}
		cFigure(int pNx, int pNy, int pId) : nx(pNx), ny(pNy), cID(pId, "cFigure") {
			nWid = 100;
			nHei = 50;
			brushColor = RGB(225, 50, 45);
			penColor = RGB(255, 255, 255);
		}

		int X() { return nx; }
		void X(int px) { nx = px; }
		int Y() { return ny; }
		void Y(int py) { ny = py; }

		int Width() { return nWid; }
		void Width(int pWid) { nWid = pWid; }
		int Height() { return nHei; }
		void Height(int pHei) { nHei = pHei; }

		int Left() { return nx; }
		int Top() { return ny; }
		int Right() { return nx + nWid; }
		int Bottom() { return ny + nHei; }

		int MiddleX() { return nx + nWid / 2; }
		int MiddleY() { return ny + nHei / 2; }

		int BrushColor() { return brushColor; }
		void BrushColor(int pCol) { brushColor = pCol; }
		int PenColor() { return penColor; }
		void PenColor(int pCol) { penColor = pCol; }

		//void Move(int px, int py, bool anime = false) {
		//	if (anime) {
		//		int dx = (px - nx),
		//			dy = (py - ny);
		//		for (int i = 1; i <= 30; i++) {
		//			//Draw(System::Drawing::Graphics^ graph);
		//			nx = nx + dx * i / 30;
		//			ny = ny + dy * i / 30;
		//			//SetWidth(nWid);
		//			//SetHeight(nHei);
		//			//Draw();
		//			Sleep(100 / i);
		//		}
		//	}
		//	else {
		//		nx = px;
		//		ny = py;
		//		//SetWidth(nWid);
		//		//SetHeight(nHei);
		//	}
		//}

		virtual void Save(string psFile) {
			ofstream fOut(psFile, ios::app);
			if (fOut) {
				fOut << sName << endl;
				fOut << "id=" << nId << endl;
				fOut << "x=" << nx << endl;
				fOut << "y=" << ny << endl;
				fOut << "width=" << nWid << endl;
				fOut << "height=" << nHei << endl;
				fOut << "bcolor=" << brushColor << endl;
				fOut << "pcoloe=" << penColor << endl;
				fOut << "end\n";
				fOut.close();
			}
		}

		int Load(string sFile, int cursor) {
			ifstream fIn(sFile);
			fIn.seekg(cursor, ios::beg);
			if (fIn) {
				int x, y;
				string text;
				getline(fIn, text); nId = GetValueInt(text);
				getline(fIn, text); nx = GetValueInt(text);
				getline(fIn, text); ny = GetValueInt(text);
				getline(fIn, text); nWid = GetValueInt(text);
				getline(fIn, text); nHei = GetValueInt(text);
				getline(fIn, text); brushColor = GetValueInt(text);
				getline(fIn, text); penColor = GetValueInt(text);
				getline(fIn, text);
				return (int)fIn.tellg();
			}
			return 0;
		}

		void SetParam(string pText) {

		}
		//virtual void Draw() = 0;
		virtual void Draw(System::Drawing::Graphics^ graph) = 0;
		//virtual int ID() = 0;
};
//
class cRectangle : public cFigure {
	public:
		cRectangle() { cID::sName = "cRectangle"; }
		cRectangle(int pNx, int pNy) : cFigure(pNx, pNy) { cID::sName = "cRectangle"; }
		cRectangle(int pNx, int pNy, int pNWid, int pNHei) : cFigure(pNx, pNy, pNWid, pNHei) { cID::sName = "cRectangle"; }
		cRectangle(int pNx, int pNy, int pId) : cFigure(pNx, pNy, pId) { cID::sName = "cRectangle"; }

		void Draw(System::Drawing::Graphics^ graph) {
		//void Draw() {
			System::Drawing::Color bClr = System::Drawing::Color::FromArgb(255, GetRValue(brushColor), GetGValue(brushColor), GetBValue(brushColor));
			System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bClr);
			System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(Color::FromArgb(255, GetRValue(penColor), GetGValue(penColor), GetBValue(penColor)));
			System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
			System::Drawing::Rectangle rc(nx, ny, nWid, nHei);

			graph->FillRectangle(brush, rc);
			graph->DrawRectangle(pen, rc);

			int clr = ~brushColor;
			brush->Color = Color::FromArgb(255, GetRValue(clr), GetGValue(clr), GetBValue(clr));
			String^ text = Convert::ToString(nId);
			graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
		}
};
//
class cTriangle : public cFigure {
	public:
		cTriangle() { brushColor = RGB(55, 250, 45); penColor = RGB(255, 55, 255); cID::sName = "cTriangle"; }
		cTriangle(int pNx, int pNy) : cFigure(pNx, pNy) { brushColor = RGB(55, 250, 45); penColor = RGB(255, 55, 255); cID::sName = "cTriangle"; }
		cTriangle(int pNx, int pNy, int pNWid, int pNHei) : cFigure(pNx, pNy, pNWid, pNHei) { brushColor = RGB(55, 250, 45); penColor = RGB(255, 55, 255); cID::sName = "cTriangle"; }
		cTriangle(int pNx, int pNy, int pId) : cFigure(pNx, pNy, pId) { brushColor = RGB(55, 250, 45); penColor = RGB(255, 55, 255); cID::sName = "cTriangle"; }

		void Draw(System::Drawing::Graphics^ graph) {
		//void Draw() {
			System::Drawing::Color bClr = System::Drawing::Color::FromArgb(255, GetRValue(brushColor), GetGValue(brushColor), GetBValue(brushColor));
			System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bClr);
			System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(Color::FromArgb(255, GetRValue(penColor), GetGValue(penColor), GetBValue(penColor)));

			Pen^ blackPen = gcnew Pen(Color::Black, 3);

			PointF pt1 = PointF((float)nx + nWid / 2, (float)ny);
			PointF pt2 = PointF((float)nx + nWid, (float)ny + nHei);
			PointF pt3 = PointF((float)nx, (float)ny + nHei);
			PointF pt4 = PointF((float)pt1.X, (float)pt1.Y);
			cli::array<PointF, 1 >^ pt = { pt1, pt2, pt3, pt4 };

			graph->DrawPolygon(pen, pt);
			graph->FillPolygon(brush, pt);

			Font myFont(L"Arial", 12);
			Point origin(0.0f, 0.0f);
			int clr = ~brushColor;
			brush->Color = Color::FromArgb(255, GetRValue(clr), GetGValue(clr), GetBValue(clr));
			String^ text = Convert::ToString(nId);
			graph->DrawString(text, % myFont, brush, MiddleX() - 5, MiddleY() - 5);
		}
};
//
class cEllipse : public cFigure {
	public:
		cEllipse() { brushColor = RGB(55, 25, 255); penColor = RGB(255, 255, 55); cID::sName = "cEllipse"; }
		cEllipse(int pNx, int pNy) : cFigure(pNx, pNy) { brushColor = RGB(55, 25, 255); penColor = RGB(255, 255, 55); cID::sName = "cEllipse"; }
		cEllipse(int pNx, int pNy, int pNWid, int pNHei) : cFigure(pNx, pNy, pNWid, pNHei) { brushColor = RGB(55, 25, 255); penColor = RGB(255, 255, 55); cID::sName = "cEllipse"; }
		cEllipse(int pNx, int pNy, int pId) : cFigure(pNx, pNy, pId) { brushColor = RGB(55, 25, 255); penColor = RGB(255, 255, 55); cID::sName = "cEllipse"; }

		void Draw(System::Drawing::Graphics^ graph) {
		//void Draw() {
			System::Drawing::Color bClr = System::Drawing::Color::FromArgb(255, GetRValue(brushColor), GetGValue(brushColor), GetBValue(brushColor));
			System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bClr);
			System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(Color::FromArgb(255, GetRValue(penColor), GetGValue(penColor), GetBValue(penColor)));
			System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
			System::Drawing::Rectangle rc(nx, ny, nWid, nHei);

			graph->FillEllipse(brush, rc);
			graph->DrawEllipse(pen, rc);

			
			int clr = ~brushColor;
			brush->Color = Color::FromArgb(255, GetRValue(clr), GetGValue(clr), GetBValue(clr));
			String^ text = Convert::ToString(nId);
			graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
		}
};
//
class cUnit {
	cFigure* fig1;
	cFigure* fig2;
	int color;
	int width;

	public:
		cUnit(cFigure* pf1 = 0, cFigure* pf2 = 0) : fig1(pf1), fig2(pf2) { color = RGB(255, 255, 0); width = 5; }
		~cUnit() { fig1 = 0; fig2 = 0; }

		cFigure* GetFigure1() { return fig1; }
		cFigure* GetFigure2() { return fig2; }
		void SetFigure1(cFigure* pFig = 0) { fig1 = pFig; }
		void SetFigure2(cFigure* pFig = 0) { fig2 = pFig; }
		void Add(cFigure* pf1, cFigure* pf2) { fig1 = pf1; fig2 = pf2; }
		int Color() { return color; }
		void Color(int color) { this->color = color; }
		int Width() { return width; }
		void Width(int width) { this->width = width; }

		void Draw(System::Drawing::Graphics^ graph) {
		//void Draw() {
			Pen^ pen = gcnew Pen(Color::Black, 3);
			graph->DrawLine(pen, fig1->MiddleX(), fig1->MiddleY(), fig2->MiddleX(), fig2->MiddleY());

			if ((fig1 == 0) || (fig2 == 0)) return;
		}
};
//
class cManager {
private:
	cFigure** oFigure;
	int nCount;
	cUnit** oUnit;
	int nUnit;
public:
	cManager() : oFigure(NULL), nCount(0), oUnit(NULL), nUnit(0) {}
	~cManager() {
		for (int i = 0; i < nCount; i++) {
			//delete GetFigure(0);

		}
		if (oFigure != NULL) delete oFigure;

		if (oUnit != NULL) {
			cUnit* obj = 0;
			for (int i = 0; i < nUnit; i++) {
				obj = oUnit[i];
				delete obj;
			}
			delete oUnit;
		}
	}

	int AddFigure(cFigure* pFigure) {
		if (pFigure == NULL) return -1;
		oFigure = (cFigure**)realloc(oFigure, sizeof(cFigure*) * (++nCount));
		oFigure[nCount - 1] = pFigure;
		return nCount - 1;
	}

	int AddUnit(cUnit* pUnit) {
		if (pUnit == NULL) return -1;
		oUnit = (cUnit**)realloc(oUnit, sizeof(cUnit*) * (++nUnit));
		oUnit[nUnit - 1] = pUnit;
		return nUnit - 1;
	}

	void Clear() {
		oFigure = (cFigure**)realloc(oFigure, 0);
		nCount = 0;
		oUnit = (cUnit**)realloc(oUnit, 0);
		nUnit = 0;
	}

	int InsertFigure(cFigure* pFigure, int pIndex) {
		if (pFigure == NULL) return -1;
		if (pIndex < 0) pIndex = 0;
		if (pIndex >= nCount) return AddFigure(pFigure);

		oFigure = (cFigure**)realloc(oFigure, sizeof(cFigure*) * (++nCount));
		for (int i = nCount = 2; i >= pIndex; i--) {
			oFigure[i + 1] = oFigure[i];
		}
		oFigure[pIndex] = pFigure;
		return pIndex;
	}

	int Size() { return nCount; }

	void Save(string pFile) {
		cFigure* fig = 0;
		ofstream fOut1(pFile);
		fOut1.close();
		for (int i = 0; i < nCount; i++) {
			fig = oFigure[i];
			if (fig) {
				fig->Save(pFile);
			}
		}

		ofstream fOut(pFile, ios::app);
		for (int i = 0; i < nUnit; i++) {
			cUnit* unit = oUnit[i];
			if (fOut) {
				fOut << "cUnit" << endl;
				fOut << "id1=" << unit->GetFigure1()->GetId() << endl;
				fOut << "id2=" << unit->GetFigure2()->GetId() << endl;
				fOut << "end\n";
			}
		}
		fOut.close();
	}

	void Load(string pFile) {
		if (pFile.empty()) return;
		ifstream fIn;
		int cur = 0;
		string sText;
		while (fIn) {
			fIn.open(pFile);
			fIn.seekg(cur);
			getline(fIn, sText);
			cur = (int)fIn.tellg();
			fIn.close();
			if (sText.compare("cRectangle") == 0) {
				cRectangle* fig = new cRectangle;
				cur = fig->Load(pFile, cur);
				AddFigure(fig);
			}
			else if (sText.compare("cTriangle") == 0)
			{
				cTriangle* fig = new cTriangle;
				cur = fig->Load(pFile, cur);
				AddFigure(fig);
			}
			else if (sText.compare("cEllipse") == 0)
			{
				cEllipse* fig = new cEllipse;
				cur = fig->Load(pFile, cur);
				AddFigure(fig);
			}
			else if (sText.compare("cUnit") == 0) {
				fIn.open(pFile);
				fIn.seekg(cur);
				
				cUnit* unit = new cUnit;
				cFigure* fig1 = 0;
				cFigure* fig2 = 0;
				string text;
				int nId;
				getline(fIn, text);
				nId = GetValueInt(text);
				fig1 = GetFigureId(nId);
				getline(fIn, text);
				nId = GetValueInt(text);
				fig2 = GetFigureId(nId);
				unit->Add(fig1, fig2);
				AddUnit(unit);
				getline(fIn, text);
				cur = (int)fIn.tellg();
				fIn.close();
			}
		}
		fIn.close();
	}
	
	cFigure* GetFigure(int pX, int pY) {
		cFigure* fig = 0;
		for (int i = 0; i < nCount; i++) {
			fig = oFigure[i];
			if ((fig->X() <= pX) && (pX <= fig->Right()) && (fig->Y() <= pY) && (pY <= fig->Bottom())) {
				return fig;
			}
			fig = 0;
		}
		return fig;
	}
	cFigure* GetFigure(int pIndex) {
		if ((pIndex < 0) || (pIndex >= nCount)) return NULL;
		return oFigure[pIndex];
	}

	cFigure* GetFigureId(int pId) {
		for (int i = 0; i < nCount; i++) {
			if (oFigure[i]->GetId() == pId) return oFigure[i];
		}
		return NULL;
	}

	void Draw(System::Drawing::Graphics^ graph) {
		for (int i = 0; i < nUnit; i++) {
			oUnit[i]->Draw(graph);
		}
		for (int i = 0; i < nCount; i++) {
			oFigure[i]->Draw(graph);
		}
	}

	/*void Draw(string pcName, System::Drawing::Graphics^ graph) {
		for (int i = 0; i < nCount; i++) {
			if (oFigure[i]->GetName().compare(pcName) == 0) oFigure[i]->Draw(graph);
		}
	}*/
};