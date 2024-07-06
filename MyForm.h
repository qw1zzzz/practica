#pragma once
#include <stdlib.h>
#include "InputData.h"


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
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(149, 25);
			this->�������������ToolStripMenuItem->Text = L"������ �������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(101, 25);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(162, 25);
			this->���������������ToolStripMenuItem->Text = L"�������� � ������";
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
			this->panel2->Size = System::Drawing::Size(241, 397);
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
			this->lB_output->Size = System::Drawing::Size(241, 397);
			this->lB_output->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1589, 519);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu;
			this->Name = L"MyForm";
			this->Text = L"��������";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
			ClearToNewTask();
		}

		// ������� ����������
		public:  void ClearToNewTask() {
			tB_title->Text = "�������� ����� ���� ��� ������� ������.";
			lB_output->Items->Clear();
		}

		//// �����
		private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();

			tB_title->Text = " �������:\r\n ������� �� �������, ���������� �� 20 ���������, ����� ��������������� �����.";
			InputData^ f_input = gcnew InputData;
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
	};
}
