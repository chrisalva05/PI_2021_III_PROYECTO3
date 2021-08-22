#pragma once
#include "frmRegistroHorario.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmHorarios
	/// </summary>
	public ref class frmHorarios : public System::Windows::Forms::Form
	{
	public:
		frmHorarios(void)
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
		~frmHorarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LBLID;
	protected:

	private: System::Windows::Forms::Label^ LBLHORA;
	protected:

	private: System::Windows::Forms::Label^ LBLFECHA;

	private: System::Windows::Forms::Label^ LBLVUELO;
	private: System::Windows::Forms::TextBox^ TXTFECHA;
	private: System::Windows::Forms::TextBox^ TxtHORA;

	private: System::Windows::Forms::TextBox^ TXTID;



	private: System::Windows::Forms::ComboBox^ CBOVUELO;
	private: System::Windows::Forms::Button^ bntAgregar;
	private: System::Windows::Forms::Button^ bntMost;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmHorarios::typeid));
			this->LBLID = (gcnew System::Windows::Forms::Label());
			this->LBLHORA = (gcnew System::Windows::Forms::Label());
			this->LBLFECHA = (gcnew System::Windows::Forms::Label());
			this->LBLVUELO = (gcnew System::Windows::Forms::Label());
			this->TXTFECHA = (gcnew System::Windows::Forms::TextBox());
			this->TxtHORA = (gcnew System::Windows::Forms::TextBox());
			this->TXTID = (gcnew System::Windows::Forms::TextBox());
			this->CBOVUELO = (gcnew System::Windows::Forms::ComboBox());
			this->bntAgregar = (gcnew System::Windows::Forms::Button());
			this->bntMost = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LBLID
			// 
			this->LBLID->AutoSize = true;
			this->LBLID->BackColor = System::Drawing::Color::Transparent;
			this->LBLID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLID->ForeColor = System::Drawing::Color::Aqua;
			this->LBLID->Location = System::Drawing::Point(5, 50);
			this->LBLID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLID->Name = L"LBLID";
			this->LBLID->Size = System::Drawing::Size(352, 26);
			this->LBLID->TabIndex = 0;
			this->LBLID->Text = L"INGRESE SU NUMERO DE ID  ";
			// 
			// LBLHORA
			// 
			this->LBLHORA->AutoSize = true;
			this->LBLHORA->BackColor = System::Drawing::Color::Transparent;
			this->LBLHORA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLHORA->ForeColor = System::Drawing::Color::Aqua;
			this->LBLHORA->Location = System::Drawing::Point(5, 161);
			this->LBLHORA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLHORA->Name = L"LBLHORA";
			this->LBLHORA->Size = System::Drawing::Size(399, 26);
			this->LBLHORA->TabIndex = 1;
			this->LBLHORA->Text = L"INGRESE LA HORA DE SU VUELO";
			// 
			// LBLFECHA
			// 
			this->LBLFECHA->AutoSize = true;
			this->LBLFECHA->BackColor = System::Drawing::Color::Transparent;
			this->LBLFECHA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLFECHA->ForeColor = System::Drawing::Color::Aqua;
			this->LBLFECHA->Location = System::Drawing::Point(7, 273);
			this->LBLFECHA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLFECHA->Name = L"LBLFECHA";
			this->LBLFECHA->Size = System::Drawing::Size(417, 26);
			this->LBLFECHA->TabIndex = 2;
			this->LBLFECHA->Text = L"INGRESE LA FECHA  DE SU VUELO";
			// 
			// LBLVUELO
			// 
			this->LBLVUELO->AutoSize = true;
			this->LBLVUELO->BackColor = System::Drawing::Color::Transparent;
			this->LBLVUELO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLVUELO->ForeColor = System::Drawing::Color::Aqua;
			this->LBLVUELO->Location = System::Drawing::Point(24, 393);
			this->LBLVUELO->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLVUELO->Name = L"LBLVUELO";
			this->LBLVUELO->Size = System::Drawing::Size(349, 26);
			this->LBLVUELO->TabIndex = 3;
			this->LBLVUELO->Text = L"INGRESE EL TIPO DE VUELO";
			// 
			// TXTFECHA
			// 
			this->TXTFECHA->Location = System::Drawing::Point(496, 273);
			this->TXTFECHA->Margin = System::Windows::Forms::Padding(4);
			this->TXTFECHA->Name = L"TXTFECHA";
			this->TXTFECHA->Size = System::Drawing::Size(160, 22);
			this->TXTFECHA->TabIndex = 4;
			this->TXTFECHA->TextChanged += gcnew System::EventHandler(this, &frmHorarios::TXTFECHA_TextChanged);
			this->TXTFECHA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmHorarios::TXTFECHA_KeyPress);
			// 
			// TxtHORA
			// 
			this->TxtHORA->Location = System::Drawing::Point(496, 165);
			this->TxtHORA->Margin = System::Windows::Forms::Padding(4);
			this->TxtHORA->Name = L"TxtHORA";
			this->TxtHORA->Size = System::Drawing::Size(160, 22);
			this->TxtHORA->TabIndex = 5;
			this->TxtHORA->TextChanged += gcnew System::EventHandler(this, &frmHorarios::TxtHORA_TextChanged);
			this->TxtHORA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmHorarios::TxtHORA_KeyPress);
			// 
			// TXTID
			// 
			this->TXTID->Location = System::Drawing::Point(496, 50);
			this->TXTID->Margin = System::Windows::Forms::Padding(4);
			this->TXTID->Name = L"TXTID";
			this->TXTID->Size = System::Drawing::Size(160, 22);
			this->TXTID->TabIndex = 6;
			this->TXTID->TextChanged += gcnew System::EventHandler(this, &frmHorarios::TXTID_TextChanged);
			this->TXTID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmHorarios::TXTID_KeyPress);
			// 
			// CBOVUELO
			// 
			this->CBOVUELO->FormattingEnabled = true;
			this->CBOVUELO->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ECONOMICA", L"TURISTA", L"PRIMERA CLASE" });
			this->CBOVUELO->Location = System::Drawing::Point(496, 390);
			this->CBOVUELO->Margin = System::Windows::Forms::Padding(4);
			this->CBOVUELO->Name = L"CBOVUELO";
			this->CBOVUELO->Size = System::Drawing::Size(160, 24);
			this->CBOVUELO->TabIndex = 7;
			// 
			// bntAgregar
			// 
			this->bntAgregar->Location = System::Drawing::Point(53, 497);
			this->bntAgregar->Margin = System::Windows::Forms::Padding(4);
			this->bntAgregar->Name = L"bntAgregar";
			this->bntAgregar->Size = System::Drawing::Size(100, 28);
			this->bntAgregar->TabIndex = 8;
			this->bntAgregar->Text = L"AGREGAR";
			this->bntAgregar->UseVisualStyleBackColor = true;
			// 
			// bntMost
			// 
			this->bntMost->Location = System::Drawing::Point(469, 497);
			this->bntMost->Margin = System::Windows::Forms::Padding(4);
			this->bntMost->Name = L"bntMost";
			this->bntMost->Size = System::Drawing::Size(100, 28);
			this->bntMost->TabIndex = 9;
			this->bntMost->Text = L"MOSTRAR";
			this->bntMost->UseVisualStyleBackColor = true;
			this->bntMost->Click += gcnew System::EventHandler(this, &frmHorarios::bntMost_Click);
			// 
			// frmHorarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(764, 622);
			this->Controls->Add(this->bntMost);
			this->Controls->Add(this->bntAgregar);
			this->Controls->Add(this->CBOVUELO);
			this->Controls->Add(this->TXTID);
			this->Controls->Add(this->TxtHORA);
			this->Controls->Add(this->TXTFECHA);
			this->Controls->Add(this->LBLVUELO);
			this->Controls->Add(this->LBLFECHA);
			this->Controls->Add(this->LBLHORA);
			this->Controls->Add(this->LBLID);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmHorarios";
			this->Text = L"Horarios";
			this->Load += gcnew System::EventHandler(this, &frmHorarios::frmHorarios_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool TextChanged = false;
	private: System::Void frmHorarios_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void bntMost_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRegistroHorario^ formulario = gcnew frmRegistroHorario;
	formulario->Show();
}
private: System::Void TXTID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '.') {
			if (this->TXTID->Text->Contains(".") && !this->TXTID->SelectedText->Contains("."))
				e->Handled = true;
		}

		else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
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
private: System::Void TXTFECHA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->TXTFECHA->Text->Contains(".") && !this->TXTFECHA->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetterOrDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void TXTID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TxtHORA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void TXTFECHA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};
}
