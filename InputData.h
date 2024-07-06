#pragma once

namespace app {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ InputData
	/// </summary>
	public ref class InputData : public System::Windows::Forms::Form
	{
	public:
		InputData(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InputData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_titleOfInput;
	private: System::Windows::Forms::TextBox^ tB_answ;
	private: System::Windows::Forms::Button^ b_true;
	private: System::Windows::Forms::Button^ b_false;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputData::typeid));
			this->l_titleOfInput = (gcnew System::Windows::Forms::Label());
			this->tB_answ = (gcnew System::Windows::Forms::TextBox());
			this->b_true = (gcnew System::Windows::Forms::Button());
			this->b_false = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_titleOfInput
			// 
			this->l_titleOfInput->AutoSize = true;
			this->l_titleOfInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l_titleOfInput->Location = System::Drawing::Point(69, 54);
			this->l_titleOfInput->Name = L"l_titleOfInput";
			this->l_titleOfInput->Size = System::Drawing::Size(152, 20);
			this->l_titleOfInput->TabIndex = 0;
			this->l_titleOfInput->Text = L"¬ведите данные";
			// 
			// tB_answ
			// 
			this->tB_answ->Location = System::Drawing::Point(55, 95);
			this->tB_answ->Name = L"tB_answ";
			this->tB_answ->Size = System::Drawing::Size(185, 20);
			this->tB_answ->TabIndex = 1;
			this->tB_answ->UseWaitCursor = true;
			// 
			// b_true
			// 
			this->b_true->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->b_true->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_true.Image")));
			this->b_true->Location = System::Drawing::Point(73, 137);
			this->b_true->Name = L"b_true";
			this->b_true->Size = System::Drawing::Size(38, 41);
			this->b_true->TabIndex = 2;
			this->b_true->UseVisualStyleBackColor = true;
			this->b_true->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &InputData::b_true_KeyPress);
			// 
			// b_false
			// 
			this->b_false->DialogResult = System::Windows::Forms::DialogResult::No;
			this->b_false->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_false.Image")));
			this->b_false->Location = System::Drawing::Point(183, 137);
			this->b_false->Name = L"b_false";
			this->b_false->Size = System::Drawing::Size(38, 41);
			this->b_false->TabIndex = 3;
			this->b_false->UseVisualStyleBackColor = true;
			// 
			// InputData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(284, 216);
			this->Controls->Add(this->b_false);
			this->Controls->Add(this->b_true);
			this->Controls->Add(this->tB_answ);
			this->Controls->Add(this->l_titleOfInput);
			this->Name = L"InputData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"¬вод входных параметров";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String^ GetText() { return tB_answ->Text; }
		public: void SetLable(String^ pText) { this->l_titleOfInput->Text = pText; }

		private: System::Void b_true_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			switch (e->KeyChar) {
			case 13: {
				DialogResult = System::Windows::Forms::DialogResult::OK;
				Close();
				break;
			}
			}
		}
};
}
