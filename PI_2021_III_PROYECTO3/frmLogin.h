#pragma once
#include "frmmenu.h"
#include <msclr/marshal_cppstd.h>
#include <string>
using namespace msclr::interop;
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnentrar;
	protected:

	private: System::Windows::Forms::TextBox^ txtUsuario;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtContraseña;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
			this->btnentrar = (gcnew System::Windows::Forms::Button());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnentrar
			// 
			this->btnentrar->Location = System::Drawing::Point(136, 199);
			this->btnentrar->Name = L"btnentrar";
			this->btnentrar->Size = System::Drawing::Size(75, 23);
			this->btnentrar->TabIndex = 0;
			this->btnentrar->Text = L"Entrar";
			this->btnentrar->UseVisualStyleBackColor = true;
			this->btnentrar->Click += gcnew System::EventHandler(this, &frmLogin::btnentrar_Click);
			// 
			// txtUsuario
			// 
			this->txtUsuario->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsuario->Location = System::Drawing::Point(97, 87);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(161, 21);
			this->txtUsuario->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(124, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña";
			// 
			// txtContraseña
			// 
			this->txtContraseña->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtContraseña->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContraseña->Location = System::Drawing::Point(97, 154);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(161, 21);
			this->txtContraseña->TabIndex = 3;
			this->txtContraseña->UseSystemPasswordChar = true;
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(357, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->btnentrar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmLogin";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void btnentrar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtUsuario->Text == "Alvarez" && txtContraseña->Text == "2020110485")
	{
		frmmenu^ formulario = gcnew frmmenu;
		formulario->Show();
		MessageBox::Show("Bienvenido");
	}
	

	if (txtUsuario->Text == "Barahona" && txtContraseña->Text == "2015110141")
	{
		frmmenu^ formulario = gcnew frmmenu;
		formulario->Show();
		MessageBox::Show("Bienvenido");

	}
	
	if (txtUsuario->Text == "Mejía" && txtContraseña->Text == "2020110466")
	{
		frmmenu^ formulario = gcnew frmmenu;
		formulario->Show();
		MessageBox::Show("Bienvenido");
	}
	else
	{
		MessageBox::Show("Usuario y contraseña incorrectos");
	}
}

};
}
