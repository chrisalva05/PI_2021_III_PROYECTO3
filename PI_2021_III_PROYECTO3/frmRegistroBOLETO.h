#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroBOLETO
	/// </summary>
	public ref class frmRegistroBOLETO : public System::Windows::Forms::Form
	{
	public:
		frmRegistroBOLETO(void)
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
		~frmRegistroBOLETO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ I;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ORI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AS;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AERO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ING;

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
			this->NO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->I = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ORI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AERO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ING = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(392, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO BOLETO";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->NO, this->I,
					this->FE, this->ORI, this->AS, this->AERO, this->ING
			});
			this->dataGridView1->Location = System::Drawing::Point(100, 139);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(745, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// NO
			// 
			this->NO->HeaderText = L"NOMBRE";
			this->NO->Name = L"NO";
			// 
			// I
			// 
			this->I->HeaderText = L"ID";
			this->I->Name = L"I";
			// 
			// FE
			// 
			this->FE->HeaderText = L"FECHA";
			this->FE->Name = L"FE";
			// 
			// ORI
			// 
			this->ORI->HeaderText = L"ORIGENDESTINO";
			this->ORI->Name = L"ORI";
			// 
			// AS
			// 
			this->AS->HeaderText = L"ASIENTO";
			this->AS->Name = L"AS";
			// 
			// AERO
			// 
			this->AERO->HeaderText = L"AEROLINEA";
			this->AERO->Name = L"AERO";
			// 
			// ING
			// 
			this->ING->HeaderText = L"NUMEROBOLETO";
			this->ING->Name = L"ING";
			// 
			// frmRegistroBOLETO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 501);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroBOLETO";
			this->Text = L"RegistroBOLETO";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
