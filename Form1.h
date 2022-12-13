#pragma once
#include <iostream>
#include <string>
namespace CppCLRWinFormsProject {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 86);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 102);
			this->textBox1->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(74, 40);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(397, 40);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"How much money do you want to start with\?";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(74, 206);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(397, 40);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"How much money do you want to gamble\?";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 252);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(319, 102);
			this->textBox2->TabIndex = 3;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(513, 40);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(397, 40);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"How many times do you want to gamble\?";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(556, 86);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(319, 102);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(556, 252);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(319, 102);
			this->textBox4->TabIndex = 7;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(658, 206);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(217, 40);
			this->richTextBox4->TabIndex = 6;
			this->richTextBox4->Text = L"Money after gambling";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(556, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Run simulation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(74, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 47);
			this->button2->TabIndex = 9;
			this->button2->Text = L"1x";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(74, 360);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(397, 40);
			this->richTextBox5->TabIndex = 10;
			this->richTextBox5->Text = L"Gamble amount multiplier on loss";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(162, 412);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 47);
			this->button3->TabIndex = 11;
			this->button3->Text = L"2x";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(331, 412);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(58, 47);
			this->button4->TabIndex = 12;
			this->button4->Text = L"4x";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(245, 412);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 47);
			this->button5->TabIndex = 13;
			this->button5->Text = L"3x";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(413, 412);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 47);
			this->button6->TabIndex = 14;
			this->button6->Text = L"5x";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 548);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ typeOfGambling = "coinFlip";
		int runTimes = 0;
		int startingMoney = 0;
		int gambleAmount = 0;
		int endingMoney = 0;
		int initialGambleAmount = 0;
		int gambleMultiplier = 0;
		int counter = 0;
		bool multiplierClicked = false;

#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (counter == 0) {
		startingMoney = int::Parse(textBox1->Text);
		gambleAmount = int::Parse(textBox2->Text);
		initialGambleAmount = gambleAmount;
		endingMoney = startingMoney;

	}
	runTimes = int::Parse(textBox3->Text);
	for (int i = 0; i < runTimes; i++) {
		int random = rand() % 2;
		if (random == 0) {
			endingMoney += gambleAmount;
			gambleAmount = initialGambleAmount;
		}
		else {
			endingMoney -= gambleAmount;
			gambleAmount = gambleAmount * gambleMultiplier;
		}
	}
	textBox4->Text = "After " + runTimes + " times: " + endingMoney + "\r\n" + textBox4->Text;
	counter++;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 1;
	resetButtons();
	button2->BackColor = Color::LightBlue;
	multiplierClicked = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 2;
	resetButtons();
	button3->BackColor = Color::LightBlue;
	multiplierClicked = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 3;
    resetButtons();
	button4->BackColor = Color::LightBlue;
	multiplierClicked = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 4;
	resetButtons();
	button5->BackColor = Color::LightBlue;
	multiplierClicked = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 5;
	resetButtons();
	button6->BackColor = Color::LightBlue;
	multiplierClicked = true;
}
private: System::Void resetButtons() {
	if (multiplierClicked) {
		button2->BackColor = Color::Gray;
		button3->BackColor = Color::Gray;
		button4->BackColor = Color::Gray;
		button5->BackColor = Color::Gray;
		button6->BackColor = Color::Gray;
	}
}
};
}
