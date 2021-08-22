#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmDATOSEMPLEADO
	/// </summary>
	public ref class frmDATOSEMPLEADO : public System::Windows::Forms::Form
	{
	public:
		frmDATOSEMPLEADO(void)
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
		~frmDATOSEMPLEADO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EMA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PUS;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SEL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FEC;

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
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EMA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PUS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SEL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FEC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO EMPLEADO";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->EMA,
					this->PUS, this->SEL, this->FEC
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(543, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// id
			// 
			this->id->HeaderText = L"ID";
			this->id->Name = L"id";
			// 
			// EMA
			// 
			this->EMA->HeaderText = L"CORREO";
			this->EMA->Name = L"EMA";
			// 
			// PUS
			// 
			this->PUS->HeaderText = L"PUESTO";
			this->PUS->Name = L"PUS";
			// 
			// SEL
			// 
			this->SEL->HeaderText = L"SALARIO";
			this->SEL->Name = L"SEL";
			// 
			// FEC
			// 
			this->FEC->HeaderText = L"FECHA_DE_INICIO";
			this->FEC->Name = L"FEC";
			// 
			// frmDATOSEMPLEADO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 417);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmDATOSEMPLEADO";
			this->Text = L"DATOSEMPLEADO";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
