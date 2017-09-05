#pragma once
#include "Functions.h"

//My Code begins at "button1_Click" on line 400. Everthing else is generated by Visual Studio

namespace STICalculator {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Area of Steel ( in� )";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Steel Strength (Ksi)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Concrete Strength (Ksi)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Width (inches)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Effective Depth (inches)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Reduction Factor";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Location = System::Drawing::Point(133, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->AcceptsTab = true;
			this->textBox2->Location = System::Drawing::Point(133, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(58, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->AcceptsReturn = true;
			this->textBox3->AcceptsTab = true;
			this->textBox3->Location = System::Drawing::Point(133, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(58, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->AcceptsReturn = true;
			this->textBox4->AcceptsTab = true;
			this->textBox4->Location = System::Drawing::Point(133, 98);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(58, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->AcceptsReturn = true;
			this->textBox5->AcceptsTab = true;
			this->textBox5->Location = System::Drawing::Point(133, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(58, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->AcceptsReturn = true;
			this->textBox6->AcceptsTab = true;
			this->textBox6->Location = System::Drawing::Point(133, 153);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(58, 20);
			this->textBox6->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 207);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(222, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Depth of Compression Block";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(452, 212);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Usable Design Moment";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(369, 209);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(75, 20);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(575, 209);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(82, 20);
			this->textBox8->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(197, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(460, 191);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(300, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L" ";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(343, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(10, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L" ";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(438, 61);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(10, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L" ";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(260, 163);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L" ";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(539, 13);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 25;
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(245, 128);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 27;
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(26, 184);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(155, 17);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"Calculate Reduction Factor";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 242);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"STI Design Moment Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//When "Calculate" button is released:
		//Declare intermediate variables
		double a, c, epsilon, phi, mu;

		/*Collect User Inputs - area_of_steel: Area of Steel, strength_of_steel: Strength of Steel, strength_of_concrete: Strength of Concrete, b: width of Rectangular
		Cross-section, d: Height of Rectangular Cross-section, and user_phi: user-entered capacity reduction factor*/
		double area_of_steel = System::Convert::ToDouble(textBox1->Text);
		double strength_of_steel = System::Convert::ToDouble(textBox2->Text);
		double strength_of_concrete = System::Convert::ToDouble(textBox3->Text);
		double width = System::Convert::ToDouble(textBox4->Text);
		double height = System::Convert::ToDouble(textBox5->Text);

		//Begin Evaluating Functions Using User Input
		a = depth_of_compression_block(area_of_steel, strength_of_steel, strength_of_concrete, width);
		c = distance_to_neutral_axis(a);
		epsilon = tensile_strain(height, c);

		//Check whether User prefers Calculated Value of Phi or User Input for Phi
		if (checkBox1->Checked)
		{
			phi = capacity_reduction_factor(epsilon); 
			textBox6->Text = System::Convert::ToString(decimal_place(phi, 2));
		}
		else
		{
			phi = System::Convert::ToDouble(textBox6->Text);
		}

		//Finish Evaluating Functions
		mu = usable_design_moment(phi, area_of_steel, strength_of_steel, height, a);

		//Display Resuslts for Depth & Moment
		textBox7->Text = System::Convert::ToString(decimal_place(a,2)) + " in";
		textBox8->Text = System::Convert::ToString(decimal_place(mu,2)) + " Kft";
		
		//Display Graphical Labels
		label10->Text = System::Convert::ToString(decimal_place(height,2)) + " in";
		label11->Text = System::Convert::ToString(decimal_place(c, 2)) + " in";
		label12->Text = System::Convert::ToString(decimal_place(a, 2)) + " in";
		label13->Text = System::Convert::ToString(decimal_place(width, 2)) + " in";
		label14->Text = System::Convert::ToString(decimal_place(0.85*strength_of_concrete,2));
		label15->Text = System::Convert::ToString(decimal_place(area_of_steel, 2)) + " in�" ;
	
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//When "Clear button is released

		//Clear all User Inputs
		double area_of_steel = 0;
		double strength_of_steel = 0;
		double strength_of_concrete = 0;
		double width = 0;
		double height = 0;
		double user_phi = 0;

		//Clear all displays
		textBox1->Text = " ";
		textBox2->Text = " ";
		textBox3->Text = " ";
		textBox4->Text = " ";
		textBox5->Text = " ";
		textBox6->Text = " ";
		textBox7->Text = " ";
		textBox8->Text = " ";
		label10->Text = " ";
		label11->Text = " ";
		label12->Text = " ";
		label13->Text = " ";
		label14->Text = " ";
		label15->Text = " ";

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	}

};
}
