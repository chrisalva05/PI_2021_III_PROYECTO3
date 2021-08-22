#pragma once
#include "frmRegistroDatosclientes.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmDatosClientes
	/// </summary>
	public ref class frmDatosClientes : public System::Windows::Forms::Form
	{
	public:
		frmDatosClientes(void)
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
		~frmDatosClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblid;
	protected:
	private: System::Windows::Forms::Label^ lblFechaIngreso;
	private: System::Windows::Forms::Label^ lblPrimerNombre;
	private: System::Windows::Forms::Label^ lblApellido;
	private: System::Windows::Forms::Label^ lblTotalBoletos;
	private: System::Windows::Forms::Label^ lblGenero;
	private: System::Windows::Forms::TextBox^ txtprimernombre;
	private: System::Windows::Forms::TextBox^ txtapellido;


	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtFechadeingreso;

	private: System::Windows::Forms::ComboBox^ cboGenero;
	private: System::Windows::Forms::ComboBox^ cbototalboletos;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDatosClientes::typeid));
			this->lblid = (gcnew System::Windows::Forms::Label());
			this->lblFechaIngreso = (gcnew System::Windows::Forms::Label());
			this->lblPrimerNombre = (gcnew System::Windows::Forms::Label());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->lblTotalBoletos = (gcnew System::Windows::Forms::Label());
			this->lblGenero = (gcnew System::Windows::Forms::Label());
			this->txtprimernombre = (gcnew System::Windows::Forms::TextBox());
			this->txtapellido = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtFechadeingreso = (gcnew System::Windows::Forms::TextBox());
			this->cboGenero = (gcnew System::Windows::Forms::ComboBox());
			this->cbototalboletos = (gcnew System::Windows::Forms::ComboBox());
			this->bntagregar = (gcnew System::Windows::Forms::Button());
			this->bntmostrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblid
			// 
			this->lblid->AutoSize = true;
			this->lblid->BackColor = System::Drawing::Color::Transparent;
			this->lblid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblid->ForeColor = System::Drawing::Color::Aqua;
			this->lblid->Location = System::Drawing::Point(80, 217);
			this->lblid->Name = L"lblid";
			this->lblid->Size = System::Drawing::Size(148, 26);
			this->lblid->TabIndex = 0;
			this->lblid->Text = L"Ingrese su ID";
			// 
			// lblFechaIngreso
			// 
			this->lblFechaIngreso->AutoSize = true;
			this->lblFechaIngreso->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaIngreso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaIngreso->ForeColor = System::Drawing::Color::Aqua;
			this->lblFechaIngreso->Location = System::Drawing::Point(80, 321);
			this->lblFechaIngreso->Name = L"lblFechaIngreso";
			this->lblFechaIngreso->Size = System::Drawing::Size(187, 26);
			this->lblFechaIngreso->TabIndex = 1;
			this->lblFechaIngreso->Text = L"Fecha de Ingreso";
			// 
			// lblPrimerNombre
			// 
			this->lblPrimerNombre->AutoSize = true;
			this->lblPrimerNombre->BackColor = System::Drawing::Color::Transparent;
			this->lblPrimerNombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrimerNombre->ForeColor = System::Drawing::Color::Aqua;
			this->lblPrimerNombre->Location = System::Drawing::Point(16, 48);
			this->lblPrimerNombre->Name = L"lblPrimerNombre";
			this->lblPrimerNombre->Size = System::Drawing::Size(293, 26);
			this->lblPrimerNombre->TabIndex = 2;
			this->lblPrimerNombre->Text = L"Ingrese su Primer Nombre:";
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->BackColor = System::Drawing::Color::Transparent;
			this->lblApellido->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellido->ForeColor = System::Drawing::Color::Aqua;
			this->lblApellido->Location = System::Drawing::Point(80, 129);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(208, 26);
			this->lblApellido->TabIndex = 3;
			this->lblApellido->Text = L"Ingrese su Apellido";
			// 
			// lblTotalBoletos
			// 
			this->lblTotalBoletos->AutoSize = true;
			this->lblTotalBoletos->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalBoletos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalBoletos->ForeColor = System::Drawing::Color::Aqua;
			this->lblTotalBoletos->Location = System::Drawing::Point(80, 441);
			this->lblTotalBoletos->Name = L"lblTotalBoletos";
			this->lblTotalBoletos->Size = System::Drawing::Size(172, 26);
			this->lblTotalBoletos->TabIndex = 4;
			this->lblTotalBoletos->Text = L"Total de boletos";
			// 
			// lblGenero
			// 
			this->lblGenero->AutoSize = true;
			this->lblGenero->BackColor = System::Drawing::Color::Transparent;
			this->lblGenero->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGenero->ForeColor = System::Drawing::Color::Aqua;
			this->lblGenero->Location = System::Drawing::Point(80, 555);
			this->lblGenero->Name = L"lblGenero";
			this->lblGenero->Size = System::Drawing::Size(229, 26);
			this->lblGenero->TabIndex = 5;
			this->lblGenero->Text = L"Seleccione su Género";
			// 
			// txtprimernombre
			// 
			this->txtprimernombre->Location = System::Drawing::Point(668, 52);
			this->txtprimernombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtprimernombre->Name = L"txtprimernombre";
			this->txtprimernombre->Size = System::Drawing::Size(117, 22);
			this->txtprimernombre->TabIndex = 6;
			this->txtprimernombre->TextChanged += gcnew System::EventHandler(this, &frmDatosClientes::txtprimernombre_TextChanged);
			this->txtprimernombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosClientes::txtprimernombre_KeyPress);
			// 
			// txtapellido
			// 
			this->txtapellido->Location = System::Drawing::Point(668, 129);
			this->txtapellido->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtapellido->Name = L"txtapellido";
			this->txtapellido->Size = System::Drawing::Size(117, 22);
			this->txtapellido->TabIndex = 7;
			this->txtapellido->TextChanged += gcnew System::EventHandler(this, &frmDatosClientes::txtapellido_TextChanged);
			this->txtapellido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosClientes::txtapellido_KeyPress);
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(668, 217);
			this->txtID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(117, 22);
			this->txtID->TabIndex = 8;
			this->txtID->TextChanged += gcnew System::EventHandler(this, &frmDatosClientes::txtID_TextChanged);
			this->txtID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmDatosClientes::txtID_KeyPress);
			// 
			// txtFechadeingreso
			// 
			this->txtFechadeingreso->Location = System::Drawing::Point(668, 321);
			this->txtFechadeingreso->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFechadeingreso->Name = L"txtFechadeingreso";
			this->txtFechadeingreso->Size = System::Drawing::Size(117, 22);
			this->txtFechadeingreso->TabIndex = 9;
			this->txtFechadeingreso->TextChanged += gcnew System::EventHandler(this, &frmDatosClientes::txtFechadeingreso_TextChanged);
			// 
			// cboGenero
			// 
			this->cboGenero->FormattingEnabled = true;
			this->cboGenero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->cboGenero->Location = System::Drawing::Point(664, 560);
			this->cboGenero->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboGenero->Name = L"cboGenero";
			this->cboGenero->Size = System::Drawing::Size(121, 24);
			this->cboGenero->TabIndex = 10;
			// 
			// cbototalboletos
			// 
			this->cbototalboletos->FormattingEnabled = true;
			this->cbototalboletos->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->cbototalboletos->Location = System::Drawing::Point(664, 441);
			this->cbototalboletos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbototalboletos->Name = L"cbototalboletos";
			this->cbototalboletos->Size = System::Drawing::Size(121, 24);
			this->cbototalboletos->TabIndex = 11;
			// 
			// bntagregar
			// 
			this->bntagregar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntagregar->Location = System::Drawing::Point(59, 636);
			this->bntagregar->Margin = System::Windows::Forms::Padding(4);
			this->bntagregar->Name = L"bntagregar";
			this->bntagregar->Size = System::Drawing::Size(159, 41);
			this->bntagregar->TabIndex = 12;
			this->bntagregar->Text = L"AGREGAR";
			this->bntagregar->UseVisualStyleBackColor = true;
			// 
			// bntmostrar
			// 
			this->bntmostrar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntmostrar->Location = System::Drawing::Point(760, 635);
			this->bntmostrar->Margin = System::Windows::Forms::Padding(4);
			this->bntmostrar->Name = L"bntmostrar";
			this->bntmostrar->Size = System::Drawing::Size(156, 42);
			this->bntmostrar->TabIndex = 13;
			this->bntmostrar->Text = L"MOSTRAR";
			this->bntmostrar->UseVisualStyleBackColor = true;
			this->bntmostrar->Click += gcnew System::EventHandler(this, &frmDatosClientes::bntmostrar_Click);
			// 
			// frmDatosClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1011, 746);
			this->Controls->Add(this->bntmostrar);
			this->Controls->Add(this->bntagregar);
			this->Controls->Add(this->cbototalboletos);
			this->Controls->Add(this->cboGenero);
			this->Controls->Add(this->txtFechadeingreso);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->txtapellido);
			this->Controls->Add(this->txtprimernombre);
			this->Controls->Add(this->lblGenero);
			this->Controls->Add(this->lblTotalBoletos);
			this->Controls->Add(this->lblApellido);
			this->Controls->Add(this->lblPrimerNombre);
			this->Controls->Add(this->lblFechaIngreso);
			this->Controls->Add(this->lblid);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmDatosClientes";
			this->Text = L"DatosClientes";
			this->Load += gcnew System::EventHandler(this, &frmDatosClientes::frmDatosClientes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool TextChanged = false;
	private: System::Void frmDatosClientes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void bntmostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRegistroDatosclientes^ formulario = gcnew frmRegistroDatosclientes;
	formulario->Show();
}


private: System::Void txtprimernombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->txtprimernombre->Text->Contains(".") && !this->txtprimernombre->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void txtapellido_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->txtapellido->Text->Contains(".") && !this->txtapellido->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void txtID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->txtID->Text->Contains(".") && !this->txtID->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
private: System::Void txtprimernombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void txtapellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void txtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void txtFechadeingreso_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};
}
