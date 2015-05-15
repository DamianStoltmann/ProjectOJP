#pragma once

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
		Form1( void )
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
			if ( components ) {
				delete components;
			}
		}
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
		void InitializeComponent( void )
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
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
			this->l2->Text = L"ll";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 284, 261 );
			this->Controls->Add( this->l2 );
			this->Controls->Add( this->l1 );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Dialog";
			this->Text = L"Dialog";
			this->ResumeLayout( false );
			this->PerformLayout();

		}
#pragma endregion
	}
	};
}

