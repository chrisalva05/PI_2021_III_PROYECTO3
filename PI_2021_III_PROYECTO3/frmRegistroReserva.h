#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroReserva
	/// </summary>
	public ref class frmRegistroReserva : public System::Windows::Forms::Form
	{
	public:
		frmRegistroReserva(void)
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
		~frmRegistroReserva()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DES;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VIA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VUEL;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DES = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VIA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VUEL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE RESERVA";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->i, this->FE,
					this->OR, this->DES, this->VIA, this->VUEL
			});
			this->dataGridView1->Location = System::Drawing::Point(52, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// i
			// 
			this->i->HeaderText = L"ID";
			this->i->Name = L"i";
			// 
			// FE
			// 
			this->FE->HeaderText = L"FECHA";
			this->FE->Name = L"FE";
			// 
			// OR
			// 
			this->OR->HeaderText = L"ORIGEN";
			this->OR->Name = L"OR";
			// 
			// DES
			// 
			this->DES->HeaderText = L"DESTINO";
			this->DES->Name = L"DES";
			// 
			// VIA
			// 
			this->VIA->HeaderText = L"AVION_DE_VIAJE";
			this->VIA->Name = L"VIA";
			// 
			// VUEL
			// 
			this->VUEL->HeaderText = L"VUELO";
			this->VUEL->Name = L"VUEL";
			// 
			// frmRegistroReserva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 415);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroReserva";
			this->Text = L"RegistroReserva";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
