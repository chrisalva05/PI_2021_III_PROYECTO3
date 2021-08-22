#pragma once

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroaerolinea
	/// </summary>
	public ref class frmRegistroaerolinea : public System::Windows::Forms::Form
	{
	public:
		frmRegistroaerolinea(void)
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
		~frmRegistroaerolinea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::Label^ lblregistro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cls;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblregistro = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cls = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ID, this->nom,
					this->cls
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(347, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// lblregistro
			// 
			this->lblregistro->AutoSize = true;
			this->lblregistro->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblregistro->Location = System::Drawing::Point(57, 28);
			this->lblregistro->Name = L"lblregistro";
			this->lblregistro->Size = System::Drawing::Size(281, 24);
			this->lblregistro->TabIndex = 1;
			this->lblregistro->Text = L"REGISTRO DE AEROLINEA";
			// 
			// ID
			// 
			this->ID->HeaderText = L"id";
			this->ID->Name = L"ID";
			// 
			// nom
			// 
			this->nom->HeaderText = L"Nombre";
			this->nom->Name = L"nom";
			// 
			// cls
			// 
			this->cls->HeaderText = L"Clase";
			this->cls->Name = L"cls";
			// 
			// frmRegistroaerolinea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 261);
			this->Controls->Add(this->lblregistro);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmRegistroaerolinea";
			this->Text = L"Registroaerolinea";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
