#pragma once

#include "MyForm.h"

namespace WindowsFormApplication1 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point( 95, 226 );
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size( 75, 23 );
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nowe okno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler( this, &Form1::button1_Click );
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Location = System::Drawing::Point( 33, 56 );
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size( 0, 13 );
			this->l1->TabIndex = 1;
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->Location = System::Drawing::Point( 36, 84 );
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size( 35, 13 );
			this->l2->TabIndex = 2;
			this->l2->Text = L"label2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 284, 261 );
			this->Controls->Add( this->l2 );
			this->Controls->Add( this->l1 );
			this->Controls->Add( this->button1 );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout( false );
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click( System::Object^  sender, System::EventArgs^  e )
	{
		TextBox^ pole = gcnew TextBox;
		pole->Location = Point( 10, 50 );
		pole->Text = "WprowadŸ coœ";
		
		CheckBox^ check = gcnew CheckBox;
		check->Location = Point( 10, 70 );

		Button^ butt = gcnew Button;
		butt->Location = Point( 10, 90 );
		butt->Text = "OK";
		
		Form^ okno = gcnew Form;
		okno->Controls->Add( pole );
		okno->Controls->Add( check );
		okno->Controls->Add( butt );

		butt->DialogResult = System::Windows::Forms::DialogResult::OK;
		okno->ShowDialog();
		
		cz2::MyForm^ okno2 = gcnew cz2::MyForm();
		okno2->Show();
		

		
		
		l1->Text = pole->Text;
		l2->Text = check->Checked.ToString();
	
	}
	};
}

