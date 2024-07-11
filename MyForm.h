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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		static stRecursion* RecOut;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem1;
	public:

	public:

	public:

		   MyAction onAction;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ маскаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ первыйСеместрToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рекурсияИГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шифрованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ классыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзAppToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tB_title;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ lB_output;
	private: System::Windows::Forms::ToolStripMenuItem^ сведенияОПрограммистеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота21ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота21ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота32ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота4ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ p_output;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->маскаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->первыйСеместрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведенияОПрограммистеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота21ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота21ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота32ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекурсияИГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шифрованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->классыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзAppToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tB_title = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lB_output = (gcnew System::Windows::Forms::ListBox());
			this->p_output = (gcnew System::Windows::Forms::Panel());
			this->лабиринтToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->маскаToolStripMenuItem,
					this->первыйСеместрToolStripMenuItem, this->лабиринтToolStripMenuItem, this->рекурсияИГрафикToolStripMenuItem, this->сортировкаToolStripMenuItem,
					this->шифрованиеToolStripMenuItem, this->классыToolStripMenuItem, this->выходИзAppToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(1589, 29);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menuStrip1";
			// 
			// маскаToolStripMenuItem
			// 
			this->маскаToolStripMenuItem->Name = L"маскаToolStripMenuItem";
			this->маскаToolStripMenuItem->Size = System::Drawing::Size(69, 25);
			this->маскаToolStripMenuItem->Text = L"Маска";
			this->маскаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::маскаToolStripMenuItem_Click);
			// 
			// первыйСеместрToolStripMenuItem
			// 
			this->первыйСеместрToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->сведенияОПрограммистеToolStripMenuItem,
					this->лабораторнаяРабота21ToolStripMenuItem, this->лабораторнаяРабота22ToolStripMenuItem, this->лабораторнаяРабота21ToolStripMenuItem1,
					this->лабораторнаяРабота32ToolStripMenuItem, this->лабораторнаяРабота4ToolStripMenuItem
			});
			this->первыйСеместрToolStripMenuItem->Name = L"первыйСеместрToolStripMenuItem";
			this->первыйСеместрToolStripMenuItem->Size = System::Drawing::Size(149, 25);
			this->первыйСеместрToolStripMenuItem->Text = L"Первый семестр";
			// 
			// сведенияОПрограммистеToolStripMenuItem
			// 
			this->сведенияОПрограммистеToolStripMenuItem->Name = L"сведенияОПрограммистеToolStripMenuItem";
			this->сведенияОПрограммистеToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->сведенияОПрограммистеToolStripMenuItem->Text = L"Сведения о программисте";
			this->сведенияОПрограммистеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сведенияОПрограммистеToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота21ToolStripMenuItem
			// 
			this->лабораторнаяРабота21ToolStripMenuItem->Name = L"лабораторнаяРабота21ToolStripMenuItem";
			this->лабораторнаяРабота21ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->лабораторнаяРабота21ToolStripMenuItem->Text = L"Лабораторная работа №2.1";
			this->лабораторнаяРабота21ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота21ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота22ToolStripMenuItem
			// 
			this->лабораторнаяРабота22ToolStripMenuItem->Name = L"лабораторнаяРабота22ToolStripMenuItem";
			this->лабораторнаяРабота22ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->лабораторнаяРабота22ToolStripMenuItem->Text = L"Лабораторная работа №2.2";
			// 
			// лабораторнаяРабота21ToolStripMenuItem1
			// 
			this->лабораторнаяРабота21ToolStripMenuItem1->Name = L"лабораторнаяРабота21ToolStripMenuItem1";
			this->лабораторнаяРабота21ToolStripMenuItem1->Size = System::Drawing::Size(301, 26);
			this->лабораторнаяРабота21ToolStripMenuItem1->Text = L"Лабораторная работа №3.1";
			// 
			// лабораторнаяРабота32ToolStripMenuItem
			// 
			this->лабораторнаяРабота32ToolStripMenuItem->Name = L"лабораторнаяРабота32ToolStripMenuItem";
			this->лабораторнаяРабота32ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->лабораторнаяРабота32ToolStripMenuItem->Text = L"Лабораторная работа №3.2";
			// 
			// лабораторнаяРабота4ToolStripMenuItem
			// 
			this->лабораторнаяРабота4ToolStripMenuItem->Name = L"лабораторнаяРабота4ToolStripMenuItem";
			this->лабораторнаяРабота4ToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->лабораторнаяРабота4ToolStripMenuItem->Text = L"Лабораторная работа №4";
			// 
			// лабиринтToolStripMenuItem
			// 
			this->лабиринтToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->лабиринтToolStripMenuItem1 });
			this->лабиринтToolStripMenuItem->Name = L"лабиринтToolStripMenuItem";
			this->лабиринтToolStripMenuItem->Size = System::Drawing::Size(101, 25);
			this->лабиринтToolStripMenuItem->Text = L"Лабиринт";
			// 
			// рекурсияИГрафикToolStripMenuItem
			// 
			this->рекурсияИГрафикToolStripMenuItem->Name = L"рекурсияИГрафикToolStripMenuItem";
			this->рекурсияИГрафикToolStripMenuItem->Size = System::Drawing::Size(162, 25);
			this->рекурсияИГрафикToolStripMenuItem->Text = L"Рекурсия и график";
			this->рекурсияИГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::рекурсияИГрафикToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(116, 25);
			this->сортировкаToolStripMenuItem->Text = L"Сортировка";
			// 
			// шифрованиеToolStripMenuItem
			// 
			this->шифрованиеToolStripMenuItem->Name = L"шифрованиеToolStripMenuItem";
			this->шифрованиеToolStripMenuItem->Size = System::Drawing::Size(120, 25);
			this->шифрованиеToolStripMenuItem->Text = L"Шифрование";
			this->шифрованиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шифрованиеToolStripMenuItem_Click);
			// 
			// классыToolStripMenuItem
			// 
			this->классыToolStripMenuItem->Name = L"классыToolStripMenuItem";
			this->классыToolStripMenuItem->Size = System::Drawing::Size(76, 25);
			this->классыToolStripMenuItem->Text = L"Классы";
			// 
			// выходИзAppToolStripMenuItem
			// 
			this->выходИзAppToolStripMenuItem->BackColor = System::Drawing::Color::Red;
			this->выходИзAppToolStripMenuItem->Name = L"выходИзAppToolStripMenuItem";
			this->выходИзAppToolStripMenuItem->Size = System::Drawing::Size(121, 25);
			this->выходИзAppToolStripMenuItem->Text = L"Выход из app";
			this->выходИзAppToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходИзAppToolStripMenuItem_Click);
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
			this->tB_title->Text = L"Текст задания";
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
			this->lB_output->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1. Собаки", L"2. Кошки" });
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
			// лабиринтToolStripMenuItem1
			// 
			this->лабиринтToolStripMenuItem1->Name = L"лабиринтToolStripMenuItem1";
			this->лабиринтToolStripMenuItem1->Size = System::Drawing::Size(180, 26);
			this->лабиринтToolStripMenuItem1->Text = L"Лабиринт";
			this->лабиринтToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::лабиринтToolStripMenuItem1_Click);
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
			this->Text = L"Практика";
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
		
		// Выход через кнопку
		private: System::Void выходИзAppToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			exit(0);
		}

		// Очистка при загрузке
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			//ClearToNewTask();
		}

		// Очистка интерфейса
		public:  void ClearToNewTask() {
			tB_title->Text = "Выбирете пункт меню для решения задачи.";
			tB_title->Enabled = false;
			lB_output->Items->Clear();
			p_output->Visible = false;
			onAction = act_NONE;
		}

		// Маска
		private: System::Void маскаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();

			tB_title->Text = " Задание:\r\n Вывести из массива, состоящего из 20 элементов, числа удовлетворяющие маске.";

			InputData^ f_input = gcnew InputData;
			f_input->SetLable("Введите маску:");
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
				tB_title->AppendText("\r\n В список были добавлено " + Convert::ToString(nCount) + " элементов, удовлетворящие условию маски");
			}
			else {
				f_input->Close();
				return;
			}
		}

		// Сведения о программисте
		private: System::Void сведенияОПрограммистеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			tB_title->Text = " Программы выполнил cтудент 1 курса группы 1бИТС3: Ларин Артём Александрович.";
		}

		
		// Шифрование
		private: System::Void шифрованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			InputData^ ipd = gcnew InputData;

			tB_title->Text = " Перевод строки в шифрованное состояние и обратно.";
			ipd->SetLable("Введите текст для шифрования");

			if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ stext = ipd->GetText();
				tB_title->AppendText("\r\n Введенная строка: \'");
				tB_title->AppendText(stext + "\'");
				//ipd->Visible = false;

				std::string ss;
				StringToChar(stext, ss);
				lB_output->Items->Add(" Шифрованный текст: ");
				const char* sch = ss.c_str();
				std::string shifr = EncodeText((char*)ss.c_str());
				lB_output->Items->Add(CharToString((char*)shifr.c_str()));
				lB_output->Items->Add("");

				lB_output->Items->Add(" Расшифрованный текст: ");
				std::string unshifr = DecodeText((char*)shifr.c_str());
				lB_output->Items->Add(CharToString((char*)unshifr.c_str()));
			}
			ipd->Close();
		}

		// Лаба 2.1 Нахождение индекса максимального T
		private: System::Void лабораторнаяРабота21ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			tB_title->Text = " Задание: Найти индекс максимального T\r\n Даны переменные P, S, R. Определить: Q, T1, T2 и индекс максимального T.";

			InputData^ iL1 = gcnew InputData;
			iL1->SetLable("Введите переменные P, S, R через пробел");

			if (iL1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			}
			iL1->Close();
		}

		// Рекурсия и график
		public: void Recursion();
		private: System::Void рекурсияИГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearToNewTask();
			Recursion();
			onAction = act_RECURSION;
			Refresh();
		}
		// Отрисовка
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
					lB_output->Items->Add("Жук достиг выхода из лабиринта! УРА!");
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
					lB_output->Items->Add("Операция прервана оператором!");
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
		// Очистка интерфейса по дабл клику
		private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			onAction = act_NONE;
			lB_output->Items->Clear();
			Refresh();
		}

		// Очистка по кнопке
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
		// Очистка по кнопке
		private: System::Void lB_output_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			MyForm_KeyDown(this, e);
		}
		private: System::Void лабиринтToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Visible = false;
			tB_title->Text = "Задача Лабиринт \r\nДля управления используйте стрелки";
			onAction = act_LABIRINT;
			this->Focus();
			Refresh();
			/*Labirint(0);
			panel2->Visible = true;*/
		}
	};
}