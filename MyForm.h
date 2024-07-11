#pragma once
#include <Windows.h>
#include <windef.h>
#include <string>
#include "InputData.h"
#include "MyClasses.h"
#include "MyHeader.h"
#include "Recursion.h"
#include "Labirint.h"



namespace app {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		static stRecursion* RecOut;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	public:

	public:

	public:

		   MyAction onAction;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menu;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������AppToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tB_title;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ lB_output;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������21ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������21ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������32ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������4ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ p_output;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������21ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������21ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������32ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������AppToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tB_title = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lB_output = (gcnew System::Windows::Forms::ListBox());
			this->p_output = (gcnew System::Windows::Forms::Panel());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::Gray;
			this->menu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->�����ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->��������ToolStripMenuItem, this->���������������ToolStripMenuItem, this->����������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->������ToolStripMenuItem, this->�������AppToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(1589, 29);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(69, 25);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->���������������������ToolStripMenuItem,
					this->������������������21ToolStripMenuItem, this->������������������22ToolStripMenuItem, this->������������������21ToolStripMenuItem1,
					this->������������������32ToolStripMenuItem, this->������������������4ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(149, 25);
			this->�������������ToolStripMenuItem->Text = L"������ �������";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->���������������������ToolStripMenuItem->Text = L"�������� � ������������";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������������ToolStripMenuItem_Click);
			// 
			// ������������������21ToolStripMenuItem
			// 
			this->������������������21ToolStripMenuItem->Name = L"������������������21ToolStripMenuItem";
			this->������������������21ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->������������������21ToolStripMenuItem->Text = L"������������ ������ �2.1";
			this->������������������21ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������21ToolStripMenuItem_Click);
			// 
			// ������������������22ToolStripMenuItem
			// 
			this->������������������22ToolStripMenuItem->Name = L"������������������22ToolStripMenuItem";
			this->������������������22ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->������������������22ToolStripMenuItem->Text = L"������������ ������ �2.2";
			// 
			// ������������������21ToolStripMenuItem1
			// 
			this->������������������21ToolStripMenuItem1->Name = L"������������������21ToolStripMenuItem1";
			this->������������������21ToolStripMenuItem1->Size = System::Drawing::Size(301, 26);
			this->������������������21ToolStripMenuItem1->Text = L"������������ ������ �3.1";
			// 
			// ������������������32ToolStripMenuItem
			// 
			this->������������������32ToolStripMenuItem->Name = L"������������������32ToolStripMenuItem";
			this->������������������32ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->������������������32ToolStripMenuItem->Text = L"������������ ������ �3.2";
			// 
			// ������������������4ToolStripMenuItem
			// 
			this->������������������4ToolStripMenuItem->Name = L"������������������4ToolStripMenuItem";
			this->������������������4ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->������������������4ToolStripMenuItem->Text = L"������������ ������ �4";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������ToolStripMenuItem1 });
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(101, 25);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(162, 25);
			this->���������������ToolStripMenuItem->Text = L"�������� � ������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(116, 25);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(120, 25);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(76, 25);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �������AppToolStripMenuItem
			// 
			this->�������AppToolStripMenuItem->BackColor = System::Drawing::Color::Red;
			this->�������AppToolStripMenuItem->Name = L"�������AppToolStripMenuItem";
			this->�������AppToolStripMenuItem->Size = System::Drawing::Size(121, 25);
			this->�������AppToolStripMenuItem->Text = L"����� �� app";
			this->�������AppToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������AppToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tB_title);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1589, 93);
			this->panel1->TabIndex = 1;
			// 
			// tB_title
			// 
			this->tB_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tB_title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tB_title->Enabled = false;
			this->tB_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tB_title->Location = System::Drawing::Point(0, 0);
			this->tB_title->Multiline = true;
			this->tB_title->Name = L"tB_title";
			this->tB_title->Size = System::Drawing::Size(1589, 93);
			this->tB_title->TabIndex = 0;
			this->tB_title->Text = L"����� �������";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->lB_output);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(478, 397);
			this->panel2->TabIndex = 2;
			// 
			// lB_output
			// 
			this->lB_output->BackColor = System::Drawing::Color::Silver;
			this->lB_output->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lB_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lB_output->FormattingEnabled = true;
			this->lB_output->ItemHeight = 18;
			this->lB_output->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1. ������", L"2. �����" });
			this->lB_output->Location = System::Drawing::Point(0, 0);
			this->lB_output->Name = L"lB_output";
			this->lB_output->Size = System::Drawing::Size(478, 397);
			this->lB_output->TabIndex = 4;
			this->lB_output->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::lB_output_KeyDown);
			// 
			// p_output
			// 
			this->p_output->Dock = System::Windows::Forms::DockStyle::Fill;
			this->p_output->Enabled = false;
			this->p_output->Location = System::Drawing::Point(478, 122);
			this->p_output->Name = L"p_output";
			this->p_output->Size = System::Drawing::Size(1111, 397);
			this->p_output->TabIndex = 3;
			this->p_output->Visible = false;
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(180, 26);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1589, 519);
			this->Controls->Add(this->p_output);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��������";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		// ����� ����� ������
		private: System::Void �������AppToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			exit(0);
		}

		// ������� ��� ��������
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			//ClearToNewTask();
		}

		// ������� ����������
		public:  void ClearToNewTask() {
			tB_title->Text = "�������� ����� ���� ��� ������� ������.";
			tB_title->Enabled = false;
			lB_output->Items->Clear();
			p_output->Visible = false;
			onAction = act_NONE;
		}

		// �����
		private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();

			tB_title->Text = " �������:\r\n ������� �� �������, ���������� �� 20 ���������, ����� ��������������� �����.";

			InputData^ f_input = gcnew InputData;
			f_input->SetLable("������� �����:");
			if (f_input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = f_input->GetText();
				if (sRes == "") {
					return;
				}

				int nRes = Convert::ToInt32(sRes);
				int nNumber, nCount = 0;
				for (int i = 0; i < 20; i++) {
					nNumber = rand();
					if ((nNumber & nRes) == nRes) {
						lB_output->Items->Add(nNumber);
						nCount++;
					}
				}
				tB_title->AppendText("\r\n � ������ ���� ��������� " + Convert::ToString(nCount) + " ���������, �������������� ������� �����");
			}
			else {
				f_input->Close();
				return;
			}
		}

		// �������� � ������������
		private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			tB_title->Text = " ��������� �������� c������ 1 ����� ������ 1����3: ����� ���� �������������.";
		}

		
		// ����������
		private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			InputData^ ipd = gcnew InputData;

			tB_title->Text = " ������� ������ � ����������� ��������� � �������.";
			ipd->SetLable("������� ����� ��� ����������");

			if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ stext = ipd->GetText();
				tB_title->AppendText("\r\n ��������� ������: \'");
				tB_title->AppendText(stext + "\'");
				//ipd->Visible = false;

				std::string ss;
				StringToChar(stext, ss);
				lB_output->Items->Add(" ����������� �����: ");
				const char* sch = ss.c_str();
				std::string shifr = EncodeText((char*)ss.c_str());
				lB_output->Items->Add(CharToString((char*)shifr.c_str()));
				lB_output->Items->Add("");

				lB_output->Items->Add(" �������������� �����: ");
				std::string unshifr = DecodeText((char*)shifr.c_str());
				lB_output->Items->Add(CharToString((char*)unshifr.c_str()));
			}
			ipd->Close();
		}

		// ���� 2.1 ���������� ������� ������������� T
		private: System::Void ������������������21ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			tB_title->Text = " �������: ����� ������ ������������� T\r\n ���� ���������� P, S, R. ����������: Q, T1, T2 � ������ ������������� T.";

			InputData^ iL1 = gcnew InputData;
			iL1->SetLable("������� ���������� P, S, R ����� ������");

			if (iL1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			}
			iL1->Close();
		}

		// �������� � ������
		public: void Recursion();
		private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			Recursion();
			onAction = act_RECURSION;
			Refresh();
		}
		// ���������
		private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			switch (onAction) {
				case act_LABIRINT: {
					panel2->Visible = false;
					onAction = LabirintDraw(e->Graphics);
					if (onAction == act_LABIRINTEXIT) Refresh();
				} break;
				case act_LABIRINTEXIT: {
					panel2->Visible = true;
					lB_output->Items->Clear();
					lB_output->Items->Add("��� ������ ������ �� ���������! ���!");
					LabirintDraw(e->Graphics);
					
				} break;
				case act_LABIRINTPATH: {
					LabirintDraw(e->Graphics);
					StartMoving(e->Graphics);
					onAction = act_LABIRINT;
				} break;
				case act_BREAK: {
					panel2->Visible = true;
					lB_output->Items->Clear();
					lB_output->Items->Add("�������� �������� ����������!");
					onAction = act_NONE;
				} break;
				case act_RECURSION: {
					RECT rct = { 500, 200, 1500, 600 };
					//p_output->Visible = false;
					drawGraph(e->Graphics, RecOut, 11, rct);
				} break;
				default: {

				}
			}
		}
		// ������� ���������� �� ���� �����
		private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			onAction = act_NONE;
			lB_output->Items->Clear();
			Refresh();
		}

		// ������� �� ������
		private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			switch (e->KeyData) {
				case System::Windows::Forms::Keys::F5:
					onAction = act_NONE;
					lB_output->Items->Clear();
					Refresh();
					break;
			}

			if (onAction = act_LABIRINT) {
				switch (e->KeyValue) {
					case 27: {
						onAction = act_BREAK;
						Refresh();
						break;
					}
					case 115: {
						onAction = act_LABIRINTPATH;
						Refresh();
						
						break;
					}
					case 37: case 38: case 39: case 40: {

						LabirintKeys(e->KeyValue);
						Refresh();
						break;
					}
					default:;
				};
			}
		}
		// ������� �� ������
		private: System::Void lB_output_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			MyForm_KeyDown(this, e);
		}
		private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Visible = false;
			tB_title->Text = "������ �������� \r\n��� ���������� ����������� �������";
			onAction = act_LABIRINT;
			this->Focus();
			Refresh();
			/*Labirint(0);
			panel2->Visible = true;*/
		}
	};
}