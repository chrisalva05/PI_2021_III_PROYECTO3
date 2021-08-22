#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroPersonas
	/// </summary>
	public ref class frmRegistroPersonas : public System::Windows::Forms::Form
	{
	public:
		frmRegistroPersonas(void)
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
		~frmRegistroPersonas()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CORR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ED;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ D;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ APE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GEN;

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
			this->CORR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ED = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->D = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->APE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE PERSONAS";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->I, this->CORR,
					this->ED, this->D, this->APE, this->SE, this->GEN
			});
			this->dataGridView1->Location = System::Drawing::Point(137, 191);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(744, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// I
			// 
			this->I->HeaderText = L"ID";
			this->I->Name = L"I";
			// 
			// CORR
			// 
			this->CORR->HeaderText = L"CORREO";
			this->CORR->Name = L"CORR";
			// 
			// ED
			// 
			this->ED->HeaderText = L"EDAD";
			this->ED->Name = L"ED";
			// 
			// D
			// 
			this->D->HeaderText = L"NOMBRE";
			this->D->Name = L"D";
			// 
			// APE
			// 
			this->APE->HeaderText = L"APELLIDO";
			this->APE->Name = L"APE";
			// 
			// SE
			// 
			this->SE->HeaderText = L"SEGURO_SOCIAL";
			this->SE->Name = L"SE";
			// 
			// GEN
			// 
			this->GEN->HeaderText = L"GENERO";
			this->GEN->Name = L"GEN";
			// 
			// frmRegistroPersonas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(990, 601);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroPersonas";
			this->Text = L"RegistroPersonas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
