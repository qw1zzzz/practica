#pragma once
#include <Windows.h>
#include <windef.h>
#include <string>
#include "InputData.h"
#include "MyClasses.h"
#include "MyHeader.h"
#include "Recursion.h"
#include "Labirint.h"
#include <iomanip>



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
		static cManager* mng = 0;
		static cFigure* ActiveClass = 0;
		static int nx, ny, dx, dy;

		MyAction onAction;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	public:

	public:

	public:
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
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������AppToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tB_title = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lB_output = (gcnew System::Windows::Forms::ListBox());
			this->p_output = (gcnew System::Windows::Forms::Panel());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
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
			this->������������������22ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������22ToolStripMenuItem_Click);
			// 
			// ������������������21ToolStripMenuItem1
			// 
			this->������������������21ToolStripMenuItem1->Name = L"������������������21ToolStripMenuItem1";
			this->������������������21ToolStripMenuItem1->Size = System::Drawing::Size(301, 26);
			this->������������������21ToolStripMenuItem1->Text = L"������������ ������ �3.1";
			this->������������������21ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::������������������21ToolStripMenuItem1_Click);
			// 
			// ������������������32ToolStripMenuItem
			// 
			this->������������������32ToolStripMenuItem->Name = L"������������������32ToolStripMenuItem";
			this->������������������32ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->������������������32ToolStripMenuItem->Text = L"������������ ������ �3.2";
			this->������������������32ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������32ToolStripMenuItem_Click);
			// 
			// ������������������4ToolStripMenuItem
			// 
			this->������������������4ToolStripMenuItem->Name = L"������������������4ToolStripMenuItem";
			this->������������������4ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->������������������4ToolStripMenuItem->Text = L"������������ ������ �4";
			this->������������������4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������4ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������ToolStripMenuItem1 });
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(101, 25);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(159, 26);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem1_Click);
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
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
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
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->�������������������������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(76, 25);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(317, 26);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(317, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(317, 26);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(317, 26);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(317, 26);
			this->�������������������������ToolStripMenuItem->Text = L"���������� �������� �������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->�������������ToolStripMenuItem->Text = L"�������� �����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
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
			this->lB_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lB_output->FormattingEnabled = true;
			this->lB_output->ItemHeight = 20;
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
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������������ToolStripMenuItem1,
					this->�������������������ToolStripMenuItem, this->���������������������ToolStripMenuItem, this->��������������ToolStripMenuItem1,
					this->��������������ToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(219, 114);
			// 
			// �������������ToolStripMenuItem1
			// 
			this->�������������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������������ToolStripMenuItem1,
					this->�����������ToolStripMenuItem1, this->������ToolStripMenuItem1, this->�������ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
			this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(218, 22);
			this->�������������ToolStripMenuItem1->Text = L"������� ������";
			// 
			// �������������ToolStripMenuItem1
			// 
			this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
			this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(163, 22);
			this->�������������ToolStripMenuItem1->Text = L"�������������";
			this->�������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem1_Click);
			// 
			// �����������ToolStripMenuItem1
			// 
			this->�����������ToolStripMenuItem1->Name = L"�����������ToolStripMenuItem1";
			this->�����������ToolStripMenuItem1->Size = System::Drawing::Size(163, 22);
			this->�����������ToolStripMenuItem1->Text = L"�����������";
			this->�����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(163, 22);
			this->������ToolStripMenuItem1->Text = L"������";
			this->������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���ToolStripMenuItem,
					this->������ToolStripMenuItem
			});
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(218, 22);
			this->�������������������ToolStripMenuItem->Text = L"�������� ���� �������";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->���ToolStripMenuItem->Text = L"���";
			this->���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->������ToolStripMenuItem
			});
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(218, 22);
			this->���������������������ToolStripMenuItem->Text = L"�������� ������ �������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem1
			// 
			this->��������������ToolStripMenuItem1->Name = L"��������������ToolStripMenuItem1";
			this->��������������ToolStripMenuItem1->Size = System::Drawing::Size(218, 22);
			this->��������������ToolStripMenuItem1->Text = L"��������� �����";
			this->��������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem1
			// 
			this->��������������ToolStripMenuItem1->Name = L"��������������ToolStripMenuItem1";
			this->��������������ToolStripMenuItem1->Size = System::Drawing::Size(218, 22);
			this->��������������ToolStripMenuItem1->Text = L"��������� �����";
			this->��������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
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
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��������";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
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
			ClearToNewTask();
		}

		// ������� ����������
		public:  void ClearToNewTask() {
			tB_title->Text = "�������� ����� ����.";
			tB_title->Enabled = false;
			lB_output->Items->Clear();
			panel2->Visible = false;
			onAction = act_NONE;
		}

		// �����
		private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;
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
			panel2->Visible = true;
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
			panel2->Visible = true;
			InputData^ iL1P = gcnew InputData;
			InputData^ iL1S = gcnew InputData;
			InputData^ iL1R = gcnew InputData;
			int p, s, r, q, t1, t2, iT;
			tB_title->Text = " ������������ ������ 2.1\r\n �������: ����� ������ ����������� T.\r\n ���� ���������� P, S, R. ����������: Q, T1, T2 � ������ ������������� T.";
			
			iL1P->SetLable("������� ���������� P");

			if (iL1P->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1P->GetText();
				if (sRes == "") return;

				p = Convert::ToInt32(sRes);
			}
			iL1P->Close();

			iL1S->SetLable("������� ���������� S");

			if (iL1S->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1S->GetText();
				if (sRes == "") return;

				s = Convert::ToInt32(sRes);
			}
			iL1S->Close();

			iL1R->SetLable("������� ���������� R");

			if (iL1R->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1R->GetText();
				if (sRes == "") return;

				r = Convert::ToInt32(sRes);
			}
			iL1R->Close();

			lB_output->Items->Add("P = " + p + "\tS = " + s + "\tR = " + r);
			lB_output->Items->Add("--------------------------------------");
			if (!(p == 0 && s == 0 && r == 0)) {
				q = abs(s - r) - pow(p, 2);
				lB_output->Items->Add("Q = " + q);
				t1 = p + s + r;
				lB_output->Items->Add("T1 = " + t1);
				if (q <= 0) {
					if (q == 0) {
						t2 = 0;
					}
					else {
						t2 = 1 - q;
					}
				}
				else t2 = abs(q);
				lB_output->Items->Add("T2 = " + t2);
				if (t1 > t2) {
					iT = 1;
				}
				else iT = 2;
				lB_output->Items->Add("--------------------------------------");
				lB_output->Items->Add("������ �����������: " + iT);
			}
			else { 
				tB_title->Text = "������! �������� ������!";
				panel2->Visible = false;
			};
		}
		
		// ���� 2.2 �������� ������������ ������������
		private: System::Void ������������������22ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;
			InputData^ iL1A = gcnew InputData;
			InputData^ iL1B = gcnew InputData;
			InputData^ iL1C = gcnew InputData;

			int a, b, c;
			std::string answer;

			tB_title->Text = " ������������ ������ 2.2 \r\n �������: ���������� �������� �� ����������� ��������������.";

			iL1A->SetLable("������� ������� A");
			iL1B->SetLable("������� ������� B");
			iL1C->SetLable("������� ������� C");

			if (iL1A->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1A->GetText();
				if (sRes == "") return;

				a = Convert::ToInt32(sRes);
			}
			iL1A->Close();

			if (iL1B->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1B->GetText();
				if (sRes == "") return;

				b = Convert::ToInt32(sRes);
			}
			iL1B->Close();

			if (iL1C->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1C->GetText();
				if (sRes == "") return;

				c = Convert::ToInt32(sRes);
			}
			iL1C->Close();

			lB_output->Items->Add("A = " + a + "\tB = " + b + "\tC = " + c);
			lB_output->Items->Add("--------------------------------------");
			lB_output->Items->Add("������� �������:");
			if (a > 0 && b > 0 && c > 0) {
				if ((a + b > c) && (a + c > b) && (b + c > a)) {
					if ((a == b) && (b == c)) {
						lB_output->Items->Add("����������� �������������� � ���������� A = " + a);
					}
					else if (a == b) {
						lB_output->Items->Add("����������� �������������� � ���������� � = " + c);
					}
					else if (b == c) {
						lB_output->Items->Add("����������� �������������� � ���������� A = " + a);
					}
					else if (a == c) {
						lB_output->Items->Add("����������� �������������� � ���������� B = " + b);
					}
					else lB_output->Items->Add("����������� ������ ����");

				}
				else lB_output->Items->Add("����������� �� ����������.");
			}
			else lB_output->Items->Add("������������ ������.");
		}

		// ���� 3.1 ���������� ����� ������� � ��� ���������
		private: System::Void ������������������21ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;
			InputData^ iL1A = gcnew InputData;
			InputData^ iL1N = gcnew InputData;
			InputData^ iL1Kd = gcnew InputData;
			InputData^ iL1K1 = gcnew InputData;
			InputData^ iL1K = gcnew InputData;


			int a, k, k1, x1, n, counter = 0;
			float x, y, kd, dx;

			tB_title->Text = " ������������ ������ 3.1\r\n �������: ��������� .";

			iL1A->SetLable("������� ������������� a");
			iL1N->SetLable("������� ������������� N");
			iL1Kd->SetLable("������� ������������� kd");
			iL1K1->SetLable("������� �������� ��� k1");

			if (iL1A->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1A->GetText();
				if (sRes == "") return;

				a = Convert::ToInt32(sRes);
			}
			iL1A->Close();

			if (iL1N->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1N->GetText();
				if (sRes == "") return;

				n = Convert::ToInt32(sRes);
			}
			iL1N->Close();

			if (iL1Kd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1Kd->GetText();
				if (sRes == "") return;

				kd = Convert::ToDouble(sRes);
			}
			iL1Kd->Close();

			if (iL1K1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1K1->GetText();
				if (sRes == "") return;

				k1 = Convert::ToInt32(sRes);
			}
			iL1K1->Close();

			iL1K->SetLable("������� �������� ��� k (k>" + k1 + ")");

			if (iL1K->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = iL1K->GetText();
				if (sRes == "") return;

				k = Convert::ToInt32(sRes);
			}
			iL1K->Close();


			lB_output->Items->Add("a = " + a + "\tN = " + n + "\tkd = " + kd);
			lB_output->Items->Add("k1 = " + k1 + "\tk = " + k);
			lB_output->Items->Add("--------------------------------------");
			x1 = k1 * a;
			lB_output->Items->Add("��������� �������� ��������� x1: k1 * a = " + x1);
			dx = kd * a;
			lB_output->Items->Add("��� ��������� ��������� dx: kd * a = " + dx);
			lB_output->Items->Add("--------------------------------------");

			RecOut = new stRecursion[34];
			memset(RecOut, 0, sizeof(stRecursion) * 34);

			String^ sItem = gcnew String("");
			System::Globalization::NumberFormatInfo^ ifp = gcnew System::Globalization::NumberFormatInfo;
			System::Globalization::CultureInfo^ ifc = gcnew System::Globalization::CultureInfo("ru-RU");
			ifp->NumberDecimalDigits = 4;
			ifc->NumberFormat->NumberDecimalDigits = 2;

			lB_output->Items->Add("N\tx\ty");
			for (double i = 0.0; counter < n; i += dx) {
				x = i;
				counter++;
				if ((x < (k * a)) && (x > x1)) {
					y = a / (exp(x) + cos(x));
				}
				else {
					y = exp(x) + sin(a * x);
				}
				
				sItem = Convert::ToString(counter);
				sItem += "\t" + x.ToString("n", ifp);
				sItem += "\t" + y.ToString("N", ifc);
				lB_output->Items->Add(sItem);
				RecOut[counter-1].nIdStruct = counter;
				RecOut[counter-1].nVal = x;
				RecOut[counter].nSum = y;
				onAction = act_RECURSION3_1;
				
			}
			Refresh();
		}

		// ���� 3.2 �������� ������ �������
		private: System::Void ������������������32ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;

			tB_title->Text = " ������������ ������ 3.2\r\n C������ ����� ������ �� ���� ������ � ����� B.";

			const int k = 8, l = 10;
			double a[k], x[l], y[k], sumx = 0, B = 1;
			

			for (int i = 0; i < l; i++) {
				InputData^ inp = gcnew InputData;
				inp->SetLable("������� X[" + Convert::ToString(i) + "] ������� �������");
				if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					String^ sRes = inp->GetText();
					if (sRes == "") return;

					x[i] = Convert::ToInt32(sRes);
				}
				inp->Close();
				sumx += x[i];
				if (sumx == 0) {
					lB_output->Items->Add("����� ������� ����� ����!");
					lB_output->Items->Add("����� �������� ����� ���� � ������ ��� ������");
					break;
				}
			}

			for (int i = 0; i < k; i++) {
				InputData^ inp = gcnew InputData;
				inp->SetLable("������� Y[" + Convert::ToString(i) + "] ������� �������");
				if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					String^ sRes = inp->GetText();
					if (sRes == "") return;
					else {
						y[i] = Convert::ToInt32(sRes);
						if (y[i] == 0) {
							lB_output->Items->Add("������! #������� �������");
							lB_output->Items->Add("����� �������� ����� ���� � ������ ��� ������");
							break;
						}
					}
				}
				inp->Close();
			}
			lB_output->Items->Add("������ X:");
			lB_output->Items->Add("[" + x[0] + "; " + x[1] + "; " + x[2] + "; " + x[3] + "; " + x[4] + "; " + x[5] + "; " + x[6] + "; " + x[7] + "; " + x[8] + "; " + x[9] + ";]");
			lB_output->Items->Add("������ Y:");
			lB_output->Items->Add("[" + y[0] + "; " + y[1] + "; " + y[2] + "; " + y[3] + "; " + y[4] + "; " + y[5] + "; " + y[6] + "; " + y[7] + ";]");
			lB_output->Items->Add("--------------------------------------");
			lB_output->Items->Add("����� ������� X: " + sumx);

			for (int i = 0; i < k; i++) {
				a[i] = sumx / pow(y[i], 2);
				B *= a[i];
			}
			lB_output->Items->Add("--------------------------------------");
			lB_output->Items->Add("������ A:");
			lB_output->Items->Add("[" + a[0] + "; " + a[1] + "; " + a[2] + "; " + a[3] + "; " + a[4] + "; " + a[5] + "; " + a[6] + "; " + a[7] + ";]");
			lB_output->Items->Add("B �����:" + B);
		}

		// ���� 4 �������
		private: System::Void ������������������4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;

			tB_title->Text = " ������������ ������ 4\r\n �������� ������� ������ ������� �������.";

			const int x = 4, y = 4;
			int a[x][y], b[y], total = 0, f, end;
			bool check = true;

			// �������� �������
			for (int i = 0; i < x; i++) {
				InputData^ inp = gcnew InputData;
				inp->SetLable("������� ����� ������, " + Convert::ToString(i + 1) + "� ������ �������");
				if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					for (int j = 0; j < y; j++) {
						a[i][j] = Convert::ToDouble(inp->GetText()->Split()[j]);
					}
				}
				inp->Close();
			}

			// ����� �������
			lB_output->Items->Add("��������� �������:");
			for (int i = 0; i < x; i++) {
				lB_output->Items->Add(Convert::ToString(a[i][0]) + "\t" + Convert::ToString(a[i][1]) + "\t" + Convert::ToString(a[i][2]) + "\t" + Convert::ToString(a[i][3]));
			}
			lB_output->Items->Add("");

			lB_output->Items->Add("--------------------------------------");
			for (int i = 0; i < y; ++i) {
				int sum = 0;
				for (int j = 0; j < x; ++j) {
					sum = sum + a[j][i];
				}
				lB_output->Items->Add("����� " + (i+1) + " �������: " + sum);
				b[i] = sum;
			}
			lB_output->Items->Add("");
			for (int i = 0; i < x; ++i) {
				for (int j = 0; j < x; ++j) {
					if (check) {
						if ((b[i] == b[j]) && (i != j)) {
							f = i;
							end = j;
							lB_output->Items->Add("������� " + (f+1) + " ����� ������� " + (end+1));
							check = false;
						}
					}
				}
			}
			lB_output->Items->Add("--------------------------------------");
			if (check) {
				lB_output->Items->Add("��� ������ ��������!");
			}
			int chan;
			for (int i = 0; i < x; i++) {
				chan = a[i][f];
				a[i][f] = a[i][end];
				a[i][end] = chan;
			}

			lB_output->Items->Add("���������� �������:");
			for (int i = 0; i < x; i++) {
				lB_output->Items->Add(Convert::ToString(a[i][0]) + "\t" + Convert::ToString(a[i][1]) + "\t" + Convert::ToString(a[i][2]) + "\t" + Convert::ToString(a[i][3]));
			}
			
		}
		
		// ------------����������-------------------------------------------------------------------------------------------------------------
		// ���������
		private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;
			lB_output->MultiColumn = true;
			tB_title->Text = " ���������� ���������.";

			string words[20] = { "������", "�����", "������", "��������", "��������", "����", "����", "�����", "�������", "�����",
				   "���", "�������", "�����", "�������", "�����", "��������", "����", "�������", "��������", "��������" };
			string sortedwords[20] = {};

			int nSize = sizeof(words) / sizeof(words[0]);
			unsigned char ch, ch2 = 0;
			bool przn = false;
			lB_output->Items->Add("�������� ������: ");
			for (int i = 0; i < nSize; i++) {
				lB_output->Items->Add((i + 1) + ". " + gcnew String(words[i].c_str()));
			}

			InputData^ inp = gcnew InputData;
			inp->SetLable("������� ����������� �����������('<', '>')");
			if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = inp->GetText();
				if (sRes == "") return;
				ch = Convert::ToChar(sRes);
			}
			inp->Close();
			for (int i = 0; i < nSize; i++) {
				sortedwords[i] = words[i];
			}

			switch (ch) {
			case '>':
				do {
					przn = false;
					for (int i = 0; i < nSize - 1; i++)
						if (sortedwords[i] > sortedwords[i + 1]) {
							sortedwords[i].swap(sortedwords[i + 1]);
							przn = true;
						}
				} while (przn);
				break;

			case '<':
				do {
					przn = false;
					for (int i = 0; i < nSize - 1; i++)
						if (sortedwords[i] < sortedwords[i + 1]) {
							sortedwords[i].swap(sortedwords[i + 1]);
							przn = true;
						}
				} while (przn);
				break;
			}

			lB_output->Items->Add("--------------------------------------");
			lB_output->Items->Add("��������������� ������: ");
			for (int i = 0; i < nSize; i++) {
				lB_output->Items->Add((i + 1) + ". " + gcnew String(sortedwords[i].c_str()));
			}
		}
		// �������
		private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;
			lB_output->MultiColumn = true;
			tB_title->Text = " ���������� �������.";

			string words[20] = { "������", "�����", "������", "��������", "��������", "����", "����", "�����", "�������", "�����",
				   "���", "�������", "�����", "�������", "�����", "��������", "����", "�������", "��������", "��������" };
			string sortedwords[20] = {};

			int nSize = sizeof(words) / sizeof(words[0]);
			unsigned char ch, ch2 = 0;
			bool przn = false;
			lB_output->Items->Add("�������� ������: ");
			for (int i = 0; i < nSize; i++) {
				lB_output->Items->Add((i + 1) + ". " + gcnew String(words[i].c_str()));
			}

			InputData^ inp = gcnew InputData;
			inp->SetLable("������� ����������� �����������('<', '>')");
			if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = inp->GetText();
				if (sRes == "") return;
				ch = Convert::ToChar(sRes);
			}
			inp->Close();
			for (int i = 0; i < nSize; i++) {
				sortedwords[i] = words[i];
			}

			switch (ch) {
			case '>':
				for (int i = 0; i < nSize - 1; i++) {
					for (int j = i + 1; j < nSize; j++) {
						if (sortedwords[i] > sortedwords[j]) {
							string buf = sortedwords[i];
							sortedwords[i] = sortedwords[j];
							sortedwords[j] = buf;
						}
					}
				} break;

			case '<':
				for (int i = 0; i < nSize - 1; i++) {
					for (int j = i + 1; j < nSize; j++) {
						if (sortedwords[i] < sortedwords[j]) {
							string buf = sortedwords[i];
							sortedwords[i] = sortedwords[j];
							sortedwords[j] = buf;
						}
					}
				}
				break;
			} 

			lB_output->Items->Add("--------------------------------------");
			lB_output->Items->Add("��������������� ������: ");
			for (int i = 0; i < nSize; i++) {
				lB_output->Items->Add((i + 1) + ". " + gcnew String(sortedwords[i].c_str()));
			}
		}
		// �������
		private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			panel2->Visible = true;
			lB_output->MultiColumn = true;
			tB_title->Text = " ������� ����������.";

			string words[20] = { "������", "�����", "������", "��������", "��������", "����", "����", "�����", "�������", "�����",
				   "���", "�������", "�����", "�������", "�����", "��������", "����", "�������", "��������", "��������" };
			string sortedwords[20] = {};

			int nSize = sizeof(words) / sizeof(words[0]);
			unsigned char ch, ch2 = 0;
			bool przn = false;
			lB_output->Items->Add("�������� ������: ");
			for (int i = 0; i < nSize; i++) {
				lB_output->Items->Add((i + 1) + ". " + gcnew String(words[i].c_str()));
			}

			InputData^ inp = gcnew InputData;
			inp->SetLable("������� ����������� �����������('<', '>')");
			if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = inp->GetText();
				if (sRes == "") return;
				ch = Convert::ToChar(sRes);
			}
			inp->Close();
			for (int i = 0; i < nSize; i++) {
				sortedwords[i] = words[i];
			}

			switch (ch) {
			case '>':
				qSort(sortedwords, 0, (sizeof(words) / sizeof(words[0])) - 1, 1);
				break;

			case '<':
				qSort(sortedwords, 0, (sizeof(words) / sizeof(words[0])) - 1, -1);
				break;
			}

			lB_output->Items->Add("--------------------------------------");
			lB_output->Items->Add("��������������� ������: ");
			for (int i = 0; i < nSize; i++) {
				lB_output->Items->Add((i + 1) + ". " + gcnew String(sortedwords[i].c_str()));
			}
		}

		// ------------�������� � ������-------------------------------------------------------------------------------------------------------------

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
				case act_UNIT: {
					panel2->Visible = false;
					if (mng == 0) return;
					mng->Draw(e->Graphics);
					if (ActiveClass != 0) {
						Pen^ pen = gcnew Pen(Color::Red, 4);

						/*System::Drawing::Rectangle rc(ActiveClass->X(), ActiveClass->Y(), ActiveClass->Width(), ActiveClass->Height());
						e->Graphics->DrawRectangle(pen, rc);*/

						pen->Color = Color::Green;
						e->Graphics->DrawLine(pen, ActiveClass->MiddleX(), ActiveClass->MiddleY(), nx, ny);
					}
				} break;

				case act_CLASSES: {
					panel2->Visible = false;
					if (mng == 0) return;
					mng->Draw(e->Graphics);
					if (ActiveClass != 0) {
						Pen^ pen = gcnew Pen(Color::Yellow, 4);

						System::Drawing::Rectangle rc(ActiveClass->X(), ActiveClass->Y(), ActiveClass->Width(), ActiveClass->Height());
						e->Graphics->DrawRectangle(pen, rc);
					}
				} break;

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
					panel2->Visible = true;
					RECT rct = { 500, 200, 1500, 600 };
					drawGraph(e->Graphics, RecOut, 11, rct, 1);
				} break;

				case act_RECURSION3_1: {
					RECT rct = { 500, 200, 1500, 600 };
					drawGraph(e->Graphics, RecOut, 34, rct, 2);
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
				case System::Windows::Forms::Keys::F5: {
					onAction = act_NONE;
					lB_output->Items->Clear();
					Refresh();
				}break;
				case System::Windows::Forms::Keys::F9: {
					if (onAction == act_UNIT) onAction = act_CLASSES;
					else if (onAction == act_CLASSES) onAction = act_UNIT;
					Refresh();
				} break;
			}

			if (onAction = act_LABIRINT) {
				switch (e->KeyValue) {
					case 27: {
						onAction = act_BREAK;
						ClearToNewTask();
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

		// ��������
		private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Visible = false;
			tB_title->Text = "������ �������� \r\n��� ���������� ����������� �������";
			onAction = act_LABIRINT;
			this->Focus();
			Refresh();
			/*Labirint(0);
			panel2->Visible = true;*/
		}

		// ------------������-------------------------------------------------------------------------------------------------------------
		
		// ��������� �������
		private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) { mng = new cManager; }
			onAction = act_CLASSES;
			panel2->Visible =  false;
			tB_title->Text = "��������� ������ ������ � ��������";
		}

		// �������� ��������������
		private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cRectangle(/*300 + rand() % */800, /*300 + rand() %*/ 800);
			fig->BrushColor(RGB(155, rand() % 255, 155));
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}
		// � ���. ����
		private: System::Void �������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cRectangle(nx, ny, 80, 50);
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}

		// �������� ������������
		private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cTriangle(/*300 + rand() % */ 150, /*300 + rand() % */500);
			fig->BrushColor(RGB(rand() % 255, 155, 155));
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}		
		// � ���. ����
		private: System::Void �����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cTriangle(nx, ny, 80, 80);
			fig->BrushColor(RGB(55, 250, 45));
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}

		// �������� �������
		private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cEllipse(150 + rand() % 150,  150 + rand() % 150);
			fig->BrushColor(RGB(155, 155, rand() % 255));
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}
		// � ���. ����
		private: System::Void ������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cEllipse(nx, ny, 50, 50);
			fig->BrushColor(RGB(125, 70, 255));
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}

		// �������� ��������
		private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mng == 0) mng = new cManager;
			cFigure* fig = new cRectangle(nx, ny, 50, 50);
			fig->BrushColor(RGB(125, 75, rand() % 255));
			mng->AddFigure(fig);
			fig->SetId(mng->Size());
			Refresh();
		}

		// ���������� ������ � ��������
		private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			onAction = act_CLASSES;
			Refresh();
		}

		// ��������� ���. ����
		private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if ((onAction == act_CLASSES) || (onAction == act_UNIT)) {
				nx = e->Location.X;
				ny = e->Location.Y;
				if (e->Button == System::Windows::Forms::MouseButtons::Right) {
					contextMenuStrip1->Show(e->Location.X, e->Location.Y);
				} 
				else if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					cFigure* fig;
					int x1, x2, y1, y2;
					ActiveClass = 0;
					for (int i = 0; i < mng->Size(); i++) {
						fig = mng->GetFigure(i);
						x1 = fig->X();
						x2 = fig->Right();
						y1 = fig->Y();
						y2 = fig->Bottom();
						if ((x1 <= nx) && (nx <= x2) && (y1 <= ny) && (ny <= y2)) {
							ActiveClass = fig;
							dx = nx - ActiveClass->X();
							dy = ny - ActiveClass->Y();
							Refresh();
							break;
						}
					}
					Refresh();
				}
			}
		}
	
		// �������� ��� ������
		private: System::Void ���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				cFigure* fig = mng->GetFigure(nx, ny);
				int clRed, clGreen, clBlue;

				if (fig != 0) {
					int clr = colorDialog1->Color.ToArgb();
					int clRed = (clr & 0x00FFFFFF) >> 16;
					int clGreen = (clr & 0x00FFFFFF) >> 8;
					int clBlue = clr & 0x000000FF;

					fig->BrushColor(RGB(clRed, clGreen, clBlue));
				}
				else {
					panel2->Visible = true;
					lB_output->Items->Clear();
					lB_output->Items->Add("������ �� ������!");
				}
				Refresh();
			}
		}
		// �������� ������ ������
		private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				cFigure* fig = mng->GetFigure(nx, ny);

				if (fig != 0) {
					int clr = colorDialog1->Color.ToArgb();
					int clRed = (clr & 0x00FFFFFF) >> 16;
					int clGreen = (clr & 0x00FFFFFF) >> 8;
					int clBlue = clr & 0x000000FF;

					fig->PenColor(RGB(clRed, clGreen, clBlue));
				}
				
				Refresh();
			}
		}

		// �������� �������
		private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (onAction == act_CLASSES) {
				if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					if (ActiveClass != 0) {
						ActiveClass->X(e->Location.X - dx);
						ActiveClass->Y(e->Location.Y - dy);
						Refresh();
					}
				}
			}
			else if (onAction == act_UNIT) {
				if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					nx = e->Location.X;
					ny = e->Location.Y;
					if (ActiveClass != 0) {
						Refresh();
					}
				}
			}
		}

		// �������� ������ �������
		private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			InputData^ f_input = gcnew InputData;
			f_input->SetLable("������� ������ �������");
			if (f_input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = f_input->GetText();
				if (sRes == "") return;

				int nWid = Convert::ToInt32(sRes);
				cFigure* fig = mng->GetFigure(nx, ny);

				if (fig != 0) {
					fig->Width(nWid);
				}
				Refresh();
			}
			delete f_input;
		}
		// �������� ������ �������
		private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			InputData^ f_input = gcnew InputData;
			f_input->SetLable("������� ������ �������");
			if (f_input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sRes = f_input->GetText();
				if (sRes == "") return;

				int nHei = Convert::ToInt32(sRes);
				cFigure* fig = mng->GetFigure(nx, ny);

				if (fig != 0) {
					fig->Height(nHei);
				}
				Refresh();
			}
			delete f_input;
		}

		// ��������� � ����
		private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				string sFile;
				StringToChar(saveFileDialog1->FileName, sFile);
				mng->Save(sFile);
				tB_title->Text += "\r ����� ��������� � ����: " + saveFileDialog1->FileName;
			}
			delete saveFileDialog1;
		}
		// ��������� �� �����
		private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				string sFile;
				StringToChar(openFileDialog1->FileName, sFile);
				mng->Clear();
				mng->Load(sFile);
				tB_title->Text += "\r����� ��������� �� �����: " + openFileDialog1->FileName;
				Refresh();
			}
			delete openFileDialog1;
		}

		// �������� ���������� �������
		private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			onAction = act_UNIT;
			Refresh();
		}
		// ��������� ���������� �������
		private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			onAction = act_CLASSES;
			Refresh();
		}
		// ��������� ����������
		private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (onAction == act_UNIT) {
				if (mng == 0) return;
				if (ActiveClass == 0) return;
				if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					cFigure* fig = mng->GetFigure(e->Location.X, e->Location.Y);
					if (fig == 0) return;
					cUnit* unit = new cUnit(ActiveClass, fig);
					mng->AddUnit(unit);
					ActiveClass = 0;
					Refresh();
				}
			}
		}

		// ------------������-------------------------------------------------------------------------------------------------------------
	
	};
}