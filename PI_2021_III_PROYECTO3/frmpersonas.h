#pragma once
#include "frmRegistroPersonas.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "frmPersonas.h"
#include "PERSONAS.h"
namespace PI2021IIIPROYECTO3 {

	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmpersonas
	/// </summary>
	public ref class frmpersonas : public System::Windows::Forms::Form
	{
	public:
		frmpersonas(void)
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
		~frmpersonas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_ID;
	private: System::Windows::Forms::Label^ LBL_eMAL;
	private: System::Windows::Forms::Label^ LBLEDAD;

	protected:

	protected:


	private: System::Windows::Forms::Label^ LBLNOMBRE;

	private: System::Windows::Forms::Label^ lBLAPELLIDO;


	private: System::Windows::Forms::Label^ LBLSEGURO;
	private: System::Windows::Forms::ComboBox^ CBOGENERO;


	private: System::Windows::Forms::Label^ laLBLGENERO;
	private: System::Windows::Forms::TextBox^ tXtID;
	private: System::Windows::Forms::TextBox^ tXtCorreo;
	private: System::Windows::Forms::TextBox^ tXtEdad;
	private: System::Windows::Forms::TextBox^ tXtNombre;
	private: System::Windows::Forms::TextBox^ tXtApellido;
	private: System::Windows::Forms::TextBox^ tXtSeguro;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ bntMOSTRAR;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmpersonas::typeid));
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->LBL_eMAL = (gcnew System::Windows::Forms::Label());
			this->LBLEDAD = (gcnew System::Windows::Forms::Label());
			this->LBLNOMBRE = (gcnew System::Windows::Forms::Label());
			this->lBLAPELLIDO = (gcnew System::Windows::Forms::Label());
			this->LBLSEGURO = (gcnew System::Windows::Forms::Label());
			this->CBOGENERO = (gcnew System::Windows::Forms::ComboBox());
			this->laLBLGENERO = (gcnew System::Windows::Forms::Label());
			this->tXtID = (gcnew System::Windows::Forms::TextBox());
			this->tXtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->tXtEdad = (gcnew System::Windows::Forms::TextBox());
			this->tXtNombre = (gcnew System::Windows::Forms::TextBox());
			this->tXtApellido = (gcnew System::Windows::Forms::TextBox());
			this->tXtSeguro = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bntMOSTRAR = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_ID
			// 
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ID->ForeColor = System::Drawing::Color::Aqua;
			this->lbl_ID->Location = System::Drawing::Point(12, 29);
			this->lbl_ID->Name = L"lbl_ID";
			this->lbl_ID->Size = System::Drawing::Size(162, 22);
			this->lbl_ID->TabIndex = 0;
			this->lbl_ID->Text = L"INGRESE  SU ID ";
			// 
			// LBL_eMAL
			// 
			this->LBL_eMAL->AutoSize = true;
			this->LBL_eMAL->BackColor = System::Drawing::Color::Transparent;
			this->LBL_eMAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBL_eMAL->ForeColor = System::Drawing::Color::Aqua;
			this->LBL_eMAL->Location = System::Drawing::Point(2, 92);
			this->LBL_eMAL->Name = L"LBL_eMAL";
			this->LBL_eMAL->Size = System::Drawing::Size(227, 24);
			this->LBL_eMAL->TabIndex = 1;
			this->LBL_eMAL->Text = L"INGRESE SU CORREO";
			// 
			// LBLEDAD
			// 
			this->LBLEDAD->AutoSize = true;
			this->LBLEDAD->BackColor = System::Drawing::Color::Transparent;
			this->LBLEDAD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLEDAD->ForeColor = System::Drawing::Color::Aqua;
			this->LBLEDAD->Location = System::Drawing::Point(12, 140);
			this->LBLEDAD->Name = L"LBLEDAD";
			this->LBLEDAD->Size = System::Drawing::Size(195, 22);
			this->LBLEDAD->TabIndex = 2;
			this->LBLEDAD->Text = L"INGRESE  SU EDAD ";
			// 
			// LBLNOMBRE
			// 
			this->LBLNOMBRE->AutoSize = true;
			this->LBLNOMBRE->BackColor = System::Drawing::Color::Transparent;
			this->LBLNOMBRE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLNOMBRE->ForeColor = System::Drawing::Color::Aqua;
			this->LBLNOMBRE->Location = System::Drawing::Point(2, 198);
			this->LBLNOMBRE->Name = L"LBLNOMBRE";
			this->LBLNOMBRE->Size = System::Drawing::Size(223, 22);
			this->LBLNOMBRE->TabIndex = 3;
			this->LBLNOMBRE->Text = L"INGRESE  SU NOMBRE";
			// 
			// lBLAPELLIDO
			// 
			this->lBLAPELLIDO->AutoSize = true;
			this->lBLAPELLIDO->BackColor = System::Drawing::Color::Transparent;
			this->lBLAPELLIDO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lBLAPELLIDO->ForeColor = System::Drawing::Color::Aqua;
			this->lBLAPELLIDO->Location = System::Drawing::Point(12, 251);
			this->lBLAPELLIDO->Name = L"lBLAPELLIDO";
			this->lBLAPELLIDO->Size = System::Drawing::Size(228, 22);
			this->lBLAPELLIDO->TabIndex = 4;
			this->lBLAPELLIDO->Text = L"INGRESE SU APELLIDO";
			// 
			// LBLSEGURO
			// 
			this->LBLSEGURO->AutoSize = true;
			this->LBLSEGURO->BackColor = System::Drawing::Color::Transparent;
			this->LBLSEGURO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLSEGURO->ForeColor = System::Drawing::Color::Aqua;
			this->LBLSEGURO->Location = System::Drawing::Point(2, 313);
			this->LBLSEGURO->Name = L"LBLSEGURO";
			this->LBLSEGURO->Size = System::Drawing::Size(413, 22);
			this->LBLSEGURO->TabIndex = 5;
			this->LBLSEGURO->Text = L"INGRESE SU NUMERO DE SEGURO SOCIAL";
			// 
			// CBOGENERO
			// 
			this->CBOGENERO->FormattingEnabled = true;
			this->CBOGENERO->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"MACULINO", L"FEMENINO" });
			this->CBOGENERO->Location = System::Drawing::Point(591, 372);
			this->CBOGENERO->Name = L"CBOGENERO";
			this->CBOGENERO->Size = System::Drawing::Size(291, 21);
			this->CBOGENERO->TabIndex = 6;
			// 
			// laLBLGENERO
			// 
			this->laLBLGENERO->AutoSize = true;
			this->laLBLGENERO->BackColor = System::Drawing::Color::Transparent;
			this->laLBLGENERO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->laLBLGENERO->ForeColor = System::Drawing::Color::Aqua;
			this->laLBLGENERO->Location = System::Drawing::Point(25, 383);
			this->laLBLGENERO->Name = L"laLBLGENERO";
			this->laLBLGENERO->Size = System::Drawing::Size(94, 22);
			this->laLBLGENERO->TabIndex = 7;
			this->laLBLGENERO->Text = L"GENERO";
			// 
			// tXtID
			// 
			this->tXtID->Location = System::Drawing::Point(591, 31);
			this->tXtID->Name = L"tXtID";
			this->tXtID->Size = System::Drawing::Size(291, 20);
			this->tXtID->TabIndex = 8;
			this->tXtID->TextChanged += gcnew System::EventHandler(this, &frmpersonas::tXtID_TextChanged);
			this->tXtID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmpersonas::tXtID_KeyPress);
			// 
			// tXtCorreo
			// 
			this->tXtCorreo->Location = System::Drawing::Point(591, 92);
			this->tXtCorreo->Name = L"tXtCorreo";
			this->tXtCorreo->Size = System::Drawing::Size(291, 20);
			this->tXtCorreo->TabIndex = 9;
			this->tXtCorreo->TextChanged += gcnew System::EventHandler(this, &frmpersonas::tXtCorreo_TextChanged);
			this->tXtCorreo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmpersonas::tXtCorreo_KeyPress);
			// 
			// tXtEdad
			// 
			this->tXtEdad->Location = System::Drawing::Point(591, 140);
			this->tXtEdad->Name = L"tXtEdad";
			this->tXtEdad->Size = System::Drawing::Size(291, 20);
			this->tXtEdad->TabIndex = 10;
			this->tXtEdad->TextChanged += gcnew System::EventHandler(this, &frmpersonas::tXtEdad_TextChanged);
			this->tXtEdad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmpersonas::tXtEdad_KeyPress);
			// 
			// tXtNombre
			// 
			this->tXtNombre->Location = System::Drawing::Point(591, 198);
			this->tXtNombre->Name = L"tXtNombre";
			this->tXtNombre->Size = System::Drawing::Size(291, 20);
			this->tXtNombre->TabIndex = 11;
			this->tXtNombre->TextChanged += gcnew System::EventHandler(this, &frmpersonas::tXtNombre_TextChanged);
			this->tXtNombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmpersonas::tXtNombre_KeyPress);
			// 
			// tXtApellido
			// 
			this->tXtApellido->Location = System::Drawing::Point(591, 251);
			this->tXtApellido->Name = L"tXtApellido";
			this->tXtApellido->Size = System::Drawing::Size(291, 20);
			this->tXtApellido->TabIndex = 12;
			this->tXtApellido->TextChanged += gcnew System::EventHandler(this, &frmpersonas::tXtApellido_TextChanged);
			this->tXtApellido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmpersonas::tXtApellido_KeyPress);
			// 
			// tXtSeguro
			// 
			this->tXtSeguro->Location = System::Drawing::Point(591, 313);
			this->tXtSeguro->Name = L"tXtSeguro";
			this->tXtSeguro->Size = System::Drawing::Size(291, 20);
			this->tXtSeguro->TabIndex = 13;
			this->tXtSeguro->TextChanged += gcnew System::EventHandler(this, &frmpersonas::tXtSeguro_TextChanged);
			this->tXtSeguro->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmpersonas::tXtSeguro_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(29, 486);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 30);
			this->button1->TabIndex = 14;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmpersonas::button1_Click);
			// 
			// bntMOSTRAR
			// 
			this->bntMOSTRAR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntMOSTRAR->Location = System::Drawing::Point(671, 486);
			this->bntMOSTRAR->Name = L"bntMOSTRAR";
			this->bntMOSTRAR->Size = System::Drawing::Size(130, 30);
			this->bntMOSTRAR->TabIndex = 15;
			this->bntMOSTRAR->Text = L"MOSTRAR";
			this->bntMOSTRAR->UseVisualStyleBackColor = true;
			this->bntMOSTRAR->Click += gcnew System::EventHandler(this, &frmpersonas::bntMOSTRAR_Click);
			// 
			// frmpersonas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1010, 593);
			this->Controls->Add(this->bntMOSTRAR);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tXtSeguro);
			this->Controls->Add(this->tXtApellido);
			this->Controls->Add(this->tXtNombre);
			this->Controls->Add(this->tXtEdad);
			this->Controls->Add(this->tXtCorreo);
			this->Controls->Add(this->tXtID);
			this->Controls->Add(this->laLBLGENERO);
			this->Controls->Add(this->CBOGENERO);
			this->Controls->Add(this->LBLSEGURO);
			this->Controls->Add(this->lBLAPELLIDO);
			this->Controls->Add(this->LBLNOMBRE);
			this->Controls->Add(this->LBLEDAD);
			this->Controls->Add(this->LBL_eMAL);
			this->Controls->Add(this->lbl_ID);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmpersonas";
			this->Text = L"personas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool TextChanged = false;
	private: System::Void bntMOSTRAR_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroPersonas^ formulario = gcnew frmRegistroPersonas;
		formulario->Show();
	}

