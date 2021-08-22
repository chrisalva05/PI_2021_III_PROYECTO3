#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroFactura
	/// </summary>
	public ref class frmRegistroFactura : public System::Windows::Forms::Form
	{
	public:
		frmRegistroFactura(void)
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
		~frmRegistroFactura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ I;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FEC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HOR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EMPL;

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
			this->I = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FEC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EMPL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(134, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO FACTURAS";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->I, this->BO,
					this->FEC, this->HOR, this->EMPL
			});
			this->dataGridView1->Location = System::Drawing::Point(61, 135);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(645, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// I
			// 
			this->I->HeaderText = L"ID";
			this->I->Name = L"I";
			// 
			// BO
			// 
			this->BO->HeaderText = L"ID_BOLETO";
			this->BO->Name = L"BO";
			// 
			// FEC
			// 
			this->FEC->HeaderText = L"FECHA";
			this->FEC->Name = L"FEC";
			// 
			// HOR
			// 
			this->HOR->HeaderText = L"HORA";
			this->HOR->Name = L"HOR";
			// 
			// EMPL
			// 
			this->EMPL->HeaderText = L"EMPLEADO";
			this->EMPL->Name = L"EMPL";
			// 
			// frmRegistroFactura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 326);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroFactura";
			this->Text = L"RegistroFactura";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
