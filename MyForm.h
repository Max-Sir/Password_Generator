#pragma once
#include<string>
using std::string;
string Caesar_cipher(string s, int shift);
string digits();
string PinCode(string s, int size);
string abc();
string Gen_Password(string a, int size);
namespace PasswordGenerator {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите вашу строку";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(16, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(507, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(534, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите размер палоля";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::MistyRose;
			this->textBox2->Location = System::Drawing::Point(537, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 20);
			this->textBox2->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->richTextBox1->Location = System::Drawing::Point(16, 180);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(528, 176);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Пароль по умолчанию", L"Пароль из своего набора символов",
					L"Пинкод из цифр", L"Шифр Цезаря (закодировать)", L"Шифр Цезаря (разкодировать)"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 88);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(230, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"(Выберите тип генерируемого значения)";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::MistyRose;
			this->textBox3->Location = System::Drawing::Point(537, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(187, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(534, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Количество:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Результат:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->ClientSize = System::Drawing::Size(767, 436);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Генератор Паролей";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
enum Position
{
Пароль_по_умолчанию,Пароль_из_своего_набора_символов,Пинкод_из_цифр,Шифр_Цезаря_закодировать,Шифр_Цезаря_разкодировать
};	
private: System
#pragma endregion
		m::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	switch (comboBox1->SelectedIndex)
	{
	case Position::Пароль_по_умолчанию:
		textBox1->Text+= "5555555555";
		break;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
