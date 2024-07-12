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
			InputData^ iL1P = gcnew InputData;
			InputData^ iL1S = gcnew InputData;
			InputData^ iL1R = gcnew InputData;
			int p, s, r;
			tB_title->Text = " �������: ����� ������ ������������� T\r\n ���� ���������� P, S, R. ����������: Q, T1, T2 � ������ ������������� T.";

			
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

			
			lB_output->Items->Add(p);
			lB_output->Items->Add(s);
			lB_output->Items->Add(r);

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
	};
}