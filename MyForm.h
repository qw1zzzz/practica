#pragma once

namespace app {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ìàñêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğâûéÑåìåñòğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ëàáèğèíòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåêóğñèÿÈÃğàôèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîğòèğîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øèôğîâàíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êëàññûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäÈçAppToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tB_title;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ lB_output;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->ìàñêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğâûéÑåìåñòğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëàáèğèíòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåêóğñèÿÈÃğàôèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîğòèğîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øèôğîâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êëàññûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäÈçAppToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tB_title = (gcnew System::Windows::Forms::TextBox());
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
				this->ìàñêàToolStripMenuItem,
					this->ïåğâûéÑåìåñòğToolStripMenuItem, this->ëàáèğèíòToolStripMenuItem, this->ğåêóğñèÿÈÃğàôèêToolStripMenuItem, this->ñîğòèğîâêàToolStripMenuItem,
					this->øèôğîâàíèåToolStripMenuItem, this->êëàññûToolStripMenuItem, this->âûõîäÈçAppToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(1589, 29);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menuStrip1";
			// 
			// ìàñêàToolStripMenuItem
			// 
			this->ìàñêàToolStripMenuItem->Name = L"ìàñêàToolStripMenuItem";
			this->ìàñêàToolStripMenuItem->Size = System::Drawing::Size(69, 25);
			this->ìàñêàToolStripMenuItem->Text = L"Ìàñêà";
			// 
			// ïåğâûéÑåìåñòğToolStripMenuItem
			// 
			this->ïåğâûéÑåìåñòğToolStripMenuItem->Name = L"ïåğâûéÑåìåñòğToolStripMenuItem";
			this->ïåğâûéÑåìåñòğToolStripMenuItem->Size = System::Drawing::Size(149, 25);
			this->ïåğâûéÑåìåñòğToolStripMenuItem->Text = L"Ïåğâûé ñåìåñòğ";
			// 
			// ëàáèğèíòToolStripMenuItem
			// 
			this->ëàáèğèíòToolStripMenuItem->Name = L"ëàáèğèíòToolStripMenuItem";
			this->ëàáèğèíòToolStripMenuItem->Size = System::Drawing::Size(101, 25);
			this->ëàáèğèíòToolStripMenuItem->Text = L"Ëàáèğèíò";
			// 
			// ğåêóğñèÿÈÃğàôèêToolStripMenuItem
			// 
			this->ğåêóğñèÿÈÃğàôèêToolStripMenuItem->Name = L"ğåêóğñèÿÈÃğàôèêToolStripMenuItem";
			this->ğåêóğñèÿÈÃğàôèêToolStripMenuItem->Size = System::Drawing::Size(162, 25);
			this->ğåêóğñèÿÈÃğàôèêToolStripMenuItem->Text = L"Ğåêóğñèÿ è ãğàôèê";
			// 
			// ñîğòèğîâêàToolStripMenuItem
			// 
			this->ñîğòèğîâêàToolStripMenuItem->Name = L"ñîğòèğîâêàToolStripMenuItem";
			this->ñîğòèğîâêàToolStripMenuItem->Size = System::Drawing::Size(116, 25);
			this->ñîğòèğîâêàToolStripMenuItem->Text = L"Ñîğòèğîâêà";
			// 
			// øèôğîâàíèåToolStripMenuItem
			// 
			this->øèôğîâàíèåToolStripMenuItem->Name = L"øèôğîâàíèåToolStripMenuItem";
			this->øèôğîâàíèåToolStripMenuItem->Size = System::Drawing::Size(120, 25);
			this->øèôğîâàíèåToolStripMenuItem->Text = L"Øèôğîâàíèå";
			// 
			// êëàññûToolStripMenuItem
			// 
			this->êëàññûToolStripMenuItem->Name = L"êëàññûToolStripMenuItem";
			this->êëàññûToolStripMenuItem->Size = System::Drawing::Size(76, 25);
			this->êëàññûToolStripMenuItem->Text = L"Êëàññû";
			// 
			// âûõîäÈçAppToolStripMenuItem
			// 
			this->âûõîäÈçAppToolStripMenuItem->BackColor = System::Drawing::Color::Red;
			this->âûõîäÈçAppToolStripMenuItem->Name = L"âûõîäÈçAppToolStripMenuItem";
			this->âûõîäÈçAppToolStripMenuItem->Size = System::Drawing::Size(121, 25);
			this->âûõîäÈçAppToolStripMenuItem->Text = L"Âûõîä èç app";
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
			this->tB_title->Text = L"Òåêñò çàäàíèÿ";
			// 
			// lB_output
			// 
			this->lB_output->BackColor = System::Drawing::Color::Silver;
			this->lB_output->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lB_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lB_output->FormattingEnabled = true;
			this->lB_output->ItemHeight = 18;
			this->lB_output->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1. Ñîáàêè", L"2. Êîøêè" });
			this->lB_output->Location = System::Drawing::Point(0, 0);
			this->lB_output->Name = L"lB_output";
			this->lB_output->Size = System::Drawing::Size(241, 397);
			this->lB_output->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1589, 519);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu;
			this->Name = L"MyForm";
			this->Text = L"Ïğàêòèêà";
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
	};
}