private: System::Void tXtID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->tXtID->Text->Contains(".") && !this->tXtID->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void tXtCorreo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->tXtCorreo->Text->Contains(".") && !this->tXtCorreo->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetterOrDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void tXtEdad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->tXtEdad->Text->Contains(".") && !this->tXtEdad->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void tXtNombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->tXtNombre->Text->Contains(".") && !this->tXtNombre->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void tXtApellido_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->tXtApellido->Text->Contains(".") && !this->tXtApellido->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void tXtSeguro_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->tXtSeguro->Text->Contains(".") && !this->tXtSeguro->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void tXtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void tXtCorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void tXtEdad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void tXtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void tXtApellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void tXtSeguro_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream datoPersonasSalida("Personas.dat", ios::binary | ios::out | ios::app);
	if (!datoPersonasSalida)
	{
		cerr << "ERROR AL ABRIR " << endl;
		exit(EXIT_FAILURE);
	}
	
	System::String^ Id = tXtID->Text;
	System::String^ Nombre = tXtNombre->Text;
	System::String^ Apellido = tXtApellido->Text;
	System::String^ Email = tXtCorreo->Text;
	System::String^ Edad = tXtEdad->Text;
	System::String^ numero_de_seguro = tXtSeguro->Text;
	std::string IdPERSONAS = marshal_as<std::string>(Id);
	std::string NombrePersona = marshal_as<std::string>(Nombre);
	std::string ApellidoPersona = marshal_as<std::string>(Apellido);
	std::string EmailPersona = marshal_as<std::string>(Email);
	std::string EdadPersona = marshal_as<std::string>(Edad);
	std::string numero_de_seguroPersona = marshal_as<std::string>(numero_de_seguro);

	int cuenta = 0;//Este dato tienen que leerlo en algun textbox de su formulario
	//Personas persona(string Nombre, string apellido, string numero, string años, string identidad, string Email1, int cuenta);//No se declaran las variables adentro del mismo objeto
	Personas persona(IdPERSONAS, NombrePersona, ApellidoPersona,  EmailPersona, EdadPersona, numero_de_seguroPersona);//se utilizan las variables ya declaradas y a las que se les otorgan los valores de los textbox
	datoPersonasSalida.write(reinterpret_cast<const char*>(&persona), sizeof(Personas));

	//Instanciar un objeto con nombre diferente a la clase Personas Personas(); lo correcto es Personas persona.
	//Personas Personas(string Nombre, string apellido, string numero, string años, string identidad, string Email1, int cuenta);
	// Al ser el nombre del objeto igual a la clase entra en ambigüedad
	//datoPersonasSalida.write(reinterpret_cast<const char*>(&Personas), sizeof(&Personas)); en sizeof() no va el &, solo sizeof(Personas)

	datoPersonasSalida.close();

	tXtID->Text = "";
	tXtNombre->Text = "";
	tXtApellido->Text = "";
	tXtCorreo->Text = "";
	tXtEdad->Text = "";
	tXtSeguro->Text = "";
}
};
}


