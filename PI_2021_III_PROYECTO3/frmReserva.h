#pragma once
#include "frmRegistroReserva.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmReserva
	/// </summary>
	public ref class frmReserva : public System::Windows::Forms::Form
	{
	public:
		frmReserva(void)
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
		~frmReserva()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LBLID;
	protected:
	private: System::Windows::Forms::Label^ LBLFECHA;
	private: System::Windows::Forms::Label^ LBLORIGEN;
	private: System::Windows::Forms::Label^ LBLDESTINO;
	private: System::Windows::Forms::Label^ LBLAVION;
	private: System::Windows::Forms::Label^ LBLVUELO;
	private: System::Windows::Forms::ComboBox^ cboClaseVuelo;

	private: System::Windows::Forms::ComboBox^ cboAvionReserva;

	private: System::Windows::Forms::DateTimePicker^ dTP;
	private: System::Windows::Forms::TextBox^ TXTID;
	private: System::Windows::Forms::ComboBox^ cboorigin;
	private: System::Windows::Forms::ComboBox^ cboDestiny;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReserva::typeid));
			this->LBLID = (gcnew System::Windows::Forms::Label());
			this->LBLFECHA = (gcnew System::Windows::Forms::Label());
			this->LBLORIGEN = (gcnew System::Windows::Forms::Label());
			this->LBLDESTINO = (gcnew System::Windows::Forms::Label());
			this->LBLAVION = (gcnew System::Windows::Forms::Label());
			this->LBLVUELO = (gcnew System::Windows::Forms::Label());
			this->cboClaseVuelo = (gcnew System::Windows::Forms::ComboBox());
			this->cboAvionReserva = (gcnew System::Windows::Forms::ComboBox());
			this->dTP = (gcnew System::Windows::Forms::DateTimePicker());
			this->TXTID = (gcnew System::Windows::Forms::TextBox());
			this->cboorigin = (gcnew System::Windows::Forms::ComboBox());
			this->cboDestiny = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LBLID
			// 
			this->LBLID->AutoSize = true;
			this->LBLID->BackColor = System::Drawing::Color::Transparent;
			this->LBLID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLID->ForeColor = System::Drawing::Color::Aqua;
			this->LBLID->Location = System::Drawing::Point(25, 72);
			this->LBLID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLID->Name = L"LBLID";
			this->LBLID->Size = System::Drawing::Size(352, 26);
			this->LBLID->TabIndex = 1;
			this->LBLID->Text = L"INGRESE  SU NUMERO DE ID ";
			// 
			// LBLFECHA
			// 
			this->LBLFECHA->AutoSize = true;
			this->LBLFECHA->BackColor = System::Drawing::Color::Transparent;
			this->LBLFECHA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLFECHA->ForeColor = System::Drawing::Color::Aqua;
			this->LBLFECHA->Location = System::Drawing::Point(25, 132);
			this->LBLFECHA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLFECHA->Name = L"LBLFECHA";
			this->LBLFECHA->Size = System::Drawing::Size(251, 26);
			this->LBLFECHA->TabIndex = 2;
			this->LBLFECHA->Text = L"INGRESE LA FECHA ";
			// 
			// LBLORIGEN
			// 
			this->LBLORIGEN->AutoSize = true;
			this->LBLORIGEN->BackColor = System::Drawing::Color::Transparent;
			this->LBLORIGEN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLORIGEN->ForeColor = System::Drawing::Color::Aqua;
			this->LBLORIGEN->Location = System::Drawing::Point(25, 189);
			this->LBLORIGEN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLORIGEN->Name = L"LBLORIGEN";
			this->LBLORIGEN->Size = System::Drawing::Size(312, 26);
			this->LBLORIGEN->TabIndex = 3;
			this->LBLORIGEN->Text = L"SELECCIONE SU ORIGEN ";
			// 
			// LBLDESTINO
			// 
			this->LBLDESTINO->AutoSize = true;
			this->LBLDESTINO->BackColor = System::Drawing::Color::Transparent;
			this->LBLDESTINO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLDESTINO->ForeColor = System::Drawing::Color::Aqua;
			this->LBLDESTINO->Location = System::Drawing::Point(25, 253);
			this->LBLDESTINO->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLDESTINO->Name = L"LBLDESTINO";
			this->LBLDESTINO->Size = System::Drawing::Size(316, 26);
			this->LBLDESTINO->TabIndex = 4;
			this->LBLDESTINO->Text = L"SELECCIONE SU DESTINO";
			// 
			// LBLAVION
			// 
			this->LBLAVION->AutoSize = true;
			this->LBLAVION->BackColor = System::Drawing::Color::Transparent;
			this->LBLAVION->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLAVION->ForeColor = System::Drawing::Color::Aqua;
			this->LBLAVION->Location = System::Drawing::Point(25, 315);
			this->LBLAVION->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLAVION->Name = L"LBLAVION";
			this->LBLAVION->Size = System::Drawing::Size(619, 26);
			this->LBLAVION->TabIndex = 5;
			this->LBLAVION->Text = L"SELECCIONE EL AVION EN EL CUAL DESEA VIAJAR ";
			// 
			// LBLVUELO
			// 
			this->LBLVUELO->AutoSize = true;
			this->LBLVUELO->BackColor = System::Drawing::Color::Transparent;
			this->LBLVUELO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLVUELO->ForeColor = System::Drawing::Color::Aqua;
			this->LBLVUELO->Location = System::Drawing::Point(25, 380);
			this->LBLVUELO->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LBLVUELO->Name = L"LBLVUELO";
			this->LBLVUELO->Size = System::Drawing::Size(427, 26);
			this->LBLVUELO->TabIndex = 6;
			this->LBLVUELO->Text = L"SELECCIONE LA CLASE DE VUELO ";
			// 
			// cboClaseVuelo
			// 
			this->cboClaseVuelo->FormattingEnabled = true;
			this->cboClaseVuelo->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"PRIMERA CLASE", L"CLASE ECONOMICA", L"CLASE TURISTA",
					L"CLASE EJECUTIVA"
			});
			this->cboClaseVuelo->Location = System::Drawing::Point(663, 380);
			this->cboClaseVuelo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboClaseVuelo->Name = L"cboClaseVuelo";
			this->cboClaseVuelo->Size = System::Drawing::Size(121, 24);
			this->cboClaseVuelo->TabIndex = 7;
			// 
			// cboAvionReserva
			// 
			this->cboAvionReserva->FormattingEnabled = true;
			this->cboAvionReserva->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Boeing 737", L"McDonell Douglas MD-80",
					L"Boeing 747", L"Airbus A340", L"Boeing 767", L"Airbus A319", L"Airbus A330", L"Boeing 757", L"Embraer 190", L"Airbus 320"
			});
			this->cboAvionReserva->Location = System::Drawing::Point(663, 315);
			this->cboAvionReserva->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboAvionReserva->Name = L"cboAvionReserva";
			this->cboAvionReserva->Size = System::Drawing::Size(121, 24);
			this->cboAvionReserva->TabIndex = 8;
			// 
			// dTP
			// 
			this->dTP->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dTP->Location = System::Drawing::Point(593, 132);
			this->dTP->Margin = System::Windows::Forms::Padding(4);
			this->dTP->Name = L"dTP";
			this->dTP->Size = System::Drawing::Size(265, 25);
			this->dTP->TabIndex = 19;
			// 
			// TXTID
			// 
			this->TXTID->Location = System::Drawing::Point(663, 76);
			this->TXTID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TXTID->Name = L"TXTID";
			this->TXTID->Size = System::Drawing::Size(165, 22);
			this->TXTID->TabIndex = 20;
			// 
			// cboorigin
			// 
			this->cboorigin->FormattingEnabled = true;
			this->cboorigin->Items->AddRange(gcnew cli::array< System::Object^  >(81) {
				L"Argentina", L"Afganistán", L"Albania", L"Alemania",
					L"Andorra", L"Brasil", L"Bangladés", L"Baréin", L"Bélgica", L"Belice", L"Cabo Verde", L"Camboya", L"Camerún", L"Canadá", L"Dinamarca",
					L"Dominica", L"Ecuador", L"Egipto", L"Estados Unidos", L"España", L"Eslovenia", L"Eslovenia", L"Estonia\t", L"Esuatini\t", L"Etiopía\t",
					L"Finlandia\t", L"Fiyi\t", L"Francia\t", L"Gabón", L"Haití\t", L"Honduras\t", L"Hungría\t", L"India", L"Indonesia\t", L"Irak\t",
					L"Irán\t", L"Irlanda", L"Jamaica\t", L"Japón\t", L"Jordania\t", L"Kazajistán", L"Laos\t", L"Lesoto\t", L"Letonia\t", L"Líbano",
					L"Luxemburgo\t", L"Macedonia del Norte\t", L"Madagascar\t", L"Malasia", L"Namibia\t", L"Nauru\t", L"Nepal\t", L"Nicaragua", L"Omán\t",
					L"Países Bajos", L"Pakistán\t", L"Palaos", L"Reino Unido\t", L"República Centroafricana\t", L"República Checa\t", L"República Democrática del Congo",
					L"Samoa\t", L"San Cristóbal y Nieves\t", L"San Marino\t", L"San Vicente y las Granadinas", L"Tailandia\t", L"Taiwán\t", L"Tanzania\t",
					L"Tayikistán", L"Ucrania\t", L"Uganda\t", L"Uruguay\t", L"Uzbekistán", L"Vanuatu\t", L"Vaticano\t", L"Venezuela", L"Vietnam",
					L"Yemen\t", L"Yibuti\t", L"Zambia\t", L"Zimbabue"
			});
			this->cboorigin->Location = System::Drawing::Point(663, 193);
			this->cboorigin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboorigin->Name = L"cboorigin";
			this->cboorigin->Size = System::Drawing::Size(121, 24);
			this->cboorigin->TabIndex = 21;
			// 
			// cboDestiny
			// 
			this->cboDestiny->FormattingEnabled = true;
			this->cboDestiny->Items->AddRange(gcnew cli::array< System::Object^  >(81) {
				L"Argentina", L"Afganistán", L"Albania", L"Alemania",
					L"Andorra", L"Brasil", L"Bangladés", L"Baréin", L"Bélgica", L"Belice", L"Cabo Verde", L"Camboya", L"Camerún", L"Canadá", L"Dinamarca",
					L"Dominica", L"Ecuador", L"Egipto", L"Estados Unidos", L"España", L"Eslovenia", L"Eslovenia", L"Estonia\t", L"Esuatini\t", L"Etiopía\t",
					L"Finlandia\t", L"Fiyi\t", L"Francia\t", L"Gabón", L"Haití\t", L"Honduras\t", L"Hungría\t", L"India", L"Indonesia\t", L"Irak\t",
					L"Irán\t", L"Irlanda", L"Jamaica\t", L"Japón\t", L"Jordania\t", L"Kazajistán", L"Laos\t", L"Lesoto\t", L"Letonia\t", L"Líbano",
					L"Luxemburgo\t", L"Macedonia del Norte\t", L"Madagascar\t", L"Malasia", L"Namibia\t", L"Nauru\t", L"Nepal\t", L"Nicaragua", L"Omán\t",
					L"Países Bajos", L"Pakistán\t", L"Palaos", L"Reino Unido\t", L"República Centroafricana\t", L"República Checa\t", L"República Democrática del Congo",
					L"Samoa\t", L"San Cristóbal y Nieves\t", L"San Marino\t", L"San Vicente y las Granadinas", L"Tailandia\t", L"Taiwán\t", L"Tanzania\t",
					L"Tayikistán", L"Ucrania\t", L"Uganda\t", L"Uruguay\t", L"Uzbekistán", L"Vanuatu\t", L"Vaticano\t", L"Venezuela", L"Vietnam",
					L"Yemen\t", L"Yibuti\t", L"Zambia\t", L"Zimbabue"
			});
			this->cboDestiny->Location = System::Drawing::Point(663, 257);
			this->cboDestiny->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboDestiny->Name = L"cboDestiny";
			this->cboDestiny->Size = System::Drawing::Size(121, 24);
			this->cboDestiny->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 468);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 23;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(447, 468);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 24;
			this->button2->Text = L"MOSTRAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmReserva::button2_Click);
			// 
			// frmReserva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(893, 592);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cboDestiny);
			this->Controls->Add(this->cboorigin);
			this->Controls->Add(this->TXTID);
			this->Controls->Add(this->dTP);
			this->Controls->Add(this->cboAvionReserva);
			this->Controls->Add(this->cboClaseVuelo);
			this->Controls->Add(this->LBLVUELO);
			this->Controls->Add(this->LBLAVION);
			this->Controls->Add(this->LBLDESTINO);
			this->Controls->Add(this->LBLORIGEN);
			this->Controls->Add(this->LBLFECHA);
			this->Controls->Add(this->LBLID);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmReserva";
			this->Text = L"Reserva";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroReserva^ formulario = gcnew frmRegistroReserva;
		formulario->Show();
	}
};
}
