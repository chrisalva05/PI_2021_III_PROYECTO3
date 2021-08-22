#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroHorario
	/// </summary>
	public ref class frmRegistroHorario : public System::Windows::Forms::Form
	{
	public:
		frmRegistroHorario(void)
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
		~frmRegistroHorario()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VUEL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FECHA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TIP;

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
			this->VUEL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FECHA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TIP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO HORARIO";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->I, this->VUEL,
					this->FECHA, this->TIP
			});
			this->dataGridView1->Location = System::Drawing::Point(125, 172);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(445, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// I
			// 
			this->I->HeaderText = L"ID";
			this->I->Name = L"I";
			// 
			// VUEL
			// 
			this->VUEL->HeaderText = L"HORA_VUELO";
			this->VUEL->Name = L"VUEL";
			// 
			// FECHA
			// 
			this->FECHA->HeaderText = L"FECHA_DE_VUELO";
			this->FECHA->Name = L"FECHA";
			// 
			// TIP
			// 
			this->TIP->HeaderText = L"TIPO_DE_VUELO";
			this->TIP->Name = L"TIP";
			// 
			// frmRegistroHorario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 459);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmRegistroHorario";
			this->Text = L"RegistroHorario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
