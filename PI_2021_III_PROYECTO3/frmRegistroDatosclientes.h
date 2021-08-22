#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroDatosclientes
	/// </summary>
	public ref class frmRegistroDatosclientes : public System::Windows::Forms::Form
	{
	public:
		frmRegistroDatosclientes(void)
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
		~frmRegistroDatosclientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ APE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FEC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GEN;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NOM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->APE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FEC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO CLIENTES";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->NOM, this->APE,
					this->Id, this->FEC, this->TO, this->GEN
			});
			this->dataGridView1->Location = System::Drawing::Point(36, 77);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(644, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// NOM
			// 
			this->NOM->HeaderText = L"NOMBRE";
			this->NOM->Name = L"NOM";
			// 
			// APE
			// 
			this->APE->HeaderText = L"APELLIDO";
			this->APE->Name = L"APE";
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->Name = L"Id";
			// 
			// FEC
			// 
			this->FEC->HeaderText = L"FECHA";
			this->FEC->Name = L"FEC";
			// 
			// TO
			// 
			this->TO->HeaderText = L"TOTAL";
			this->TO->Name = L"TO";
			// 
			// GEN
			// 
			this->GEN->HeaderText = L"GENERO";
			this->GEN->Name = L"GEN";
			// 
			// frmRegistroDatosclientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 298);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroDatosclientes";
			this->Text = L"RegistroDatosclientes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
