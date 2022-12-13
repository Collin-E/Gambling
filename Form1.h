/*
Author: Collin Ennis
Date: 12/12/2022

Simple coin flip gambling visualizer

*/

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
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;



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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 58);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 66);
			this->textBox1->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(47, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(397, 40);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"How much money do you want to start with\?";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(47, 130);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(397, 40);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"How much money do you want to gamble\?";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 176);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(314, 60);
			this->textBox2->TabIndex = 3;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(47, 242);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(397, 40);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"How many times do you want to gamble\?";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(74, 288);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(314, 57);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(556, 88);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(319, 502);
			this->textBox4->TabIndex = 7;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(556, 3);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(319, 40);
			this->richTextBox4->TabIndex = 6;
			this->richTextBox4->Text = L"            Money after gambling";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(556, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(74, 397);
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
			this->richTextBox5->Location = System::Drawing::Point(74, 351);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(314, 40);
			this->richTextBox5->TabIndex = 10;
			this->richTextBox5->Text = L"Gamble amount multiplier on loss";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(138, 397);
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
			this->button4->Location = System::Drawing::Point(266, 397);
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
			this->button5->Location = System::Drawing::Point(202, 397);
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
			this->button6->Location = System::Drawing::Point(330, 397);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 47);
			this->button6->TabIndex = 14;
			this->button6->Text = L"5x";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(74, 525);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(314, 57);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Reset all fields";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(779, 49);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 33);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 594);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
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
		
		// The amount of times to flip the coin
		int runTimes = 0;
		
		// The amount of money that the user wants to start with
		int startingMoney = 0;
		
		// The amount of money that the user wants to coin flip
		int gambleAmount = 0;
		
		// The amount of money that the user has left after runTimes coinflips
		int endingMoney = 0;

		// Stores the initial gamble amount so that we don't lose the value once we change the gamble amount
		int initialGambleAmount = 0;

		// Stores the gamble multiplier. This will be multiplied by the current gambleAmount whenever the user loses a coinflip. This simulates the Martingale
		// Gambling philosophy found here: https://en.wikipedia.org/wiki/Martingale_(betting_system)
		int gambleMultiplier = 0;

		// Keep track of how many times the user has clicked the run button so that the fields are not overwritten
		int counter = 0;

		// Keep track of when the user has clicked one of the multiplier buttons. This is used to coordinate the colors of the buttons
		bool multiplierClicked = false;

#pragma endregion
// Run button function
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));
	if (counter == 0) { // Check counter so you don't rewrite over the data
		startingMoney = int::Parse(textBox1->Text);
		gambleAmount = int::Parse(textBox2->Text);
		initialGambleAmount = gambleAmount;
		endingMoney = startingMoney;

	}
	runTimes = int::Parse(textBox3->Text);
	for (int i = 0; i < runTimes; i++) {
		int random = rand() % 2;
		if (random == 0) { // 0 means the user won that coinflip
			endingMoney += gambleAmount;
			gambleAmount = initialGambleAmount;
		}
		else { // Else they lost the coinFlip
			endingMoney -= gambleAmount;
			gambleAmount = gambleAmount * gambleMultiplier; // Multiply the gamble amount by the chosen gamble multiplier
		}
	}
	textBox4->Text = "After " + runTimes + " times: " + endingMoney + "\r\n" + textBox4->Text;
	counter++;
}

// 1x gamble multiplier button
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 1;
	resetButtons();
	button2->BackColor = Color::LightBlue;
	multiplierClicked = true;
}

// 2x gamble multiplier button
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 2;
	resetButtons();
	button3->BackColor = Color::LightBlue;
	multiplierClicked = true;
}

// 3x gamble multiplier button
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 3;
    resetButtons();
	button4->BackColor = Color::LightBlue;
	multiplierClicked = true;
}

// 4x gamble multiplier button
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 4;
	resetButtons();
	button5->BackColor = Color::LightBlue;
	multiplierClicked = true;
}

// 5x gamble multiplier button
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	gambleMultiplier = 5;
	resetButtons();
	button6->BackColor = Color::LightBlue;
	multiplierClicked = true;
}

// Used to coordinate the button colors whenever one is clicked
private: System::Void resetButtons() {
	if (multiplierClicked) {
		button2->UseVisualStyleBackColor = true;
		button3->UseVisualStyleBackColor = true;
		button4->UseVisualStyleBackColor = true;
		button5->UseVisualStyleBackColor = true;
		button6->UseVisualStyleBackColor = true;
	}
}

// Reset fields button
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->UseVisualStyleBackColor = true;
	button3->UseVisualStyleBackColor = true;
	button4->UseVisualStyleBackColor = true;
	button5->UseVisualStyleBackColor = true;
	button6->UseVisualStyleBackColor = true;
	multiplierClicked = false;
	counter = 0;
	gambleMultiplier = 0;
	initialGambleAmount = 0;
	endingMoney = 0;
	gambleAmount = 0;
	startingMoney = 0;
	runTimes = 0;
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
}

// Clear output textbox button
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
}
};
}
