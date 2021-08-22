#pragma once
#include "frmRegistroaerolinea.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmAerolinea
	/// </summary>
	public ref class frmAerolinea : public System::Windows::Forms::Form
	{
	public:
		frmAerolinea(void)
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
		~frmAerolinea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ Txtnombre;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Txtid;

	private: System::Windows::Forms::Button^ btnAGR;
	private: System::Windows::Forms::Button^ btnmostra;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAerolinea::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txtid = (gcnew System::Windows::Forms::TextBox());
			this->btnAGR = (gcnew System::Windows::Forms::Button());
			this->btnmostra = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(415, 209);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(243, 26);
			this->comboBox1->TabIndex = 11;
			// 
			// Txtnombre
			// 
			this->Txtnombre->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Txtnombre->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txtnombre->Location = System::Drawing::Point(415, 123);
			this->Txtnombre->Margin = System::Windows::Forms::Padding(4);
			this->Txtnombre->Name = L"Txtnombre";
			this->Txtnombre->Size = System::Drawing::Size(243, 25);
			this->Txtnombre->TabIndex = 10;
			this->Txtnombre->TextChanged += gcnew System::EventHandler(this, &frmAerolinea::Txtnombre_TextChanged);
			this->Txtnombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAerolinea::Txtnombre_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(28, 121);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 26);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Aqua;
			this->label2->Location = System::Drawing::Point(28, 207);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Clase";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(28, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"ID";
			// 
			// Txtid
			// 
			this->Txtid->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Txtid->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txtid->Location = System::Drawing::Point(415, 49);
			this->Txtid->Margin = System::Windows::Forms::Padding(4);
			this->Txtid->Name = L"Txtid";
			this->Txtid->Size = System::Drawing::Size(243, 25);
			this->Txtid->TabIndex = 6;
			this->Txtid->TextChanged += gcnew System::EventHandler(this, &frmAerolinea::Txtid_TextChanged);
			this->Txtid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAerolinea::Txtid_KeyPress);
			// 
			// btnAGR
			// 
			this->btnAGR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAGR->Location = System::Drawing::Point(16, 346);
			this->btnAGR->Margin = System::Windows::Forms::Padding(4);
			this->btnAGR->Name = L"btnAGR";
			this->btnAGR->Size = System::Drawing::Size(165, 47);
			this->btnAGR->TabIndex = 12;
			this->btnAGR->Text = L"AGREGAR";
			this->btnAGR->UseVisualStyleBackColor = true;
			// 
			// btnmostra
			// 
			this->btnmostra->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmostra->Location = System::Drawing::Point(440, 346);
			this->btnmostra->Margin = System::Windows::Forms::Padding(4);
			this->btnmostra->Name = L"btnmostra";
			this->btnmostra->Size = System::Drawing::Size(165, 47);
			this->btnmostra->TabIndex = 13;
			this->btnmostra->Text = L"MOSTRAR";
			this->btnmostra->UseVisualStyleBackColor = true;
			this->btnmostra->Click += gcnew System::EventHandler(this, &frmAerolinea::btnmostra_Click);
			// 
			// frmAerolinea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(780, 444);
			this->Controls->Add(this->btnmostra);
			this->Controls->Add(this->btnAGR);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Txtnombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Txtid);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmAerolinea";
			this->Text = L"frmAerolinea";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnmostra_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroaerolinea^ formulario = gcnew frmRegistroaerolinea;
		formulario->Show();
	}
private: bool TextChanged = false;
private: System::Void Txtid_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->Txtid->Text->Contains(".") && !this->Txtid->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void Txtnombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->Txtnombre->Text->Contains(".") && !this->Txtnombre->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void Txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void Txtnombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};

}