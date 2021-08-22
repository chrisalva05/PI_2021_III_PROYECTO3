#pragma once
#include "frmRegistroFactura.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmFactura
	/// </summary>
	public ref class frmFactura : public System::Windows::Forms::Form
	{
	public:
		frmFactura(void)
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
		~frmFactura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TxtHORA;
	protected:

	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ TxtBOLETO;
	private: System::Windows::Forms::TextBox^ TxtEMPLEADO;


	private: System::Windows::Forms::TextBox^ TxtID;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bntagre;
	private: System::Windows::Forms::Button^ bntMostr;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmFactura::typeid));
			this->TxtHORA = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TxtBOLETO = (gcnew System::Windows::Forms::TextBox());
			this->TxtEMPLEADO = (gcnew System::Windows::Forms::TextBox());
			this->TxtID = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bntagre = (gcnew System::Windows::Forms::Button());
			this->bntMostr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TxtHORA
			// 
			this->TxtHORA->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtHORA->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtHORA->Location = System::Drawing::Point(149, 209);
			this->TxtHORA->Margin = System::Windows::Forms::Padding(4);
			this->TxtHORA->Name = L"TxtHORA";
			this->TxtHORA->Size = System::Drawing::Size(231, 25);
			this->TxtHORA->TabIndex = 19;
			this->TxtHORA->TextChanged += gcnew System::EventHandler(this, &frmFactura::TxtHORA_TextChanged);
			this->TxtHORA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmFactura::TxtHORA_KeyPress);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(149, 140);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(231, 22);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// TxtBOLETO
			// 
			this->TxtBOLETO->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtBOLETO->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtBOLETO->Location = System::Drawing::Point(149, 73);
			this->TxtBOLETO->Margin = System::Windows::Forms::Padding(4);
			this->TxtBOLETO->Name = L"TxtBOLETO";
			this->TxtBOLETO->Size = System::Drawing::Size(231, 25);
			this->TxtBOLETO->TabIndex = 17;
			this->TxtBOLETO->TextChanged += gcnew System::EventHandler(this, &frmFactura::TxtBOLETO_TextChanged);
			this->TxtBOLETO->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmFactura::TxtBOLETO_KeyPress);
			// 
			// TxtEMPLEADO
			// 
			this->TxtEMPLEADO->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtEMPLEADO->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtEMPLEADO->Location = System::Drawing::Point(149, 281);
			this->TxtEMPLEADO->Margin = System::Windows::Forms::Padding(4);
			this->TxtEMPLEADO->Name = L"TxtEMPLEADO";
			this->TxtEMPLEADO->Size = System::Drawing::Size(375, 25);
			this->TxtEMPLEADO->TabIndex = 16;
			this->TxtEMPLEADO->TextChanged += gcnew System::EventHandler(this, &frmFactura::TxtEMPLEADO_TextChanged);
			this->TxtEMPLEADO->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmFactura::TxtEMPLEADO_KeyPress);
			// 
			// TxtID
			// 
			this->TxtID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TxtID->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtID->Location = System::Drawing::Point(149, 11);
			this->TxtID->Margin = System::Windows::Forms::Padding(4);
			this->TxtID->Name = L"TxtID";
			this->TxtID->Size = System::Drawing::Size(231, 25);
			this->TxtID->TabIndex = 15;
			this->TxtID->TextChanged += gcnew System::EventHandler(this, &frmFactura::TxtID_TextChanged);
			this->TxtID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmFactura::TxtID_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(16, 207);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 26);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Hora";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Aqua;
			this->label4->Location = System::Drawing::Point(16, 284);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 26);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Empleado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(16, 73);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 26);
			this->label3->TabIndex = 12;
			this->label3->Text = L"ID Boleto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Aqua;
			this->label2->Location = System::Drawing::Point(16, 139);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 26);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Fecha";
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
			// bntagre
			// 
			this->bntagre->Location = System::Drawing::Point(49, 370);
			this->bntagre->Margin = System::Windows::Forms::Padding(4);
			this->bntagre->Name = L"bntagre";
			this->bntagre->Size = System::Drawing::Size(100, 28);
			this->bntagre->TabIndex = 20;
			this->bntagre->Text = L"AGREGAR";
			this->bntagre->UseVisualStyleBackColor = true;
			// 
			// bntMostr
			// 
			this->bntMostr->Location = System::Drawing::Point(411, 369);
			this->bntMostr->Margin = System::Windows::Forms::Padding(4);
			this->bntMostr->Name = L"bntMostr";
			this->bntMostr->Size = System::Drawing::Size(100, 28);
			this->bntMostr->TabIndex = 21;
			this->bntMostr->Text = L"MOSTRAR";
			this->bntMostr->UseVisualStyleBackColor = true;
			this->bntMostr->Click += gcnew System::EventHandler(this, &frmFactura::bntMostr_Click);
			// 
			// frmFactura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(660, 481);
			this->Controls->Add(this->bntMostr);
			this->Controls->Add(this->bntagre);
			this->Controls->Add(this->TxtHORA);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->TxtBOLETO);
			this->Controls->Add(this->TxtEMPLEADO);
			this->Controls->Add(this->TxtID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmFactura";
			this->Text = L"frmFactura";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool TextChanged = false;
	private: System::Void bntMostr_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroFactura^ formulario = gcnew frmRegistroFactura;
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
private: System::Void TxtBOLETO_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtBOLETO->Text->Contains(".") && !this->TxtBOLETO->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetterOrDigit (e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtHORA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtHORA->Text->Contains(".") && !this->TxtHORA->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtEMPLEADO_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TxtEMPLEADO->Text->Contains(".") && !this->TxtEMPLEADO->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void TxtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtBOLETO_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtHORA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtEMPLEADO_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};
}
