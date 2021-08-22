#pragma once
#include "frmRegistroLugares.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLugares
	/// </summary>
	public ref class frmLugares : public System::Windows::Forms::Form
	{
	public:
		frmLugares(void)
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
		~frmLugares()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblIDD;
	protected:
	private: System::Windows::Forms::Label^ lblLugar;
	private: System::Windows::Forms::TextBox^ txtIDD;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ bntagre;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLugares::typeid));
			this->lblIDD = (gcnew System::Windows::Forms::Label());
			this->lblLugar = (gcnew System::Windows::Forms::Label());
			this->txtIDD = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bntagre = (gcnew System::Windows::Forms::Button());
			this->bntmostrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblIDD
			// 
			this->lblIDD->AutoSize = true;
			this->lblIDD->BackColor = System::Drawing::Color::Transparent;
			this->lblIDD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDD->ForeColor = System::Drawing::Color::Aqua;
			this->lblIDD->Location = System::Drawing::Point(29, 47);
			this->lblIDD->Name = L"lblIDD";
			this->lblIDD->Size = System::Drawing::Size(148, 26);
			this->lblIDD->TabIndex = 0;
			this->lblIDD->Text = L"Ingrese su ID";
			// 
			// lblLugar
			// 
			this->lblLugar->AutoSize = true;
			this->lblLugar->BackColor = System::Drawing::Color::Transparent;
			this->lblLugar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLugar->ForeColor = System::Drawing::Color::Aqua;
			this->lblLugar->Location = System::Drawing::Point(29, 203);
			this->lblLugar->Name = L"lblLugar";
			this->lblLugar->Size = System::Drawing::Size(409, 26);
			this->lblLugar->TabIndex = 1;
			this->lblLugar->Text = L"Seleccione el Lugar de destino deseado";
			// 
			// txtIDD
			// 
			this->txtIDD->Location = System::Drawing::Point(32, 94);
			this->txtIDD->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIDD->Name = L"txtIDD";
			this->txtIDD->Size = System::Drawing::Size(184, 22);
			this->txtIDD->TabIndex = 2;
			this->txtIDD->TextChanged += gcnew System::EventHandler(this, &frmLugares::txtIDD_TextChanged);
			this->txtIDD->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmLugares::txtIDD_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(197) {
				L"Kabul", L"Tirana", L"Berlín", L"Andorra la Vieja",
					L"Luanda", L"Saint John", L"Riad", L"Argel", L"Buenos Aires", L"Ereván", L"Canberra", L"Viena", L"Bakú", L"Nasáu", L"Daca", L"Bridgetown",
					L"Manama", L"Bruselas", L"Belmopán", L"Porto-Novo", L"Minsk", L"Naipyidó", L"Sucre", L"Sarajevo", L"Gaborone", L"Brasilia", L"Bandar Seri Begawan",
					L"Sofía", L"Uagadugú", L"Buyumbura", L"Thimphu", L"Praia", L"Nom Pen", L"Yaundé", L"Ottawa", L"Doha", L"Yamena", L"Santiago",
					L"Pekín", L"Nicosia", L"Bogotá", L"Moroni", L"Brazzaville", L"Pionyang", L"Seúl", L"Yamusukro", L"San José", L"Zagreb", L"La Habana",
					L"Copenhague", L"Roseau", L"Quito", L"El Cairo", L"San Salvador", L"Abu Dabi", L"Asmara", L"Bratislava", L"Liubliana", L"Madrid",
					L"Washington D. C.", L"Tallin", L"Mbabane", L"Adís Abeba", L"Manila", L"Helsinki", L"Suva", L"París", L"Libreville", L"Banjul",
					L"Tiflis", L"Accra", L"Saint George", L"Atenas", L"Guatemala", L"Conakri", L"Malabo", L"Bisáu", L"Georgetown", L"Puerto Príncipe",
					L"Tegucigalpa", L"Budapest", L"Nueva Delhi", L"Yakarta", L"Bagdad", L"Teherán", L"Dublín", L"Reikiavik", L"Majuro", L"Honiara",
					L"Jerusalén", L"Roma", L"Kingston", L"Tokio", L"Amán", L"Astaná", L"Nairobi", L"Biskek", L"Tarawa", L"Pristina", L"Kuwait City",
					L"Vientián", L"Maseru", L"Riga", L"Beirut", L"Monrovia", L"Trípoli", L"Vaduz", L"Vilna", L"Luxemburgo", L"Skopie", L"Antananarivo",
					L"Kuala Lumpur", L"Lilongüe", L"Malé", L"Bamako", L"La Valeta", L"Rabat", L"Port Louis", L"Nuakchot", L"México", L"Palikir",
					L"Chisináu", L"Mónaco", L"Ulán Bator", L"Podgorica", L"Maputo", L"Windhoek", L"Yaren", L"Katmandú", L"Managua", L"Niamey", L"Abuya",
					L"Oslo", L"Wellington", L"Mascate", L"Ámsterdam", L"Islamabad", L"Melekeok", L"Jerusalén Este", L"Panamá", L"Puerto Moresby",
					L"Asunción", L"Lima", L"Varsovia", L"Lisboa", L"Londres", L"Bangui", L"Praga", L"Kinsasa", L"Santo Domingo", L"Kigali", L"Bucarest",
					L"Moscú", L"Apia", L"Basseterre", L"San Marino", L"Kingstown", L"Castries", L"Santo Tomé", L"Dakar", L"Belgrado", L"Victoria",
					L"Freetown", L"Singapur", L"Damasco", L"Mogadiscio", L"Sri Jayawardenapura Kotte", L"Pretoria", L"Jartum", L"Yuba", L"Estocolmo",
					L"Berna", L"Paramaribo", L"Bangkok", L"Taipéi", L"Dodoma", L"Dusambé", L"Dili", L"Lomé", L"Nukualofa", L"Puerto España", L"Túnez",
					L"Asjabad", L"Ankara", L"Funafuti", L"Kiev", L"Kampala", L"Montevideo", L"Taskent", L"Port Vila", L"Vaticano", L"Caracas", L"Hanói",
					L"Saná", L"Yibuti", L"Lusaka", L"Harare"
			});
			this->comboBox1->Location = System::Drawing::Point(35, 258);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(183, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmLugares::comboBox1_KeyPress);
			// 
			// bntagre
			// 
			this->bntagre->Location = System::Drawing::Point(32, 357);
			this->bntagre->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bntagre->Name = L"bntagre";
			this->bntagre->Size = System::Drawing::Size(100, 28);
			this->bntagre->TabIndex = 4;
			this->bntagre->Text = L"AGREGAR";
			this->bntagre->UseVisualStyleBackColor = true;
			// 
			// bntmostrar
			// 
			this->bntmostrar->Location = System::Drawing::Point(383, 356);
			this->bntmostrar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bntmostrar->Name = L"bntmostrar";
			this->bntmostrar->Size = System::Drawing::Size(100, 28);
			this->bntmostrar->TabIndex = 5;
			this->bntmostrar->Text = L"MOSTRAR";
			this->bntmostrar->UseVisualStyleBackColor = true;
			this->bntmostrar->Click += gcnew System::EventHandler(this, &frmLugares::bntmostrar_Click);
			// 
			// frmLugares
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(643, 473);
			this->Controls->Add(this->bntmostrar);
			this->Controls->Add(this->bntagre);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtIDD);
			this->Controls->Add(this->lblLugar);
			this->Controls->Add(this->lblIDD);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmLugares";
			this->Text = L"Lugares";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool TextChanged = false;
	private: System::Void bntmostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroLugares^ formulario = gcnew frmRegistroLugares;
		formulario->Show();
	}
private: System::Void txtIDD_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->txtIDD->Text->Contains(".") && !this->txtIDD->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->comboBox1->Text->Contains(".") && !this->comboBox1->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void txtIDD_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};
}
