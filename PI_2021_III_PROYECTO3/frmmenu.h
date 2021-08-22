#pragma once
#include "frmAvion.h"
#include "frmBoletos.h"
#include "frmDatosClientes.h"
#include "frmpersonas.h"
#include "frmLugares.h"
#include "frmHorarios.h"
#include "tipodeclientes.h"
#include "frmDatosEmpleados.h"
#include "frmAerolinea.h"
#include "frmDescuento.h"
#include "frmFactura.h"
#include "frmReserva.h"
#include "PERSONAS.h"


namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmmenu
	/// </summary>
	public ref class frmmenu : public System::Windows::Forms::Form
	{
	public:
		frmmenu(void)
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
		~frmmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnmaviones;
	private: System::Windows::Forms::Button^ btnComprar;
	private: System::Windows::Forms::Button^ btnClientes;
	private: System::Windows::Forms::Button^ btmPersonas;
	private: System::Windows::Forms::Button^ btnLugares;
	private: System::Windows::Forms::Button^ btnHorarios;
	private: System::Windows::Forms::Button^ bntTipo;
	private: System::Windows::Forms::Button^ btnempleados;
	private: System::Windows::Forms::Button^ btnreserva;
	private: System::Windows::Forms::Button^ btndescuento;
	private: System::Windows::Forms::Button^ btnfactura;
	private: System::Windows::Forms::Button^ btnaerolinea;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmmenu::typeid));
			this->btnmaviones = (gcnew System::Windows::Forms::Button());
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			this->btnClientes = (gcnew System::Windows::Forms::Button());
			this->btmPersonas = (gcnew System::Windows::Forms::Button());
			this->btnLugares = (gcnew System::Windows::Forms::Button());
			this->btnHorarios = (gcnew System::Windows::Forms::Button());
			this->bntTipo = (gcnew System::Windows::Forms::Button());
			this->btnempleados = (gcnew System::Windows::Forms::Button());
			this->btnreserva = (gcnew System::Windows::Forms::Button());
			this->btndescuento = (gcnew System::Windows::Forms::Button());
			this->btnfactura = (gcnew System::Windows::Forms::Button());
			this->btnaerolinea = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnmaviones
			// 
			this->btnmaviones->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmaviones->Location = System::Drawing::Point(15, 267);
			this->btnmaviones->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnmaviones->Name = L"btnmaviones";
			this->btnmaviones->Size = System::Drawing::Size(181, 86);
			this->btnmaviones->TabIndex = 0;
			this->btnmaviones->Text = L"Mostrar Aviones";
			this->btnmaviones->UseVisualStyleBackColor = true;
			this->btnmaviones->Click += gcnew System::EventHandler(this, &frmmenu::btnmaviones_Click);
			// 
			// btnComprar
			// 
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprar->Location = System::Drawing::Point(15, 137);
			this->btnComprar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(181, 94);
			this->btnComprar->TabIndex = 1;
			this->btnComprar->Text = L"Comprar Boleto";
			this->btnComprar->UseVisualStyleBackColor = true;
			this->btnComprar->Click += gcnew System::EventHandler(this, &frmmenu::btnComprar_Click);
			// 
			// btnClientes
			// 
			this->btnClientes->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClientes->Location = System::Drawing::Point(15, 14);
			this->btnClientes->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnClientes->Name = L"btnClientes";
			this->btnClientes->Size = System::Drawing::Size(181, 89);
			this->btnClientes->TabIndex = 2;
			this->btnClientes->Text = L"Clientes";
			this->btnClientes->UseVisualStyleBackColor = true;
			this->btnClientes->Click += gcnew System::EventHandler(this, &frmmenu::btnClientes_Click);
			// 
			// btmPersonas
			// 
			this->btmPersonas->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btmPersonas->Location = System::Drawing::Point(251, 16);
			this->btmPersonas->Margin = System::Windows::Forms::Padding(4);
			this->btmPersonas->Name = L"btmPersonas";
			this->btmPersonas->Size = System::Drawing::Size(171, 86);
			this->btmPersonas->TabIndex = 3;
			this->btmPersonas->Text = L"Personas";
			this->btmPersonas->UseVisualStyleBackColor = true;
			this->btmPersonas->Click += gcnew System::EventHandler(this, &frmmenu::btnPersonas_Click);
			// 
			// btnLugares
			// 
			this->btnLugares->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLugares->Location = System::Drawing::Point(251, 137);
			this->btnLugares->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLugares->Name = L"btnLugares";
			this->btnLugares->Size = System::Drawing::Size(163, 94);
			this->btnLugares->TabIndex = 4;
			this->btnLugares->Text = L"Lugares";
			this->btnLugares->UseVisualStyleBackColor = true;
			this->btnLugares->Click += gcnew System::EventHandler(this, &frmmenu::btnLugares_Click);
			// 
			// btnHorarios
			// 
			this->btnHorarios->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHorarios->Location = System::Drawing::Point(467, 15);
			this->btnHorarios->Margin = System::Windows::Forms::Padding(4);
			this->btnHorarios->Name = L"btnHorarios";
			this->btnHorarios->Size = System::Drawing::Size(163, 86);
			this->btnHorarios->TabIndex = 5;
			this->btnHorarios->Text = L"Horarios";
			this->btnHorarios->UseVisualStyleBackColor = true;
			this->btnHorarios->Click += gcnew System::EventHandler(this, &frmmenu::btnHorarios_Click);
			// 
			// bntTipo
			// 
			this->bntTipo->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntTipo->Location = System::Drawing::Point(251, 267);
			this->bntTipo->Margin = System::Windows::Forms::Padding(4);
			this->bntTipo->Name = L"bntTipo";
			this->bntTipo->Size = System::Drawing::Size(163, 86);
			this->bntTipo->TabIndex = 6;
			this->bntTipo->Text = L"Tipo Cliente";
			this->bntTipo->UseVisualStyleBackColor = true;
			this->bntTipo->Click += gcnew System::EventHandler(this, &frmmenu::bntTipo_Click);
			// 
			// btnempleados
			// 
			this->btnempleados->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnempleados->Location = System::Drawing::Point(467, 144);
			this->btnempleados->Margin = System::Windows::Forms::Padding(4);
			this->btnempleados->Name = L"btnempleados";
			this->btnempleados->Size = System::Drawing::Size(163, 86);
			this->btnempleados->TabIndex = 7;
			this->btnempleados->Text = L"Empleados";
			this->btnempleados->UseVisualStyleBackColor = true;
			this->btnempleados->Click += gcnew System::EventHandler(this, &frmmenu::btnempleados_Click);
			// 
			// btnreserva
			// 
			this->btnreserva->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnreserva->Location = System::Drawing::Point(467, 267);
			this->btnreserva->Margin = System::Windows::Forms::Padding(4);
			this->btnreserva->Name = L"btnreserva";
			this->btnreserva->Size = System::Drawing::Size(163, 86);
			this->btnreserva->TabIndex = 8;
			this->btnreserva->Text = L"Reservas";
			this->btnreserva->UseVisualStyleBackColor = true;
			this->btnreserva->Click += gcnew System::EventHandler(this, &frmmenu::btnreserva_Click);
			// 
			// btndescuento
			// 
			this->btndescuento->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndescuento->Location = System::Drawing::Point(16, 385);
			this->btndescuento->Margin = System::Windows::Forms::Padding(4);
			this->btndescuento->Name = L"btndescuento";
			this->btndescuento->Size = System::Drawing::Size(163, 86);
			this->btndescuento->TabIndex = 9;
			this->btndescuento->Text = L"Descuento";
			this->btndescuento->UseVisualStyleBackColor = true;
			this->btndescuento->Click += gcnew System::EventHandler(this, &frmmenu::btndescuento_Click);
			// 
			// btnfactura
			// 
			this->btnfactura->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnfactura->Location = System::Drawing::Point(467, 385);
			this->btnfactura->Margin = System::Windows::Forms::Padding(4);
			this->btnfactura->Name = L"btnfactura";
			this->btnfactura->Size = System::Drawing::Size(163, 86);
			this->btnfactura->TabIndex = 10;
			this->btnfactura->Text = L"Facturas";
			this->btnfactura->UseVisualStyleBackColor = true;
			this->btnfactura->Click += gcnew System::EventHandler(this, &frmmenu::btnfactura_Click);
			// 
			// btnaerolinea
			// 
			this->btnaerolinea->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnaerolinea->Location = System::Drawing::Point(251, 385);
			this->btnaerolinea->Margin = System::Windows::Forms::Padding(4);
			this->btnaerolinea->Name = L"btnaerolinea";
			this->btnaerolinea->Size = System::Drawing::Size(163, 86);
			this->btnaerolinea->TabIndex = 11;
			this->btnaerolinea->Text = L"Aerolineas";
			this->btnaerolinea->UseVisualStyleBackColor = true;
			this->btnaerolinea->Click += gcnew System::EventHandler(this, &frmmenu::btnaerolinea_Click);
			// 
			// frmmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(672, 518);
			this->Controls->Add(this->btnaerolinea);
			this->Controls->Add(this->btnfactura);
			this->Controls->Add(this->btndescuento);
			this->Controls->Add(this->btnreserva);
			this->Controls->Add(this->btnempleados);
			this->Controls->Add(this->bntTipo);
			this->Controls->Add(this->btnHorarios);
			this->Controls->Add(this->btnLugares);
			this->Controls->Add(this->btmPersonas);
			this->Controls->Add(this->btnClientes);
			this->Controls->Add(this->btnComprar);
			this->Controls->Add(this->btnmaviones);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmmenu";
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnmaviones_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAvion^ formulario = gcnew frmAvion;
		formulario->Show();
	}
	private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBoletos^ formulario = gcnew frmBoletos;
		formulario->Show();
	}
	private: System::Void btnClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		frmDatosClientes^ formulario = gcnew frmDatosClientes;
		formulario->Show();
	}
	private: System::Void btnPersonas_Click(System::Object ^ sender, System::EventArgs ^ e) {
		frmpersonas^ formulario = gcnew frmpersonas;
		formulario->Show();
	}
	

private: System::Void btnLugares_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLugares^ formulario = gcnew frmLugares;
	formulario->Show();
}

private: System::Void btnHorarios_Click(System::Object^ sender, System::EventArgs^ e) {
	frmHorarios^ formulario = gcnew frmHorarios;
	formulario->Show();
}


private: System::Void bntTipo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDatosClientes^ formulario = gcnew frmDatosClientes;
	formulario->Show();
}
private: System::Void btndescuento_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDescuento^ formulario = gcnew frmDescuento;
	formulario->Show();

	
}
private: System::Void btnaerolinea_Click(System::Object^ sender, System::EventArgs^ e) {
	frmAerolinea^ formulario = gcnew frmAerolinea;
	formulario->Show();
}
private: System::Void btnempleados_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDatosEmpleados^ formulario = gcnew frmDatosEmpleados;
	formulario->Show();



}
private: System::Void btnfactura_Click(System::Object^ sender, System::EventArgs^ e) {
	frmFactura^ formulario = gcnew frmFactura;
	formulario->Show();
}
private: System::Void btnreserva_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReserva^ formulario = gcnew frmReserva;
	formulario->Show();
}
};
}
