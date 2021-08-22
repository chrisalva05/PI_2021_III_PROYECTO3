#pragma once
#include "frmAvion.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmAvion
	/// </summary>
	public ref class frmAvion : public System::Windows::Forms::Form
	{
	public:
		frmAvion(void)
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
		~frmAvion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvAviones;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMarca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMatricula;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAsientos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAerolínea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPaíscreo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colfechadecreacion;

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAvion::typeid));
			this->dgvAviones = (gcnew System::Windows::Forms::DataGridView());
			this->colMarca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMatricula = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAsientos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAerolínea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPaíscreo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colfechadecreacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAviones))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvAviones
			// 
			this->dgvAviones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAviones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->colMarca,
					this->colModelo, this->colMatricula, this->colTipo, this->colAsientos, this->colAerolínea, this->colPaíscreo, this->colfechadecreacion
			});
			this->dgvAviones->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvAviones->Location = System::Drawing::Point(0, 0);
			this->dgvAviones->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvAviones->Name = L"dgvAviones";
			this->dgvAviones->RowHeadersWidth = 51;
			this->dgvAviones->RowTemplate->Height = 24;
			this->dgvAviones->Size = System::Drawing::Size(834, 364);
			this->dgvAviones->TabIndex = 0;
			this->dgvAviones->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAvion::dataGridView1_CellContentClick);
			// 
			// colMarca
			// 
			this->colMarca->HeaderText = L"Marca";
			this->colMarca->MinimumWidth = 6;
			this->colMarca->Name = L"colMarca";
			this->colMarca->Width = 125;
			// 
			// colModelo
			// 
			this->colModelo->HeaderText = L"Modelo";
			this->colModelo->MinimumWidth = 6;
			this->colModelo->Name = L"colModelo";
			this->colModelo->Width = 125;
			// 
			// colMatricula
			// 
			this->colMatricula->HeaderText = L"Matrícula";
			this->colMatricula->MinimumWidth = 6;
			this->colMatricula->Name = L"colMatricula";
			this->colMatricula->Width = 125;
			// 
			// colTipo
			// 
			this->colTipo->HeaderText = L"Tipo";
			this->colTipo->MinimumWidth = 6;
			this->colTipo->Name = L"colTipo";
			this->colTipo->Width = 125;
			// 
			// colAsientos
			// 
			this->colAsientos->HeaderText = L"Asientos";
			this->colAsientos->MinimumWidth = 6;
			this->colAsientos->Name = L"colAsientos";
			this->colAsientos->Width = 125;
			// 
			// colAerolínea
			// 
			this->colAerolínea->HeaderText = L"Aerolínea";
			this->colAerolínea->MinimumWidth = 6;
			this->colAerolínea->Name = L"colAerolínea";
			this->colAerolínea->Width = 125;
			// 
			// colPaíscreo
			// 
			this->colPaíscreo->HeaderText = L"País donde fue creado";
			this->colPaíscreo->MinimumWidth = 6;
			this->colPaíscreo->Name = L"colPaíscreo";
			this->colPaíscreo->Width = 125;
			// 
			// colfechadecreacion
			// 
			this->colfechadecreacion->HeaderText = L"Fecha que se creo";
			this->colfechadecreacion->MinimumWidth = 6;
			this->colfechadecreacion->Name = L"colfechadecreacion";
			this->colfechadecreacion->Width = 125;
			// 
			// frmAvion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(855, 570);
			this->Controls->Add(this->dgvAviones);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmAvion";
			this->Text = L"Aviones";
			this->Load += gcnew System::EventHandler(this, &frmAvion::frmAvion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAviones))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void frmAvion_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
		dgvAviones->Rows->Add(10);
		dgvAviones->Rows[1]->Cells[0]->Value = "Boeing";
		dgvAviones->Rows[1]->Cells[1]->Value = "737";
		dgvAviones->Rows[1]->Cells[2]->Value = "EI-FRP";
		dgvAviones->Rows[1]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[1]->Cells[4]->Value = "149";
		dgvAviones->Rows[1]->Cells[5]->Value = "Copa Airlines";
		dgvAviones->Rows[1]->Cells[6]->Value = "Estados Unidos";
		dgvAviones->Rows[1]->Cells[7]->Value = "09/04/1967";

		dgvAviones->Rows[2]->Cells[0]->Value = "McDonell Douglas";
		dgvAviones->Rows[2]->Cells[1]->Value = "MD-80";
		dgvAviones->Rows[2]->Cells[2]->Value = "N455AA";
		dgvAviones->Rows[2]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[2]->Cells[4]->Value = "135";
		dgvAviones->Rows[2]->Cells[5]->Value = "Caspian Airlines";
		dgvAviones->Rows[2]->Cells[6]->Value = "Estados Unidos";
		dgvAviones->Rows[2]->Cells[7]->Value = "25/10/1979";

		dgvAviones->Rows[3]->Cells[0]->Value = "Boeing";
		dgvAviones->Rows[3]->Cells[1]->Value = "747";
		dgvAviones->Rows[3]->Cells[2]->Value = "N718BA";
		dgvAviones->Rows[3]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[3]->Cells[4]->Value = "416";
		dgvAviones->Rows[3]->Cells[5]->Value = "Air Atlanta Icelandic";
		dgvAviones->Rows[3]->Cells[6]->Value = "Estados Unidos";
		dgvAviones->Rows[3]->Cells[7]->Value = "02/09/1969";

		dgvAviones->Rows[4]->Cells[0]->Value = "Airbus";
		dgvAviones->Rows[4]->Cells[1]->Value = "A340";
		dgvAviones->Rows[4]->Cells[2]->Value = "F-GLZQ";
		dgvAviones->Rows[4]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[4]->Cells[4]->Value = "375";
		dgvAviones->Rows[4]->Cells[5]->Value = "Avianca Airlines";
		dgvAviones->Rows[4]->Cells[6]->Value = "Francia";
		dgvAviones->Rows[4]->Cells[7]->Value = "25/03/1993";

		dgvAviones->Rows[5]->Cells[0]->Value = "Boeing";
		dgvAviones->Rows[5]->Cells[1]->Value = "767";
		dgvAviones->Rows[5]->Cells[2]->Value = "N767BA";
		dgvAviones->Rows[5]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[5]->Cells[4]->Value = "250";
		dgvAviones->Rows[5]->Cells[5]->Value = "LATAM Airlines";
		dgvAviones->Rows[5]->Cells[6]->Value = "Estados Unidos";
		dgvAviones->Rows[5]->Cells[7]->Value = "08/09/1982";

		dgvAviones->Rows[6]->Cells[0]->Value = "Airbus";
		dgvAviones->Rows[6]->Cells[1]->Value = "A319";
		dgvAviones->Rows[6]->Cells[2]->Value = "VP-BHJ";
		dgvAviones->Rows[6]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[6]->Cells[4]->Value = "156";
		dgvAviones->Rows[6]->Cells[5]->Value = "United Airlines";
		dgvAviones->Rows[6]->Cells[6]->Value = "Alemania y China";
		dgvAviones->Rows[6]->Cells[7]->Value = "08/08/1996";

		dgvAviones->Rows[7]->Cells[0]->Value = "Airbus";
		dgvAviones->Rows[7]->Cells[1]->Value = "A330";
		dgvAviones->Rows[7]->Cells[2]->Value = "EC-NGS";
		dgvAviones->Rows[7]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[7]->Cells[4]->Value = "335";
		dgvAviones->Rows[7]->Cells[5]->Value = "Aerolíneas Argentinas";
		dgvAviones->Rows[7]->Cells[6]->Value = "Francia";
		dgvAviones->Rows[7]->Cells[7]->Value = "14/10/1992";

		dgvAviones->Rows[8]->Cells[0]->Value = "Boeing";
		dgvAviones->Rows[8]->Cells[1]->Value = "757";
		dgvAviones->Rows[8]->Cells[2]->Value = "N624AG";
		dgvAviones->Rows[8]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[8]->Cells[4]->Value = "200";
		dgvAviones->Rows[8]->Cells[5]->Value = "Delta Airlines";
		dgvAviones->Rows[8]->Cells[6]->Value = "Estados Unidos";
		dgvAviones->Rows[8]->Cells[7]->Value = "01/01/1983";

		dgvAviones->Rows[9]->Cells[0]->Value = "Embraer";
		dgvAviones->Rows[9]->Cells[1]->Value = "190";
		dgvAviones->Rows[9]->Cells[2]->Value = "HK-4455-X";
		dgvAviones->Rows[9]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[9]->Cells[4]->Value = "100";
		dgvAviones->Rows[9]->Cells[5]->Value = "Aerolíneas Argentinas";
		dgvAviones->Rows[9]->Cells[6]->Value = "Brasil";
		dgvAviones->Rows[9]->Cells[7]->Value = "08/11/2005";

		dgvAviones->Rows[10]->Cells[0]->Value = "Airbus";
		dgvAviones->Rows[10]->Cells[1]->Value = "320";
		dgvAviones->Rows[10]->Cells[2]->Value = "EC-MXP";
		dgvAviones->Rows[10]->Cells[3]->Value = "Comercial";
		dgvAviones->Rows[10]->Cells[4]->Value = "220";
		dgvAviones->Rows[10]->Cells[5]->Value = "Avianca Airlines";
		dgvAviones->Rows[10]->Cells[6]->Value = "Estados unidos";
		dgvAviones->Rows[10]->Cells[7]->Value = "18/04/1988";












	}
};
}
