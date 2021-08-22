#pragma once
#include "frmregistroDATOSEMPLEADO.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmDatosEmpleados
	/// </summary>
	public ref class frmDatosEmpleados : public System::Windows::Forms::Form
	{
	public:
		frmDatosEmpleados(void)
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
		~frmDatosEmpleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ TxtSueldo;

	private: System::Windows::Forms::TextBox^ TxtPuesto;

	private: System::Windows::Forms::TextBox^ TxtEmail;

	private: System::Windows::Forms::TextBox^ TxtID;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bntagregar;
	private: System::Windows::Forms::Button^ bntmostrar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDatosEmpleados::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TxtSueldo = (gcnew System::Windows::Forms::TextBox());
			this->TxtPuesto = (gcnew System::Windows::Forms::TextBox());
			this->TxtEmail = (gcnew System::Windows::Forms::TextBox());
			this->TxtID = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bntagregar = (gcnew System::Windows::Forms::Button());
			this->bntmostrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(16, 302);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 26);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Fecha Inicio";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(171, 303);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(265, 25);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// TxtSueldo
			// 
			this->TxtSueldo->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtSueldo->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtSueldo->Location = System::Drawing::Point(113, 228);
			this->TxtSueldo->Margin = System::Windows::Forms::Padding(4);
			this->TxtSueldo->Name = L"TxtSueldo";
			this->TxtSueldo->Size = System::Drawing::Size(308, 22);
			this->TxtSueldo->TabIndex = 17;
			this->TxtSueldo->TextChanged += gcnew System::EventHandler(this, &frmDatosEmpleados::TxtSueldo_TextChanged);
			this->TxtSueldo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosEmpleados::TxtSueldo_KeyPress);
			// 
			// TxtPuesto
			// 
			this->TxtPuesto->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtPuesto->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtPuesto->Location = System::Drawing::Point(113, 144);
			this->TxtPuesto->Margin = System::Windows::Forms::Padding(4);
			this->TxtPuesto->Name = L"TxtPuesto";
			this->TxtPuesto->Size = System::Drawing::Size(308, 25);
			this->TxtPuesto->TabIndex = 16;
			this->TxtPuesto->TextChanged += gcnew System::EventHandler(this, &frmDatosEmpleados::TxtPuesto_TextChanged);
			this->TxtPuesto->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosEmpleados::TxtPuesto_KeyPress);
			// 
			// TxtEmail
			// 
			this->TxtEmail->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtEmail->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtEmail->Location = System::Drawing::Point(113, 75);
			this->TxtEmail->Margin = System::Windows::Forms::Padding(4);
			this->TxtEmail->Name = L"TxtEmail";
			this->TxtEmail->Size = System::Drawing::Size(308, 25);
			this->TxtEmail->TabIndex = 15;
			this->TxtEmail->TextChanged += gcnew System::EventHandler(this, &frmDatosEmpleados::TxtEmail_TextChanged);
			this->TxtEmail->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosEmpleados::TxtEmail_KeyPress);
			// 
			// TxtID
			// 
			this->TxtID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtID->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtID->Location = System::Drawing::Point(113, 11);
			this->TxtID->Margin = System::Windows::Forms::Padding(4);
			this->TxtID->Name = L"TxtID";
			this->TxtID->Size = System::Drawing::Size(308, 25);
			this->TxtID->TabIndex = 14;
			this->TxtID->TextChanged += gcnew System::EventHandler(this, &frmDatosEmpleados::TxtID_TextChanged);
			this->TxtID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosEmpleados::TxtID_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Aqua;
			this->label4->Location = System::Drawing::Point(17, 228);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 26);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Sueldo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(16, 143);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 26);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Puesto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Aqua;
			this->label2->Location = System::Drawing::Point(16, 74);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 26);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 26);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ID";
			// 
			// bntagregar
			// 
			this->bntagregar->Location = System::Drawing::Point(59, 394);
			this->bntagregar->Margin = System::Windows::Forms::Padding(4);
			this->bntagregar->Name = L"bntagregar";
			this->bntagregar->Size = System::Drawing::Size(100, 28);
			this->bntagregar->TabIndex = 20;
			this->bntagregar->Text = L"AGREGAR";
			this->bntagregar->UseVisualStyleBackColor = true;
			// 
			// bntmostrar
			// 
			this->bntmostrar->Location = System::Drawing::Point(439, 394);
			this->bntmostrar->Margin = System::Windows::Forms::Padding(4);
			this->bntmostrar->Name = L"bntmostrar";
			this->bntmostrar->Size = System::Drawing::Size(100, 28);
			this->bntmostrar->TabIndex = 21;
			this->bntmostrar->Text = L"MOSTRAR";
			this->bntmostrar->UseVisualStyleBackColor = true;
			this->bntmostrar->Click += gcnew System::EventHandler(this, &frmDatosEmpleados::bntmostrar_Click);
			// 
			// frmDatosEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(663, 498);
			this->Controls->Add(this->bntmostrar);
			this->Controls->Add(this->bntagregar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->TxtSueldo);
			this->Controls->Add(this->TxtPuesto);
			this->Controls->Add(this->TxtEmail);
			this->Controls->Add(this->TxtID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmDatosEmpleados";
			this->Text = L"frmDatosEmpleados";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool TextChanged = false;
	private: System::Void bntmostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmDATOSEMPLEADO^ formulario = gcnew frmDATOSEMPLEADO;
		formulario->Show();
	}



private: System::Void TxtID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtID->Text->Contains(".") && !this->TxtID->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtEmail_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtEmail->Text->Contains(".") && !this->TxtEmail->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetterOrDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtPuesto_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtPuesto->Text->Contains(".") && !this->TxtPuesto->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtSueldo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtSueldo->Text->Contains(".") && !this->TxtSueldo->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtPuesto_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtSueldo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};
}
