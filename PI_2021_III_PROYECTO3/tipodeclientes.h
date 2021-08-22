#pragma once
#include "frmRegistroTIPOCLIENTE.h"
namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de tipodeclientes
	/// </summary>
	public ref class tipodeclientes : public System::Windows::Forms::Form
	{
	public:
		tipodeclientes(void)
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
		~tipodeclientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LBLID;
	private: System::Windows::Forms::Label^ LBLDESCRIPCION;
	private: System::Windows::Forms::TextBox^ TXTID;
	private: System::Windows::Forms::TextBox^ TXTDESCRIPCION;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ bntmostrar;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tipodeclientes::typeid));
			this->LBLID = (gcnew System::Windows::Forms::Label());
			this->LBLDESCRIPCION = (gcnew System::Windows::Forms::Label());
			this->TXTID = (gcnew System::Windows::Forms::TextBox());
			this->TXTDESCRIPCION = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bntmostrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LBLID
			// 
			this->LBLID->AutoSize = true;
			this->LBLID->BackColor = System::Drawing::Color::Transparent;
			this->LBLID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLID->ForeColor = System::Drawing::Color::Aqua;
			this->LBLID->Location = System::Drawing::Point(23, 54);
			this->LBLID->Name = L"LBLID";
			this->LBLID->Size = System::Drawing::Size(172, 24);
			this->LBLID->TabIndex = 0;
			this->LBLID->Text = L"INGRESE  SU ID ";
			// 
			// LBLDESCRIPCION
			// 
			this->LBLDESCRIPCION->AutoSize = true;
			this->LBLDESCRIPCION->BackColor = System::Drawing::Color::Transparent;
			this->LBLDESCRIPCION->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLDESCRIPCION->ForeColor = System::Drawing::Color::Aqua;
			this->LBLDESCRIPCION->Location = System::Drawing::Point(-1, 208);
			this->LBLDESCRIPCION->Name = L"LBLDESCRIPCION";
			this->LBLDESCRIPCION->Size = System::Drawing::Size(299, 24);
			this->LBLDESCRIPCION->TabIndex = 1;
			this->LBLDESCRIPCION->Text = L"COLOQUE LA DESCRIPCION";
			// 
			// TXTID
			// 
			this->TXTID->Location = System::Drawing::Point(297, 38);
			this->TXTID->Name = L"TXTID";
			this->TXTID->Size = System::Drawing::Size(100, 20);
			this->TXTID->TabIndex = 2;
			// 
			// TXTDESCRIPCION
			// 
			this->TXTDESCRIPCION->Location = System::Drawing::Point(374, 208);
			this->TXTDESCRIPCION->Name = L"TXTDESCRIPCION";
			this->TXTDESCRIPCION->Size = System::Drawing::Size(100, 20);
			this->TXTDESCRIPCION->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(54, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// bntmostrar
			// 
			this->bntmostrar->BackColor = System::Drawing::Color::Transparent;
			this->bntmostrar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntmostrar->ForeColor = System::Drawing::Color::Black;
			this->bntmostrar->Location = System::Drawing::Point(409, 280);
			this->bntmostrar->Name = L"bntmostrar";
			this->bntmostrar->Size = System::Drawing::Size(120, 36);
			this->bntmostrar->TabIndex = 5;
			this->bntmostrar->Text = L"MOSTRAR";
			this->bntmostrar->UseVisualStyleBackColor = false;
			this->bntmostrar->Click += gcnew System::EventHandler(this, &tipodeclientes::bntmostrar_Click);
			// 
			// tipodeclientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(625, 365);
			this->Controls->Add(this->bntmostrar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TXTDESCRIPCION);
			this->Controls->Add(this->TXTID);
			this->Controls->Add(this->LBLDESCRIPCION);
			this->Controls->Add(this->LBLID);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"tipodeclientes";
			this->Text = L"tipodeclientes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bntmostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroTIPOCLIENTE^ formulario = gcnew frmRegistroTIPOCLIENTE;
		formulario->Show();
	}
};
}
