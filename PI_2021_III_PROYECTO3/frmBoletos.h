#pragma once
#include "frmRegistroBOLETO.h"

namespace PI2021IIIPROYECTO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBoletos
	/// </summary>
	public ref class frmBoletos : public System::Windows::Forms::Form
	{
	public:
		frmBoletos(void)
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
		~frmBoletos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblnombre;
	protected:
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblFecha;

	private: System::Windows::Forms::Label^ lblorigen;
	private: System::Windows::Forms::Label^ lblnasiento;
	private: System::Windows::Forms::Label^ lblAerolinea;
	private: System::Windows::Forms::Label^ lblnboleto;



	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtFecha;
	private: System::Windows::Forms::ComboBox^ cboDestino;
	private: System::Windows::Forms::ComboBox^ cboOrigen;
	private: System::Windows::Forms::ComboBox^ cbonasiento;
	private: System::Windows::Forms::ComboBox^ cboAerolinea;
	private: System::Windows::Forms::TextBox^ TXTBOLETOS;
	private: System::Windows::Forms::GroupBox^ grbDestino;
	private: System::Windows::Forms::RadioButton^ rdtBelice;
	private: System::Windows::Forms::RadioButton^ rdtBélgica;




	private: System::Windows::Forms::RadioButton^ rdtBaréin;

	private: System::Windows::Forms::RadioButton^ rdtBangladés;
	private: System::Windows::Forms::RadioButton^ rdtBrasil;
	private: System::Windows::Forms::RadioButton^ rdtAndorra;
	private: System::Windows::Forms::RadioButton^ rdtAlemania;
	private: System::Windows::Forms::RadioButton^ rdtAlbania;
	private: System::Windows::Forms::RadioButton^ rdtAfganistán;
	private: System::Windows::Forms::RadioButton^ rdtArgentina;
	private: System::Windows::Forms::RadioButton^ rdtGeorgia;

	private: System::Windows::Forms::RadioButton^ rdtGambia;

	private: System::Windows::Forms::RadioButton^ rdtGabón;

	private: System::Windows::Forms::RadioButton^ rdtFrancia;

	private: System::Windows::Forms::RadioButton^ rdtFinlandia;

	private: System::Windows::Forms::RadioButton^ rdtFilipinas;

	private: System::Windows::Forms::RadioButton^ rdtEtiopía;

	private: System::Windows::Forms::RadioButton^ rdtEstonia;

	private: System::Windows::Forms::RadioButton^ rdtEstadosUnidos;



	private: System::Windows::Forms::RadioButton^ rdtEspaña;




	private: System::Windows::Forms::RadioButton^ rdtEslovenia;

	private: System::Windows::Forms::RadioButton^ rdtEslovaquia;




	private: System::Windows::Forms::RadioButton^ rdtEmirattosÁrabesUnidos;

	private: System::Windows::Forms::RadioButton^ rdtElSalvador;

	private: System::Windows::Forms::RadioButton^ rdtEgipto;

	private: System::Windows::Forms::RadioButton^ rdtEcuador;

	private: System::Windows::Forms::RadioButton^ rdtDinamarca;

	private: System::Windows::Forms::RadioButton^ rdtCuba;

	private: System::Windows::Forms::RadioButton^ rdtCroacia;

	private: System::Windows::Forms::RadioButton^ rdtCostaRica;





	private: System::Windows::Forms::RadioButton^ rdtCostadeMarfil;

	private: System::Windows::Forms::RadioButton^ rdtCoreaSur;


	private: System::Windows::Forms::RadioButton^ rdtCoreadelNorte;

	private: System::Windows::Forms::RadioButton^ rdtCongo;

	private: System::Windows::Forms::RadioButton^ rdtColombia;

	private: System::Windows::Forms::RadioButton^ rdtChina;

	private: System::Windows::Forms::RadioButton^ rdtChile;

	private: System::Windows::Forms::RadioButton^ rdtCatar;

	private: System::Windows::Forms::RadioButton^ rdtCanadá;

	private: System::Windows::Forms::RadioButton^ rbtCamerún;
private: System::Windows::Forms::RadioButton^ rdtKenia;


private: System::Windows::Forms::RadioButton^ rdtJordania;

private: System::Windows::Forms::RadioButton^ rdtJapón;

private: System::Windows::Forms::RadioButton^ rdtJamaica;

private: System::Windows::Forms::RadioButton^ rdtItalia;

private: System::Windows::Forms::RadioButton^ rdtIsrael;

private: System::Windows::Forms::RadioButton^ rdtIslandia;

private: System::Windows::Forms::RadioButton^ rdtIrlanda;

private: System::Windows::Forms::RadioButton^ rdtIrán;
private: System::Windows::Forms::RadioButton^ rdtIrak;



private: System::Windows::Forms::RadioButton^ rdtIndonesia;


private: System::Windows::Forms::RadioButton^ rdtIndia;

private: System::Windows::Forms::RadioButton^ rdtHungría;

private: System::Windows::Forms::RadioButton^ rdtHonduras;

private: System::Windows::Forms::RadioButton^ rdtHaití;

private: System::Windows::Forms::RadioButton^ rdtGuyana;

private: System::Windows::Forms::RadioButton^ rdtGuinea;

private: System::Windows::Forms::RadioButton^ rdtGuatemala;

private: System::Windows::Forms::RadioButton^ rdtGrecia;
private: System::Windows::Forms::RadioButton^ rdtGranada;



private: System::Windows::Forms::RadioButton^ rdtGhana;
private: System::Windows::Forms::RadioButton^ rdtTrinidadyTobago;


private: System::Windows::Forms::RadioButton^ rdtTaiwán;

private: System::Windows::Forms::RadioButton^ rdtNepal;

private: System::Windows::Forms::RadioButton^ rdtMozambique;




private: System::Windows::Forms::RadioButton^ rdtMontenegro;
private: System::Windows::Forms::RadioButton^ rdtMongolia;


private: System::Windows::Forms::RadioButton^ rdtMónaco;



private: System::Windows::Forms::RadioButton^ rdtMicronesia;

private: System::Windows::Forms::RadioButton^ rdtMexico;


private: System::Windows::Forms::RadioButton^ rdtMauricio;
private: System::Windows::Forms::RadioButton^ rdtMarruecos;



private: System::Windows::Forms::RadioButton^ rdtMalta;

private: System::Windows::Forms::RadioButton^ rdtMaldivas;

private: System::Windows::Forms::RadioButton^ rdtMalasia;

private: System::Windows::Forms::RadioButton^ rdtMadagascar;

private: System::Windows::Forms::RadioButton^ rdtMacednoiadelNorte;

private: System::Windows::Forms::RadioButton^ rdtLuxemburgo;

private: System::Windows::Forms::RadioButton^ rdtLiechtenstein;

private: System::Windows::Forms::RadioButton^ rdtLibia;

private: System::Windows::Forms::RadioButton^ rdtLíbano;

private: System::Windows::Forms::RadioButton^ rdtLetonia;

private: System::Windows::Forms::RadioButton^ rdtLaos;

private: System::Windows::Forms::RadioButton^ rdtKuwait;

private: System::Windows::Forms::RadioButton^ rdtKosovo;

private: System::Windows::Forms::RadioButton^ rdtKiribati;
private: System::Windows::Forms::RadioButton^ rdtNigeria;

private: System::Windows::Forms::RadioButton^ rdtNicaragua;
private: System::Windows::Forms::RadioButton^ rdtUcrania;




private: System::Windows::Forms::RadioButton^ rdtTurquía;

private: System::Windows::Forms::RadioButton^ rdtRepúblicaCheca;

private: System::Windows::Forms::RadioButton^ rdtReinoUnido;


private: System::Windows::Forms::RadioButton^ rdtPortugal;



private: System::Windows::Forms::RadioButton^ rdtPolonia;

private: System::Windows::Forms::RadioButton^ rdtPerú;

private: System::Windows::Forms::RadioButton^ rdtParaguay;

private: System::Windows::Forms::RadioButton^ rdtPanamá;

private: System::Windows::Forms::RadioButton^ rdtPaísesBajos;

private: System::Windows::Forms::RadioButton^ rdtNuevaZelanda;

private: System::Windows::Forms::RadioButton^ rdtNoruega;
private: System::Windows::Forms::RadioButton^ rdtVietnam;


private: System::Windows::Forms::RadioButton^ rdtVenezuela;

private: System::Windows::Forms::RadioButton^ rdtUruguay;

private: System::Windows::Forms::RadioButton^ rdtTailandia;

private: System::Windows::Forms::RadioButton^ rdtSurinam;

private: System::Windows::Forms::RadioButton^ rdtSuiza;

private: System::Windows::Forms::RadioButton^ rdtSuecia;

private: System::Windows::Forms::RadioButton^ rdtSudáfrica;
private: System::Windows::Forms::RadioButton^ rdtSomalia;
private: System::Windows::Forms::RadioButton^ rdtSingapur;
private: System::Windows::Forms::RadioButton^ rdtSerbia;
private: System::Windows::Forms::RadioButton^ rdtSenegal;








private: System::Windows::Forms::RadioButton^ rdtSamoa;


private: System::Windows::Forms::RadioButton^ rdtRusia;


private: System::Windows::Forms::RadioButton^ rdtRumania;


private: System::Windows::Forms::RadioButton^ rdtRepublicaDominicana;
private: System::Windows::Forms::RadioButton^ rdtZimbabue;
private: System::Windows::Forms::Label^ LBLLEMPIRA;

private: System::Windows::Forms::TextBox^ txtp;




private: System::Windows::Forms::Button^ btnPrecio;
private: System::Windows::Forms::TextBox^ txtArg;
private: System::Windows::Forms::Button^ bntAgr;
private: System::Windows::Forms::Button^ bntMostr;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBoletos::typeid));
			this->lblnombre = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblorigen = (gcnew System::Windows::Forms::Label());
			this->lblnasiento = (gcnew System::Windows::Forms::Label());
			this->lblAerolinea = (gcnew System::Windows::Forms::Label());
			this->lblnboleto = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->cboDestino = (gcnew System::Windows::Forms::ComboBox());
			this->cboOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->cbonasiento = (gcnew System::Windows::Forms::ComboBox());
			this->cboAerolinea = (gcnew System::Windows::Forms::ComboBox());
			this->TXTBOLETOS = (gcnew System::Windows::Forms::TextBox());
			this->grbDestino = (gcnew System::Windows::Forms::GroupBox());
			this->rdtZimbabue = (gcnew System::Windows::Forms::RadioButton());
			this->rdtVietnam = (gcnew System::Windows::Forms::RadioButton());
			this->rdtVenezuela = (gcnew System::Windows::Forms::RadioButton());
			this->rdtUruguay = (gcnew System::Windows::Forms::RadioButton());
			this->rdtTailandia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSurinam = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSuiza = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSuecia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSudáfrica = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSomalia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSingapur = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSerbia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSenegal = (gcnew System::Windows::Forms::RadioButton());
			this->rdtSamoa = (gcnew System::Windows::Forms::RadioButton());
			this->rdtRusia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtRumania = (gcnew System::Windows::Forms::RadioButton());
			this->rdtRepublicaDominicana = (gcnew System::Windows::Forms::RadioButton());
			this->rdtNigeria = (gcnew System::Windows::Forms::RadioButton());
			this->rdtNicaragua = (gcnew System::Windows::Forms::RadioButton());
			this->rdtUcrania = (gcnew System::Windows::Forms::RadioButton());
			this->rdtTurquía = (gcnew System::Windows::Forms::RadioButton());
			this->rdtRepúblicaCheca = (gcnew System::Windows::Forms::RadioButton());
			this->rdtReinoUnido = (gcnew System::Windows::Forms::RadioButton());
			this->rdtPortugal = (gcnew System::Windows::Forms::RadioButton());
			this->rdtPolonia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtPerú = (gcnew System::Windows::Forms::RadioButton());
			this->rdtParaguay = (gcnew System::Windows::Forms::RadioButton());
			this->rdtPanamá = (gcnew System::Windows::Forms::RadioButton());
			this->rdtPaísesBajos = (gcnew System::Windows::Forms::RadioButton());
			this->rdtNuevaZelanda = (gcnew System::Windows::Forms::RadioButton());
			this->rdtNoruega = (gcnew System::Windows::Forms::RadioButton());
			this->rdtTrinidadyTobago = (gcnew System::Windows::Forms::RadioButton());
			this->rdtTaiwán = (gcnew System::Windows::Forms::RadioButton());
			this->rdtNepal = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMozambique = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMontenegro = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMongolia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMónaco = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMicronesia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMexico = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMauricio = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMarruecos = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMalta = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMaldivas = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMalasia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMadagascar = (gcnew System::Windows::Forms::RadioButton());
			this->rdtMacednoiadelNorte = (gcnew System::Windows::Forms::RadioButton());
			this->rdtLuxemburgo = (gcnew System::Windows::Forms::RadioButton());
			this->rdtLiechtenstein = (gcnew System::Windows::Forms::RadioButton());
			this->rdtLibia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtLíbano = (gcnew System::Windows::Forms::RadioButton());
			this->rdtLetonia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtLaos = (gcnew System::Windows::Forms::RadioButton());
			this->rdtKuwait = (gcnew System::Windows::Forms::RadioButton());
			this->rdtKosovo = (gcnew System::Windows::Forms::RadioButton());
			this->rdtKiribati = (gcnew System::Windows::Forms::RadioButton());
			this->rdtKenia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtJordania = (gcnew System::Windows::Forms::RadioButton());
			this->rdtJapón = (gcnew System::Windows::Forms::RadioButton());
			this->rdtJamaica = (gcnew System::Windows::Forms::RadioButton());
			this->rdtItalia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIsrael = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIslandia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIrlanda = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIrán = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIrak = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIndonesia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtIndia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtHungría = (gcnew System::Windows::Forms::RadioButton());
			this->rdtHonduras = (gcnew System::Windows::Forms::RadioButton());
			this->rdtHaití = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGuyana = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGuinea = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGuatemala = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGrecia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGranada = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGhana = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGeorgia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGambia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtGabón = (gcnew System::Windows::Forms::RadioButton());
			this->rdtFrancia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtFinlandia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtFilipinas = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEtiopía = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEstonia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEstadosUnidos = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEspaña = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEslovenia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEslovaquia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEmirattosÁrabesUnidos = (gcnew System::Windows::Forms::RadioButton());
			this->rdtElSalvador = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEgipto = (gcnew System::Windows::Forms::RadioButton());
			this->rdtEcuador = (gcnew System::Windows::Forms::RadioButton());
			this->rdtDinamarca = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCuba = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCroacia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCostaRica = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCostadeMarfil = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCoreaSur = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCoreadelNorte = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCongo = (gcnew System::Windows::Forms::RadioButton());
			this->rdtColombia = (gcnew System::Windows::Forms::RadioButton());
			this->rdtChina = (gcnew System::Windows::Forms::RadioButton());
			this->rdtChile = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCatar = (gcnew System::Windows::Forms::RadioButton());
			this->rdtCanadá = (gcnew System::Windows::Forms::RadioButton());
			this->rbtCamerún = (gcnew System::Windows::Forms::RadioButton());
			this->rdtBelice = (gcnew System::Windows::Forms::RadioButton());
			this->rdtBélgica = (gcnew System::Windows::Forms::RadioButton());
			this->rdtBaréin = (gcnew System::Windows::Forms::RadioButton());
			this->rdtBangladés = (gcnew System::Windows::Forms::RadioButton());
			this->rdtBrasil = (gcnew System::Windows::Forms::RadioButton());
			this->rdtAndorra = (gcnew System::Windows::Forms::RadioButton());
			this->rdtAlemania = (gcnew System::Windows::Forms::RadioButton());
			this->rdtAlbania = (gcnew System::Windows::Forms::RadioButton());
			this->rdtAfganistán = (gcnew System::Windows::Forms::RadioButton());
			this->rdtArgentina = (gcnew System::Windows::Forms::RadioButton());
			this->LBLLEMPIRA = (gcnew System::Windows::Forms::Label());
			this->txtp = (gcnew System::Windows::Forms::TextBox());
			this->btnPrecio = (gcnew System::Windows::Forms::Button());
			this->txtArg = (gcnew System::Windows::Forms::TextBox());
			this->bntAgr = (gcnew System::Windows::Forms::Button());
			this->bntMostr = (gcnew System::Windows::Forms::Button());
			this->grbDestino->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblnombre
			// 
			this->lblnombre->AutoSize = true;
			this->lblnombre->BackColor = System::Drawing::Color::Transparent;
			this->lblnombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnombre->ForeColor = System::Drawing::Color::Aqua;
			this->lblnombre->Location = System::Drawing::Point(45, 14);
			this->lblnombre->Name = L"lblnombre";
			this->lblnombre->Size = System::Drawing::Size(205, 26);
			this->lblnombre->TabIndex = 0;
			this->lblnombre->Text = L"Ingrese su Nombre";
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->BackColor = System::Drawing::Color::Transparent;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->ForeColor = System::Drawing::Color::Aqua;
			this->lblID->Location = System::Drawing::Point(19, 52);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(267, 26);
			this->lblID->TabIndex = 1;
			this->lblID->Text = L"Ingrese su Numero de ID";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->ForeColor = System::Drawing::Color::Aqua;
			this->lblFecha->Location = System::Drawing::Point(45, 90);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(173, 26);
			this->lblFecha->TabIndex = 2;
			this->lblFecha->Text = L"Ingrese la fecha";
			// 
			// lblorigen
			// 
			this->lblorigen->AutoSize = true;
			this->lblorigen->BackColor = System::Drawing::Color::Transparent;
			this->lblorigen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblorigen->ForeColor = System::Drawing::Color::Aqua;
			this->lblorigen->Location = System::Drawing::Point(19, 553);
			this->lblorigen->Name = L"lblorigen";
			this->lblorigen->Size = System::Drawing::Size(354, 26);
			this->lblorigen->TabIndex = 4;
			this->lblorigen->Text = L"Seleccione su ubicacion de origen";
			// 
			// lblnasiento
			// 
			this->lblnasiento->AutoSize = true;
			this->lblnasiento->BackColor = System::Drawing::Color::Transparent;
			this->lblnasiento->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnasiento->ForeColor = System::Drawing::Color::Aqua;
			this->lblnasiento->Location = System::Drawing::Point(20, 598);
			this->lblnasiento->Name = L"lblnasiento";
			this->lblnasiento->Size = System::Drawing::Size(312, 26);
			this->lblnasiento->TabIndex = 5;
			this->lblnasiento->Text = L"Seleccione numero de asiento";
			// 
			// lblAerolinea
			// 
			this->lblAerolinea->AutoSize = true;
			this->lblAerolinea->BackColor = System::Drawing::Color::Transparent;
			this->lblAerolinea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAerolinea->ForeColor = System::Drawing::Color::Aqua;
			this->lblAerolinea->Location = System::Drawing::Point(19, 638);
			this->lblAerolinea->Name = L"lblAerolinea";
			this->lblAerolinea->Size = System::Drawing::Size(225, 26);
			this->lblAerolinea->TabIndex = 6;
			this->lblAerolinea->Text = L"Seleccione Aerolínea";
			// 
			// lblnboleto
			// 
			this->lblnboleto->AutoSize = true;
			this->lblnboleto->BackColor = System::Drawing::Color::Transparent;
			this->lblnboleto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnboleto->ForeColor = System::Drawing::Color::Aqua;
			this->lblnboleto->Location = System::Drawing::Point(20, 674);
			this->lblnboleto->Name = L"lblnboleto";
			this->lblnboleto->Size = System::Drawing::Size(305, 26);
			this->lblnboleto->TabIndex = 7;
			this->lblnboleto->Text = L"Ingrese el numero de boletos";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(396, 26);
			this->txtNombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(275, 22);
			this->txtNombre->TabIndex = 9;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &frmBoletos::txtNombre_TextChanged);
			this->txtNombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmBoletos::txtNombre_KeyPress);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(396, 55);
			this->txtid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(275, 22);
			this->txtid->TabIndex = 10;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &frmBoletos::txtid_TextChanged);
			this->txtid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmBoletos::txtid_KeyPress);
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(397, 94);
			this->txtFecha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->Size = System::Drawing::Size(273, 22);
			this->txtFecha->TabIndex = 11;
			this->txtFecha->TextChanged += gcnew System::EventHandler(this, &frmBoletos::txtFecha_TextChanged);
			this->txtFecha->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmBoletos::txtFecha_KeyPress);
			// 
			// cboDestino
			// 
			this->cboDestino->FormattingEnabled = true;
			this->cboDestino->Items->AddRange(gcnew cli::array< System::Object^  >(81) {
				L"Argentina", L"Afganistán", L"Albania", L"Alemania",
					L"Andorra", L"Brasil", L"Bangladés", L"Baréin", L"Bélgica", L"Belice", L"Cabo Verde", L"Camboya", L"Camerún", L"Canadá", L"Dinamarca",
					L"Dominica", L"Ecuador", L"Egipto", L"Estados Unidos", L"España", L"Eslovenia", L"Eslovenia", L"Estonia\t", L"Esuatini\t", L"Etiopía\t",
					L"Finlandia\t", L"Fiyi\t", L"Francia\t", L"Gabón", L"Haití\t", L"Honduras\t", L"Hungría\t", L"India", L"Indonesia\t", L"Irak\t",
					L"Irán\t", L"Irlanda", L"Jamaica\t", L"Japón\t", L"Jordania\t", L"Kazajistán", L"Laos\t", L"Lesoto\t", L"Letonia\t", L"Líbano",
					L"Luxemburgo\t", L"Macedonia del Norte\t", L"Madagascar\t", L"Malasia", L"Namibia\t", L"Nauru\t", L"Nepal\t", L"Nicaragua", L"Omán\t",
					L"Países Bajos", L"Pakistán\t", L"Palaos", L"Reino Unido\t", L"República Centroafricana\t", L"República Checa\t", L"República Democrática del Congo",
					L"Samoa\t", L"San Cristóbal y Nieves\t", L"San Marino\t", L"San Vicente y las Granadinas", L"Tailandia\t", L"Taiwán\t", L"Tanzania\t",
					L"Tayikistán", L"Ucrania\t", L"Uganda\t", L"Uruguay\t", L"Uzbekistán", L"Vanuatu\t", L"Vaticano\t", L"Venezuela", L"Vietnam",
					L"Yemen\t", L"Yibuti\t", L"Zambia\t", L"Zimbabue\t"
			});
			this->cboDestino->Location = System::Drawing::Point(871, 52);
			this->cboDestino->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboDestino->Name = L"cboDestino";
			this->cboDestino->Size = System::Drawing::Size(273, 24);
			this->cboDestino->TabIndex = 12;
			// 
			// cboOrigen
			// 
			this->cboOrigen->FormattingEnabled = true;
			this->cboOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(81) {
				L"Argentina", L"Afganistán", L"Albania", L"Alemania",
					L"Andorra", L"Brasil", L"Bangladés", L"Baréin", L"Bélgica", L"Belice", L"Cabo Verde", L"Camboya", L"Camerún", L"Canadá", L"Dinamarca",
					L"Dominica", L"Ecuador", L"Egipto", L"Estados Unidos", L"España", L"Eslovenia", L"Eslovenia", L"Estonia\t", L"Esuatini\t", L"Etiopía\t",
					L"Finlandia\t", L"Fiyi\t", L"Francia\t", L"Gabón", L"Haití\t", L"Honduras\t", L"Hungría\t", L"India", L"Indonesia\t", L"Irak\t",
					L"Irán\t", L"Irlanda", L"Jamaica\t", L"Japón\t", L"Jordania\t", L"Kazajistán", L"Laos\t", L"Lesoto\t", L"Letonia\t", L"Líbano",
					L"Luxemburgo\t", L"Macedonia del Norte\t", L"Madagascar\t", L"Malasia", L"Namibia\t", L"Nauru\t", L"Nepal\t", L"Nicaragua", L"Omán\t",
					L"Países Bajos", L"Pakistán\t", L"Palaos", L"Reino Unido\t", L"República Centroafricana\t", L"República Checa\t", L"República Democrática del Congo",
					L"Samoa\t", L"San Cristóbal y Nieves\t", L"San Marino\t", L"San Vicente y las Granadinas", L"Tailandia\t", L"Taiwán\t", L"Tanzania\t",
					L"Tayikistán", L"Ucrania\t", L"Uganda\t", L"Uruguay\t", L"Uzbekistán", L"Vanuatu\t", L"Vaticano\t", L"Venezuela", L"Vietnam",
					L"Yemen\t", L"Yibuti\t", L"Zambia\t", L"Zimbabue"
			});
			this->cboOrigen->Location = System::Drawing::Point(401, 553);
			this->cboOrigen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboOrigen->Name = L"cboOrigen";
			this->cboOrigen->Size = System::Drawing::Size(273, 24);
			this->cboOrigen->TabIndex = 13;
			// 
			// cbonasiento
			// 
			this->cbonasiento->FormattingEnabled = true;
			this->cbonasiento->Location = System::Drawing::Point(401, 594);
			this->cbonasiento->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbonasiento->Name = L"cbonasiento";
			this->cbonasiento->Size = System::Drawing::Size(273, 24);
			this->cbonasiento->TabIndex = 14;
			// 
			// cboAerolinea
			// 
			this->cboAerolinea->FormattingEnabled = true;
			this->cboAerolinea->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Copa Airlines", L"Caspian Airlines", L"Air Atlanta Icelandic",
					L"Avianca Airlines", L"LATAM Airlines", L"United Airlines", L"Aerolíneas Argentinas", L"Delta Airlines", L"IndiGo Airlines",
					L"Royal Dutch Airlines"
			});
			this->cboAerolinea->Location = System::Drawing::Point(401, 638);
			this->cboAerolinea->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboAerolinea->Name = L"cboAerolinea";
			this->cboAerolinea->Size = System::Drawing::Size(273, 24);
			this->cboAerolinea->TabIndex = 15;
			// 
			// TXTBOLETOS
			// 
			this->TXTBOLETOS->Location = System::Drawing::Point(413, 678);
			this->TXTBOLETOS->Margin = System::Windows::Forms::Padding(4);
			this->TXTBOLETOS->Name = L"TXTBOLETOS";
			this->TXTBOLETOS->Size = System::Drawing::Size(273, 22);
			this->TXTBOLETOS->TabIndex = 16;
			// 
			// grbDestino
			// 
			this->grbDestino->BackColor = System::Drawing::Color::SkyBlue;
			this->grbDestino->Controls->Add(this->rdtZimbabue);
			this->grbDestino->Controls->Add(this->rdtVietnam);
			this->grbDestino->Controls->Add(this->rdtVenezuela);
			this->grbDestino->Controls->Add(this->rdtUruguay);
			this->grbDestino->Controls->Add(this->rdtTailandia);
			this->grbDestino->Controls->Add(this->rdtSurinam);
			this->grbDestino->Controls->Add(this->rdtSuiza);
			this->grbDestino->Controls->Add(this->rdtSuecia);
			this->grbDestino->Controls->Add(this->rdtSudáfrica);
			this->grbDestino->Controls->Add(this->rdtSomalia);
			this->grbDestino->Controls->Add(this->rdtSingapur);
			this->grbDestino->Controls->Add(this->rdtSerbia);
			this->grbDestino->Controls->Add(this->rdtSenegal);
			this->grbDestino->Controls->Add(this->rdtSamoa);
			this->grbDestino->Controls->Add(this->rdtRusia);
			this->grbDestino->Controls->Add(this->rdtRumania);
			this->grbDestino->Controls->Add(this->rdtRepublicaDominicana);
			this->grbDestino->Controls->Add(this->rdtNigeria);
			this->grbDestino->Controls->Add(this->rdtNicaragua);
			this->grbDestino->Controls->Add(this->rdtUcrania);
			this->grbDestino->Controls->Add(this->rdtTurquía);
			this->grbDestino->Controls->Add(this->rdtRepúblicaCheca);
			this->grbDestino->Controls->Add(this->rdtReinoUnido);
			this->grbDestino->Controls->Add(this->rdtPortugal);
			this->grbDestino->Controls->Add(this->rdtPolonia);
			this->grbDestino->Controls->Add(this->rdtPerú);
			this->grbDestino->Controls->Add(this->rdtParaguay);
			this->grbDestino->Controls->Add(this->rdtPanamá);
			this->grbDestino->Controls->Add(this->rdtPaísesBajos);
			this->grbDestino->Controls->Add(this->rdtNuevaZelanda);
			this->grbDestino->Controls->Add(this->rdtNoruega);
			this->grbDestino->Controls->Add(this->rdtTrinidadyTobago);
			this->grbDestino->Controls->Add(this->rdtTaiwán);
			this->grbDestino->Controls->Add(this->rdtNepal);
			this->grbDestino->Controls->Add(this->rdtMozambique);
			this->grbDestino->Controls->Add(this->rdtMontenegro);
			this->grbDestino->Controls->Add(this->rdtMongolia);
			this->grbDestino->Controls->Add(this->rdtMónaco);
			this->grbDestino->Controls->Add(this->rdtMicronesia);
			this->grbDestino->Controls->Add(this->rdtMexico);
			this->grbDestino->Controls->Add(this->rdtMauricio);
			this->grbDestino->Controls->Add(this->rdtMarruecos);
			this->grbDestino->Controls->Add(this->rdtMalta);
			this->grbDestino->Controls->Add(this->rdtMaldivas);
			this->grbDestino->Controls->Add(this->rdtMalasia);
			this->grbDestino->Controls->Add(this->rdtMadagascar);
			this->grbDestino->Controls->Add(this->rdtMacednoiadelNorte);
			this->grbDestino->Controls->Add(this->rdtLuxemburgo);
			this->grbDestino->Controls->Add(this->rdtLiechtenstein);
			this->grbDestino->Controls->Add(this->rdtLibia);
			this->grbDestino->Controls->Add(this->rdtLíbano);
			this->grbDestino->Controls->Add(this->rdtLetonia);
			this->grbDestino->Controls->Add(this->rdtLaos);
			this->grbDestino->Controls->Add(this->rdtKuwait);
			this->grbDestino->Controls->Add(this->rdtKosovo);
			this->grbDestino->Controls->Add(this->rdtKiribati);
			this->grbDestino->Controls->Add(this->rdtKenia);
			this->grbDestino->Controls->Add(this->rdtJordania);
			this->grbDestino->Controls->Add(this->rdtJapón);
			this->grbDestino->Controls->Add(this->rdtJamaica);
			this->grbDestino->Controls->Add(this->rdtItalia);
			this->grbDestino->Controls->Add(this->rdtIsrael);
			this->grbDestino->Controls->Add(this->rdtIslandia);
			this->grbDestino->Controls->Add(this->rdtIrlanda);
			this->grbDestino->Controls->Add(this->rdtIrán);
			this->grbDestino->Controls->Add(this->rdtIrak);
			this->grbDestino->Controls->Add(this->rdtIndonesia);
			this->grbDestino->Controls->Add(this->rdtIndia);
			this->grbDestino->Controls->Add(this->rdtHungría);
			this->grbDestino->Controls->Add(this->rdtHonduras);
			this->grbDestino->Controls->Add(this->rdtHaití);
			this->grbDestino->Controls->Add(this->rdtGuyana);
			this->grbDestino->Controls->Add(this->rdtGuinea);
			this->grbDestino->Controls->Add(this->rdtGuatemala);
			this->grbDestino->Controls->Add(this->rdtGrecia);
			this->grbDestino->Controls->Add(this->rdtGranada);
			this->grbDestino->Controls->Add(this->rdtGhana);
			this->grbDestino->Controls->Add(this->rdtGeorgia);
			this->grbDestino->Controls->Add(this->rdtGambia);
			this->grbDestino->Controls->Add(this->rdtGabón);
			this->grbDestino->Controls->Add(this->rdtFrancia);
			this->grbDestino->Controls->Add(this->rdtFinlandia);
			this->grbDestino->Controls->Add(this->rdtFilipinas);
			this->grbDestino->Controls->Add(this->rdtEtiopía);
			this->grbDestino->Controls->Add(this->rdtEstonia);
			this->grbDestino->Controls->Add(this->rdtEstadosUnidos);
			this->grbDestino->Controls->Add(this->rdtEspaña);
			this->grbDestino->Controls->Add(this->rdtEslovenia);
			this->grbDestino->Controls->Add(this->rdtEslovaquia);
			this->grbDestino->Controls->Add(this->rdtEmirattosÁrabesUnidos);
			this->grbDestino->Controls->Add(this->rdtElSalvador);
			this->grbDestino->Controls->Add(this->rdtEgipto);
			this->grbDestino->Controls->Add(this->rdtEcuador);
			this->grbDestino->Controls->Add(this->rdtDinamarca);
			this->grbDestino->Controls->Add(this->rdtCuba);
			this->grbDestino->Controls->Add(this->rdtCroacia);
			this->grbDestino->Controls->Add(this->rdtCostaRica);
			this->grbDestino->Controls->Add(this->rdtCostadeMarfil);
			this->grbDestino->Controls->Add(this->rdtCoreaSur);
			this->grbDestino->Controls->Add(this->rdtCoreadelNorte);
			this->grbDestino->Controls->Add(this->rdtCongo);
			this->grbDestino->Controls->Add(this->rdtColombia);
			this->grbDestino->Controls->Add(this->rdtChina);
			this->grbDestino->Controls->Add(this->rdtChile);
			this->grbDestino->Controls->Add(this->rdtCatar);
			this->grbDestino->Controls->Add(this->rdtCanadá);
			this->grbDestino->Controls->Add(this->rbtCamerún);
			this->grbDestino->Controls->Add(this->rdtBelice);
			this->grbDestino->Controls->Add(this->rdtBélgica);
			this->grbDestino->Controls->Add(this->rdtBaréin);
			this->grbDestino->Controls->Add(this->rdtBangladés);
			this->grbDestino->Controls->Add(this->rdtBrasil);
			this->grbDestino->Controls->Add(this->rdtAndorra);
			this->grbDestino->Controls->Add(this->rdtAlemania);
			this->grbDestino->Controls->Add(this->rdtAlbania);
			this->grbDestino->Controls->Add(this->rdtAfganistán);
			this->grbDestino->Controls->Add(this->rdtArgentina);
			this->grbDestino->Location = System::Drawing::Point(16, 127);
			this->grbDestino->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->grbDestino->Name = L"grbDestino";
			this->grbDestino->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->grbDestino->Size = System::Drawing::Size(1203, 418);
			this->grbDestino->TabIndex = 17;
			this->grbDestino->TabStop = false;
			this->grbDestino->Text = L"Seleccione el país al que desea viajar";
			// 
			// rdtZimbabue
			// 
			this->rdtZimbabue->AutoSize = true;
			this->rdtZimbabue->Location = System::Drawing::Point(1061, 145);
			this->rdtZimbabue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtZimbabue->Name = L"rdtZimbabue";
			this->rdtZimbabue->Size = System::Drawing::Size(92, 21);
			this->rdtZimbabue->TabIndex = 18;
			this->rdtZimbabue->TabStop = true;
			this->rdtZimbabue->Text = L"Zimbabue";
			this->rdtZimbabue->UseVisualStyleBackColor = true;
			// 
			// rdtVietnam
			// 
			this->rdtVietnam->AutoSize = true;
			this->rdtVietnam->Location = System::Drawing::Point(1061, 118);
			this->rdtVietnam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtVietnam->Name = L"rdtVietnam";
			this->rdtVietnam->Size = System::Drawing::Size(80, 21);
			this->rdtVietnam->TabIndex = 115;
			this->rdtVietnam->TabStop = true;
			this->rdtVietnam->Text = L"Vietnam";
			this->rdtVietnam->UseVisualStyleBackColor = true;
			// 
			// rdtVenezuela
			// 
			this->rdtVenezuela->AutoSize = true;
			this->rdtVenezuela->Location = System::Drawing::Point(1061, 91);
			this->rdtVenezuela->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtVenezuela->Name = L"rdtVenezuela";
			this->rdtVenezuela->Size = System::Drawing::Size(96, 21);
			this->rdtVenezuela->TabIndex = 114;
			this->rdtVenezuela->TabStop = true;
			this->rdtVenezuela->Text = L"Venezuela";
			this->rdtVenezuela->UseVisualStyleBackColor = true;
			// 
			// rdtUruguay
			// 
			this->rdtUruguay->AutoSize = true;
			this->rdtUruguay->Location = System::Drawing::Point(1061, 64);
			this->rdtUruguay->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtUruguay->Name = L"rdtUruguay";
			this->rdtUruguay->Size = System::Drawing::Size(83, 21);
			this->rdtUruguay->TabIndex = 113;
			this->rdtUruguay->TabStop = true;
			this->rdtUruguay->Text = L"Uruguay";
			this->rdtUruguay->UseVisualStyleBackColor = true;
			// 
			// rdtTailandia
			// 
			this->rdtTailandia->AutoSize = true;
			this->rdtTailandia->Location = System::Drawing::Point(927, 309);
			this->rdtTailandia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtTailandia->Name = L"rdtTailandia";
			this->rdtTailandia->Size = System::Drawing::Size(87, 21);
			this->rdtTailandia->TabIndex = 112;
			this->rdtTailandia->TabStop = true;
			this->rdtTailandia->Text = L"Tailandia";
			this->rdtTailandia->UseVisualStyleBackColor = true;
			// 
			// rdtSurinam
			// 
			this->rdtSurinam->AutoSize = true;
			this->rdtSurinam->Location = System::Drawing::Point(927, 282);
			this->rdtSurinam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSurinam->Name = L"rdtSurinam";
			this->rdtSurinam->Size = System::Drawing::Size(81, 21);
			this->rdtSurinam->TabIndex = 111;
			this->rdtSurinam->TabStop = true;
			this->rdtSurinam->Text = L"Surinam";
			this->rdtSurinam->UseVisualStyleBackColor = true;
			// 
			// rdtSuiza
			// 
			this->rdtSuiza->AutoSize = true;
			this->rdtSuiza->Location = System::Drawing::Point(927, 255);
			this->rdtSuiza->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSuiza->Name = L"rdtSuiza";
			this->rdtSuiza->Size = System::Drawing::Size(64, 21);
			this->rdtSuiza->TabIndex = 110;
			this->rdtSuiza->TabStop = true;
			this->rdtSuiza->Text = L"Suiza";
			this->rdtSuiza->UseVisualStyleBackColor = true;
			// 
			// rdtSuecia
			// 
			this->rdtSuecia->AutoSize = true;
			this->rdtSuecia->Location = System::Drawing::Point(927, 228);
			this->rdtSuecia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSuecia->Name = L"rdtSuecia";
			this->rdtSuecia->Size = System::Drawing::Size(72, 21);
			this->rdtSuecia->TabIndex = 109;
			this->rdtSuecia->TabStop = true;
			this->rdtSuecia->Text = L"Suecia";
			this->rdtSuecia->UseVisualStyleBackColor = true;
			// 
			// rdtSudáfrica
			// 
			this->rdtSudáfrica->AutoSize = true;
			this->rdtSudáfrica->Location = System::Drawing::Point(927, 201);
			this->rdtSudáfrica->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSudáfrica->Name = L"rdtSudáfrica";
			this->rdtSudáfrica->Size = System::Drawing::Size(89, 21);
			this->rdtSudáfrica->TabIndex = 108;
			this->rdtSudáfrica->TabStop = true;
			this->rdtSudáfrica->Text = L"Sudáfrica";
			this->rdtSudáfrica->UseVisualStyleBackColor = true;
			// 
			// rdtSomalia
			// 
			this->rdtSomalia->AutoSize = true;
			this->rdtSomalia->Location = System::Drawing::Point(927, 174);
			this->rdtSomalia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSomalia->Name = L"rdtSomalia";
			this->rdtSomalia->Size = System::Drawing::Size(79, 21);
			this->rdtSomalia->TabIndex = 107;
			this->rdtSomalia->TabStop = true;
			this->rdtSomalia->Text = L"Somalia";
			this->rdtSomalia->UseVisualStyleBackColor = true;
			// 
			// rdtSingapur
			// 
			this->rdtSingapur->AutoSize = true;
			this->rdtSingapur->Location = System::Drawing::Point(927, 146);
			this->rdtSingapur->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSingapur->Name = L"rdtSingapur";
			this->rdtSingapur->Size = System::Drawing::Size(86, 21);
			this->rdtSingapur->TabIndex = 106;
			this->rdtSingapur->TabStop = true;
			this->rdtSingapur->Text = L"Singapur";
			this->rdtSingapur->UseVisualStyleBackColor = true;
			// 
			// rdtSerbia
			// 
			this->rdtSerbia->AutoSize = true;
			this->rdtSerbia->Location = System::Drawing::Point(927, 121);
			this->rdtSerbia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSerbia->Name = L"rdtSerbia";
			this->rdtSerbia->Size = System::Drawing::Size(70, 21);
			this->rdtSerbia->TabIndex = 105;
			this->rdtSerbia->TabStop = true;
			this->rdtSerbia->Text = L"Serbia";
			this->rdtSerbia->UseVisualStyleBackColor = true;
			// 
			// rdtSenegal
			// 
			this->rdtSenegal->AutoSize = true;
			this->rdtSenegal->Location = System::Drawing::Point(927, 94);
			this->rdtSenegal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSenegal->Name = L"rdtSenegal";
			this->rdtSenegal->Size = System::Drawing::Size(81, 21);
			this->rdtSenegal->TabIndex = 104;
			this->rdtSenegal->TabStop = true;
			this->rdtSenegal->Text = L"Senegal";
			this->rdtSenegal->UseVisualStyleBackColor = true;
			// 
			// rdtSamoa
			// 
			this->rdtSamoa->AutoSize = true;
			this->rdtSamoa->Location = System::Drawing::Point(927, 66);
			this->rdtSamoa->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtSamoa->Name = L"rdtSamoa";
			this->rdtSamoa->Size = System::Drawing::Size(73, 21);
			this->rdtSamoa->TabIndex = 103;
			this->rdtSamoa->TabStop = true;
			this->rdtSamoa->Text = L"Samoa";
			this->rdtSamoa->UseVisualStyleBackColor = true;
			// 
			// rdtRusia
			// 
			this->rdtRusia->AutoSize = true;
			this->rdtRusia->Location = System::Drawing::Point(927, 39);
			this->rdtRusia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtRusia->Name = L"rdtRusia";
			this->rdtRusia->Size = System::Drawing::Size(65, 21);
			this->rdtRusia->TabIndex = 102;
			this->rdtRusia->TabStop = true;
			this->rdtRusia->Text = L"Rusia";
			this->rdtRusia->UseVisualStyleBackColor = true;
			// 
			// rdtRumania
			// 
			this->rdtRumania->AutoSize = true;
			this->rdtRumania->Location = System::Drawing::Point(784, 390);
			this->rdtRumania->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtRumania->Name = L"rdtRumania";
			this->rdtRumania->Size = System::Drawing::Size(85, 21);
			this->rdtRumania->TabIndex = 101;
			this->rdtRumania->TabStop = true;
			this->rdtRumania->Text = L"Rumania";
			this->rdtRumania->UseVisualStyleBackColor = true;
			// 
			// rdtRepublicaDominicana
			// 
			this->rdtRepublicaDominicana->AutoSize = true;
			this->rdtRepublicaDominicana->Location = System::Drawing::Point(755, 364);
			this->rdtRepublicaDominicana->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtRepublicaDominicana->Name = L"rdtRepublicaDominicana";
			this->rdtRepublicaDominicana->Size = System::Drawing::Size(166, 21);
			this->rdtRepublicaDominicana->TabIndex = 100;
			this->rdtRepublicaDominicana->TabStop = true;
			this->rdtRepublicaDominicana->Text = L"RepublicaDominicana";
			this->rdtRepublicaDominicana->UseVisualStyleBackColor = true;
			// 
			// rdtNigeria
			// 
			this->rdtNigeria->AutoSize = true;
			this->rdtNigeria->Location = System::Drawing::Point(785, 65);
			this->rdtNigeria->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtNigeria->Name = L"rdtNigeria";
			this->rdtNigeria->Size = System::Drawing::Size(74, 21);
			this->rdtNigeria->TabIndex = 99;
			this->rdtNigeria->TabStop = true;
			this->rdtNigeria->Text = L"Nigeria";
			this->rdtNigeria->UseVisualStyleBackColor = true;
			// 
			// rdtNicaragua
			// 
			this->rdtNicaragua->AutoSize = true;
			this->rdtNicaragua->Location = System::Drawing::Point(785, 39);
			this->rdtNicaragua->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtNicaragua->Name = L"rdtNicaragua";
			this->rdtNicaragua->Size = System::Drawing::Size(94, 21);
			this->rdtNicaragua->TabIndex = 98;
			this->rdtNicaragua->TabStop = true;
			this->rdtNicaragua->Text = L"Nicaragua";
			this->rdtNicaragua->UseVisualStyleBackColor = true;
			// 
			// rdtUcrania
			// 
			this->rdtUcrania->AutoSize = true;
			this->rdtUcrania->Location = System::Drawing::Point(1061, 39);
			this->rdtUcrania->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtUcrania->Name = L"rdtUcrania";
			this->rdtUcrania->Size = System::Drawing::Size(78, 21);
			this->rdtUcrania->TabIndex = 97;
			this->rdtUcrania->TabStop = true;
			this->rdtUcrania->Text = L"Ucrania";
			this->rdtUcrania->UseVisualStyleBackColor = true;
			// 
			// rdtTurquía
			// 
			this->rdtTurquía->AutoSize = true;
			this->rdtTurquía->Location = System::Drawing::Point(927, 390);
			this->rdtTurquía->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtTurquía->Name = L"rdtTurquía";
			this->rdtTurquía->Size = System::Drawing::Size(78, 21);
			this->rdtTurquía->TabIndex = 96;
			this->rdtTurquía->TabStop = true;
			this->rdtTurquía->Text = L"Turquía";
			this->rdtTurquía->UseVisualStyleBackColor = true;
			// 
			// rdtRepúblicaCheca
			// 
			this->rdtRepúblicaCheca->AutoSize = true;
			this->rdtRepúblicaCheca->Location = System::Drawing::Point(785, 336);
			this->rdtRepúblicaCheca->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtRepúblicaCheca->Name = L"rdtRepúblicaCheca";
			this->rdtRepúblicaCheca->Size = System::Drawing::Size(136, 21);
			this->rdtRepúblicaCheca->TabIndex = 95;
			this->rdtRepúblicaCheca->TabStop = true;
			this->rdtRepúblicaCheca->Text = L"República Checa";
			this->rdtRepúblicaCheca->UseVisualStyleBackColor = true;
			// 
			// rdtReinoUnido
			// 
			this->rdtReinoUnido->AutoSize = true;
			this->rdtReinoUnido->Location = System::Drawing::Point(785, 309);
			this->rdtReinoUnido->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtReinoUnido->Name = L"rdtReinoUnido";
			this->rdtReinoUnido->Size = System::Drawing::Size(107, 21);
			this->rdtReinoUnido->TabIndex = 94;
			this->rdtReinoUnido->TabStop = true;
			this->rdtReinoUnido->Text = L"Reino Unido";
			this->rdtReinoUnido->UseVisualStyleBackColor = true;
			// 
			// rdtPortugal
			// 
			this->rdtPortugal->AutoSize = true;
			this->rdtPortugal->Location = System::Drawing::Point(785, 282);
			this->rdtPortugal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtPortugal->Name = L"rdtPortugal";
			this->rdtPortugal->Size = System::Drawing::Size(82, 21);
			this->rdtPortugal->TabIndex = 93;
			this->rdtPortugal->TabStop = true;
			this->rdtPortugal->Text = L"Portugal";
			this->rdtPortugal->UseVisualStyleBackColor = true;
			// 
			// rdtPolonia
			// 
			this->rdtPolonia->AutoSize = true;
			this->rdtPolonia->Location = System::Drawing::Point(785, 255);
			this->rdtPolonia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtPolonia->Name = L"rdtPolonia";
			this->rdtPolonia->Size = System::Drawing::Size(76, 21);
			this->rdtPolonia->TabIndex = 92;
			this->rdtPolonia->TabStop = true;
			this->rdtPolonia->Text = L"Polonia";
			this->rdtPolonia->UseVisualStyleBackColor = true;
			// 
			// rdtPerú
			// 
			this->rdtPerú->AutoSize = true;
			this->rdtPerú->Location = System::Drawing::Point(785, 228);
			this->rdtPerú->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtPerú->Name = L"rdtPerú";
			this->rdtPerú->Size = System::Drawing::Size(59, 21);
			this->rdtPerú->TabIndex = 91;
			this->rdtPerú->TabStop = true;
			this->rdtPerú->Text = L"Perú";
			this->rdtPerú->UseVisualStyleBackColor = true;
			// 
			// rdtParaguay
			// 
			this->rdtParaguay->AutoSize = true;
			this->rdtParaguay->Location = System::Drawing::Point(785, 199);
			this->rdtParaguay->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtParaguay->Name = L"rdtParaguay";
			this->rdtParaguay->Size = System::Drawing::Size(90, 21);
			this->rdtParaguay->TabIndex = 90;
			this->rdtParaguay->TabStop = true;
			this->rdtParaguay->Text = L"Paraguay";
			this->rdtParaguay->UseVisualStyleBackColor = true;
			// 
			// rdtPanamá
			// 
			this->rdtPanamá->AutoSize = true;
			this->rdtPanamá->Location = System::Drawing::Point(785, 172);
			this->rdtPanamá->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtPanamá->Name = L"rdtPanamá";
			this->rdtPanamá->Size = System::Drawing::Size(81, 21);
			this->rdtPanamá->TabIndex = 89;
			this->rdtPanamá->TabStop = true;
			this->rdtPanamá->Text = L"Panamá";
			this->rdtPanamá->UseVisualStyleBackColor = true;
			// 
			// rdtPaísesBajos
			// 
			this->rdtPaísesBajos->AutoSize = true;
			this->rdtPaísesBajos->Location = System::Drawing::Point(785, 145);
			this->rdtPaísesBajos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtPaísesBajos->Name = L"rdtPaísesBajos";
			this->rdtPaísesBajos->Size = System::Drawing::Size(110, 21);
			this->rdtPaísesBajos->TabIndex = 88;
			this->rdtPaísesBajos->TabStop = true;
			this->rdtPaísesBajos->Text = L"Países Bajos";
			this->rdtPaísesBajos->UseVisualStyleBackColor = true;
			// 
			// rdtNuevaZelanda
			// 
			this->rdtNuevaZelanda->AutoSize = true;
			this->rdtNuevaZelanda->Location = System::Drawing::Point(784, 119);
			this->rdtNuevaZelanda->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtNuevaZelanda->Name = L"rdtNuevaZelanda";
			this->rdtNuevaZelanda->Size = System::Drawing::Size(126, 21);
			this->rdtNuevaZelanda->TabIndex = 87;
			this->rdtNuevaZelanda->TabStop = true;
			this->rdtNuevaZelanda->Text = L"Nueva Zelanda";
			this->rdtNuevaZelanda->UseVisualStyleBackColor = true;
			// 
			// rdtNoruega
			// 
			this->rdtNoruega->AutoSize = true;
			this->rdtNoruega->Location = System::Drawing::Point(785, 92);
			this->rdtNoruega->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtNoruega->Name = L"rdtNoruega";
			this->rdtNoruega->Size = System::Drawing::Size(84, 21);
			this->rdtNoruega->TabIndex = 86;
			this->rdtNoruega->TabStop = true;
			this->rdtNoruega->Text = L"Noruega";
			this->rdtNoruega->UseVisualStyleBackColor = true;
			// 
			// rdtTrinidadyTobago
			// 
			this->rdtTrinidadyTobago->AutoSize = true;
			this->rdtTrinidadyTobago->Location = System::Drawing::Point(927, 363);
			this->rdtTrinidadyTobago->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtTrinidadyTobago->Name = L"rdtTrinidadyTobago";
			this->rdtTrinidadyTobago->Size = System::Drawing::Size(145, 21);
			this->rdtTrinidadyTobago->TabIndex = 85;
			this->rdtTrinidadyTobago->TabStop = true;
			this->rdtTrinidadyTobago->Text = L"Trinidad y Tobago";
			this->rdtTrinidadyTobago->UseVisualStyleBackColor = true;
			// 
			// rdtTaiwán
			// 
			this->rdtTaiwán->AutoSize = true;
			this->rdtTaiwán->Location = System::Drawing::Point(927, 336);
			this->rdtTaiwán->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtTaiwán->Name = L"rdtTaiwán";
			this->rdtTaiwán->Size = System::Drawing::Size(74, 21);
			this->rdtTaiwán->TabIndex = 84;
			this->rdtTaiwán->TabStop = true;
			this->rdtTaiwán->Text = L"Taiwán";
			this->rdtTaiwán->UseVisualStyleBackColor = true;
			// 
			// rdtNepal
			// 
			this->rdtNepal->AutoSize = true;
			this->rdtNepal->Location = System::Drawing::Point(619, 390);
			this->rdtNepal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtNepal->Name = L"rdtNepal";
			this->rdtNepal->Size = System::Drawing::Size(66, 21);
			this->rdtNepal->TabIndex = 83;
			this->rdtNepal->TabStop = true;
			this->rdtNepal->Text = L"Nepal";
			this->rdtNepal->UseVisualStyleBackColor = true;
			// 
			// rdtMozambique
			// 
			this->rdtMozambique->AutoSize = true;
			this->rdtMozambique->Location = System::Drawing::Point(619, 363);
			this->rdtMozambique->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMozambique->Name = L"rdtMozambique";
			this->rdtMozambique->Size = System::Drawing::Size(109, 21);
			this->rdtMozambique->TabIndex = 82;
			this->rdtMozambique->TabStop = true;
			this->rdtMozambique->Text = L"Mozambique";
			this->rdtMozambique->UseVisualStyleBackColor = true;
			// 
			// rdtMontenegro
			// 
			this->rdtMontenegro->AutoSize = true;
			this->rdtMontenegro->Location = System::Drawing::Point(619, 336);
			this->rdtMontenegro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMontenegro->Name = L"rdtMontenegro";
			this->rdtMontenegro->Size = System::Drawing::Size(105, 21);
			this->rdtMontenegro->TabIndex = 81;
			this->rdtMontenegro->TabStop = true;
			this->rdtMontenegro->Text = L"Montenegro";
			this->rdtMontenegro->UseVisualStyleBackColor = true;
			// 
			// rdtMongolia
			// 
			this->rdtMongolia->AutoSize = true;
			this->rdtMongolia->Location = System::Drawing::Point(619, 309);
			this->rdtMongolia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMongolia->Name = L"rdtMongolia";
			this->rdtMongolia->Size = System::Drawing::Size(86, 21);
			this->rdtMongolia->TabIndex = 80;
			this->rdtMongolia->TabStop = true;
			this->rdtMongolia->Text = L"Mongolia";
			this->rdtMongolia->UseVisualStyleBackColor = true;
			// 
			// rdtMónaco
			// 
			this->rdtMónaco->AutoSize = true;
			this->rdtMónaco->Location = System::Drawing::Point(619, 282);
			this->rdtMónaco->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMónaco->Name = L"rdtMónaco";
			this->rdtMónaco->Size = System::Drawing::Size(79, 21);
			this->rdtMónaco->TabIndex = 79;
			this->rdtMónaco->TabStop = true;
			this->rdtMónaco->Text = L"Mónaco";
			this->rdtMónaco->UseVisualStyleBackColor = true;
			// 
			// rdtMicronesia
			// 
			this->rdtMicronesia->AutoSize = true;
			this->rdtMicronesia->Location = System::Drawing::Point(619, 255);
			this->rdtMicronesia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMicronesia->Name = L"rdtMicronesia";
			this->rdtMicronesia->Size = System::Drawing::Size(97, 21);
			this->rdtMicronesia->TabIndex = 78;
			this->rdtMicronesia->TabStop = true;
			this->rdtMicronesia->Text = L"Micronesia";
			this->rdtMicronesia->UseVisualStyleBackColor = true;
			// 
			// rdtMexico
			// 
			this->rdtMexico->AutoSize = true;
			this->rdtMexico->Location = System::Drawing::Point(619, 228);
			this->rdtMexico->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMexico->Name = L"rdtMexico";
			this->rdtMexico->Size = System::Drawing::Size(72, 21);
			this->rdtMexico->TabIndex = 77;
			this->rdtMexico->TabStop = true;
			this->rdtMexico->Text = L"México";
			this->rdtMexico->UseVisualStyleBackColor = true;
			// 
			// rdtMauricio
			// 
			this->rdtMauricio->AutoSize = true;
			this->rdtMauricio->Location = System::Drawing::Point(619, 201);
			this->rdtMauricio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMauricio->Name = L"rdtMauricio";
			this->rdtMauricio->Size = System::Drawing::Size(82, 21);
			this->rdtMauricio->TabIndex = 76;
			this->rdtMauricio->TabStop = true;
			this->rdtMauricio->Text = L"Mauricio";
			this->rdtMauricio->UseVisualStyleBackColor = true;
			// 
			// rdtMarruecos
			// 
			this->rdtMarruecos->AutoSize = true;
			this->rdtMarruecos->Location = System::Drawing::Point(619, 174);
			this->rdtMarruecos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMarruecos->Name = L"rdtMarruecos";
			this->rdtMarruecos->Size = System::Drawing::Size(96, 21);
			this->rdtMarruecos->TabIndex = 75;
			this->rdtMarruecos->TabStop = true;
			this->rdtMarruecos->Text = L"Marruecos";
			this->rdtMarruecos->UseVisualStyleBackColor = true;
			// 
			// rdtMalta
			// 
			this->rdtMalta->AutoSize = true;
			this->rdtMalta->Location = System::Drawing::Point(619, 146);
			this->rdtMalta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMalta->Name = L"rdtMalta";
			this->rdtMalta->Size = System::Drawing::Size(63, 21);
			this->rdtMalta->TabIndex = 74;
			this->rdtMalta->TabStop = true;
			this->rdtMalta->Text = L"Malta";
			this->rdtMalta->UseVisualStyleBackColor = true;
			// 
			// rdtMaldivas
			// 
			this->rdtMaldivas->AutoSize = true;
			this->rdtMaldivas->Location = System::Drawing::Point(619, 121);
			this->rdtMaldivas->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMaldivas->Name = L"rdtMaldivas";
			this->rdtMaldivas->Size = System::Drawing::Size(84, 21);
			this->rdtMaldivas->TabIndex = 73;
			this->rdtMaldivas->TabStop = true;
			this->rdtMaldivas->Text = L"Maldivas";
			this->rdtMaldivas->UseVisualStyleBackColor = true;
			// 
			// rdtMalasia
			// 
			this->rdtMalasia->AutoSize = true;
			this->rdtMalasia->Location = System::Drawing::Point(619, 92);
			this->rdtMalasia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMalasia->Name = L"rdtMalasia";
			this->rdtMalasia->Size = System::Drawing::Size(77, 21);
			this->rdtMalasia->TabIndex = 72;
			this->rdtMalasia->TabStop = true;
			this->rdtMalasia->Text = L"Malasia";
			this->rdtMalasia->UseVisualStyleBackColor = true;
			// 
			// rdtMadagascar
			// 
			this->rdtMadagascar->AutoSize = true;
			this->rdtMadagascar->Location = System::Drawing::Point(619, 66);
			this->rdtMadagascar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMadagascar->Name = L"rdtMadagascar";
			this->rdtMadagascar->Size = System::Drawing::Size(107, 21);
			this->rdtMadagascar->TabIndex = 71;
			this->rdtMadagascar->TabStop = true;
			this->rdtMadagascar->Text = L"Madagascar";
			this->rdtMadagascar->UseVisualStyleBackColor = true;
			// 
			// rdtMacednoiadelNorte
			// 
			this->rdtMacednoiadelNorte->AutoSize = true;
			this->rdtMacednoiadelNorte->Location = System::Drawing::Point(619, 39);
			this->rdtMacednoiadelNorte->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtMacednoiadelNorte->Name = L"rdtMacednoiadelNorte";
			this->rdtMacednoiadelNorte->Size = System::Drawing::Size(160, 21);
			this->rdtMacednoiadelNorte->TabIndex = 70;
			this->rdtMacednoiadelNorte->TabStop = true;
			this->rdtMacednoiadelNorte->Text = L"Macedonia del Norte";
			this->rdtMacednoiadelNorte->UseVisualStyleBackColor = true;
			// 
			// rdtLuxemburgo
			// 
			this->rdtLuxemburgo->AutoSize = true;
			this->rdtLuxemburgo->Location = System::Drawing::Point(492, 390);
			this->rdtLuxemburgo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtLuxemburgo->Name = L"rdtLuxemburgo";
			this->rdtLuxemburgo->Size = System::Drawing::Size(107, 21);
			this->rdtLuxemburgo->TabIndex = 69;
			this->rdtLuxemburgo->TabStop = true;
			this->rdtLuxemburgo->Text = L"Luxemburgo";
			this->rdtLuxemburgo->UseVisualStyleBackColor = true;
			// 
			// rdtLiechtenstein
			// 
			this->rdtLiechtenstein->AutoSize = true;
			this->rdtLiechtenstein->Location = System::Drawing::Point(492, 363);
			this->rdtLiechtenstein->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtLiechtenstein->Name = L"rdtLiechtenstein";
			this->rdtLiechtenstein->Size = System::Drawing::Size(113, 21);
			this->rdtLiechtenstein->TabIndex = 68;
			this->rdtLiechtenstein->TabStop = true;
			this->rdtLiechtenstein->Text = L"Liechtenstein";
			this->rdtLiechtenstein->UseVisualStyleBackColor = true;
			// 
			// rdtLibia
			// 
			this->rdtLibia->AutoSize = true;
			this->rdtLibia->Location = System::Drawing::Point(492, 336);
			this->rdtLibia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtLibia->Name = L"rdtLibia";
			this->rdtLibia->Size = System::Drawing::Size(59, 21);
			this->rdtLibia->TabIndex = 67;
			this->rdtLibia->TabStop = true;
			this->rdtLibia->Text = L"Libia";
			this->rdtLibia->UseVisualStyleBackColor = true;
			// 
			// rdtLíbano
			// 
			this->rdtLíbano->AutoSize = true;
			this->rdtLíbano->Location = System::Drawing::Point(492, 309);
			this->rdtLíbano->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtLíbano->Name = L"rdtLíbano";
			this->rdtLíbano->Size = System::Drawing::Size(72, 21);
			this->rdtLíbano->TabIndex = 66;
			this->rdtLíbano->TabStop = true;
			this->rdtLíbano->Text = L"Líbano";
			this->rdtLíbano->UseVisualStyleBackColor = true;
			// 
			// rdtLetonia
			// 
			this->rdtLetonia->AutoSize = true;
			this->rdtLetonia->Location = System::Drawing::Point(492, 282);
			this->rdtLetonia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtLetonia->Name = L"rdtLetonia";
			this->rdtLetonia->Size = System::Drawing::Size(76, 21);
			this->rdtLetonia->TabIndex = 65;
			this->rdtLetonia->TabStop = true;
			this->rdtLetonia->Text = L"Letonia";
			this->rdtLetonia->UseVisualStyleBackColor = true;
			// 
			// rdtLaos
			// 
			this->rdtLaos->AutoSize = true;
			this->rdtLaos->Location = System::Drawing::Point(492, 255);
			this->rdtLaos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtLaos->Name = L"rdtLaos";
			this->rdtLaos->Size = System::Drawing::Size(60, 21);
			this->rdtLaos->TabIndex = 64;
			this->rdtLaos->TabStop = true;
			this->rdtLaos->Text = L"Laos";
			this->rdtLaos->UseVisualStyleBackColor = true;
			// 
			// rdtKuwait
			// 
			this->rdtKuwait->AutoSize = true;
			this->rdtKuwait->Location = System::Drawing::Point(492, 228);
			this->rdtKuwait->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtKuwait->Name = L"rdtKuwait";
			this->rdtKuwait->Size = System::Drawing::Size(70, 21);
			this->rdtKuwait->TabIndex = 63;
			this->rdtKuwait->TabStop = true;
			this->rdtKuwait->Text = L"Kuwait";
			this->rdtKuwait->UseVisualStyleBackColor = true;
			// 
			// rdtKosovo
			// 
			this->rdtKosovo->AutoSize = true;
			this->rdtKosovo->Location = System::Drawing::Point(492, 201);
			this->rdtKosovo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtKosovo->Name = L"rdtKosovo";
			this->rdtKosovo->Size = System::Drawing::Size(76, 21);
			this->rdtKosovo->TabIndex = 62;
			this->rdtKosovo->TabStop = true;
			this->rdtKosovo->Text = L"Kosovo";
			this->rdtKosovo->UseVisualStyleBackColor = true;
			// 
			// rdtKiribati
			// 
			this->rdtKiribati->AutoSize = true;
			this->rdtKiribati->Location = System::Drawing::Point(492, 174);
			this->rdtKiribati->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtKiribati->Name = L"rdtKiribati";
			this->rdtKiribati->Size = System::Drawing::Size(72, 21);
			this->rdtKiribati->TabIndex = 61;
			this->rdtKiribati->TabStop = true;
			this->rdtKiribati->Text = L"Kiribati";
			this->rdtKiribati->UseVisualStyleBackColor = true;
			// 
			// rdtKenia
			// 
			this->rdtKenia->AutoSize = true;
			this->rdtKenia->Location = System::Drawing::Point(492, 146);
			this->rdtKenia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtKenia->Name = L"rdtKenia";
			this->rdtKenia->Size = System::Drawing::Size(65, 21);
			this->rdtKenia->TabIndex = 60;
			this->rdtKenia->TabStop = true;
			this->rdtKenia->Text = L"Kenia";
			this->rdtKenia->UseVisualStyleBackColor = true;
			// 
			// rdtJordania
			// 
			this->rdtJordania->AutoSize = true;
			this->rdtJordania->Location = System::Drawing::Point(492, 119);
			this->rdtJordania->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtJordania->Name = L"rdtJordania";
			this->rdtJordania->Size = System::Drawing::Size(84, 21);
			this->rdtJordania->TabIndex = 59;
			this->rdtJordania->TabStop = true;
			this->rdtJordania->Text = L"Jordania";
			this->rdtJordania->UseVisualStyleBackColor = true;
			// 
			// rdtJapón
			// 
			this->rdtJapón->AutoSize = true;
			this->rdtJapón->Location = System::Drawing::Point(492, 92);
			this->rdtJapón->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtJapón->Name = L"rdtJapón";
			this->rdtJapón->Size = System::Drawing::Size(68, 21);
			this->rdtJapón->TabIndex = 58;
			this->rdtJapón->TabStop = true;
			this->rdtJapón->Text = L"Japón";
			this->rdtJapón->UseVisualStyleBackColor = true;
			// 
			// rdtJamaica
			// 
			this->rdtJamaica->AutoSize = true;
			this->rdtJamaica->Location = System::Drawing::Point(492, 66);
			this->rdtJamaica->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtJamaica->Name = L"rdtJamaica";
			this->rdtJamaica->Size = System::Drawing::Size(81, 21);
			this->rdtJamaica->TabIndex = 57;
			this->rdtJamaica->TabStop = true;
			this->rdtJamaica->Text = L"Jamaica";
			this->rdtJamaica->UseVisualStyleBackColor = true;
			// 
			// rdtItalia
			// 
			this->rdtItalia->AutoSize = true;
			this->rdtItalia->Location = System::Drawing::Point(492, 39);
			this->rdtItalia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtItalia->Name = L"rdtItalia";
			this->rdtItalia->Size = System::Drawing::Size(58, 21);
			this->rdtItalia->TabIndex = 56;
			this->rdtItalia->TabStop = true;
			this->rdtItalia->Text = L"Italia";
			this->rdtItalia->UseVisualStyleBackColor = true;
			// 
			// rdtIsrael
			// 
			this->rdtIsrael->AutoSize = true;
			this->rdtIsrael->Location = System::Drawing::Point(380, 390);
			this->rdtIsrael->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIsrael->Name = L"rdtIsrael";
			this->rdtIsrael->Size = System::Drawing::Size(63, 21);
			this->rdtIsrael->TabIndex = 55;
			this->rdtIsrael->TabStop = true;
			this->rdtIsrael->Text = L"Israel";
			this->rdtIsrael->UseVisualStyleBackColor = true;
			// 
			// rdtIslandia
			// 
			this->rdtIslandia->AutoSize = true;
			this->rdtIslandia->Location = System::Drawing::Point(380, 363);
			this->rdtIslandia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIslandia->Name = L"rdtIslandia";
			this->rdtIslandia->Size = System::Drawing::Size(77, 21);
			this->rdtIslandia->TabIndex = 54;
			this->rdtIslandia->TabStop = true;
			this->rdtIslandia->Text = L"Islandia";
			this->rdtIslandia->UseVisualStyleBackColor = true;
			// 
			// rdtIrlanda
			// 
			this->rdtIrlanda->AutoSize = true;
			this->rdtIrlanda->Location = System::Drawing::Point(380, 336);
			this->rdtIrlanda->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIrlanda->Name = L"rdtIrlanda";
			this->rdtIrlanda->Size = System::Drawing::Size(72, 21);
			this->rdtIrlanda->TabIndex = 53;
			this->rdtIrlanda->TabStop = true;
			this->rdtIrlanda->Text = L"Irlanda";
			this->rdtIrlanda->UseVisualStyleBackColor = true;
			// 
			// rdtIrán
			// 
			this->rdtIrán->AutoSize = true;
			this->rdtIrán->Location = System::Drawing::Point(380, 309);
			this->rdtIrán->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIrán->Name = L"rdtIrán";
			this->rdtIrán->Size = System::Drawing::Size(53, 21);
			this->rdtIrán->TabIndex = 52;
			this->rdtIrán->TabStop = true;
			this->rdtIrán->Text = L"Irán";
			this->rdtIrán->UseVisualStyleBackColor = true;
			// 
			// rdtIrak
			// 
			this->rdtIrak->AutoSize = true;
			this->rdtIrak->Location = System::Drawing::Point(380, 282);
			this->rdtIrak->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIrak->Name = L"rdtIrak";
			this->rdtIrak->Size = System::Drawing::Size(52, 21);
			this->rdtIrak->TabIndex = 51;
			this->rdtIrak->TabStop = true;
			this->rdtIrak->Text = L"Irak";
			this->rdtIrak->UseVisualStyleBackColor = true;
			// 
			// rdtIndonesia
			// 
			this->rdtIndonesia->AutoSize = true;
			this->rdtIndonesia->Location = System::Drawing::Point(380, 255);
			this->rdtIndonesia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIndonesia->Name = L"rdtIndonesia";
			this->rdtIndonesia->Size = System::Drawing::Size(90, 21);
			this->rdtIndonesia->TabIndex = 50;
			this->rdtIndonesia->TabStop = true;
			this->rdtIndonesia->Text = L"Indonesia";
			this->rdtIndonesia->UseVisualStyleBackColor = true;
			// 
			// rdtIndia
			// 
			this->rdtIndia->AutoSize = true;
			this->rdtIndia->Location = System::Drawing::Point(380, 228);
			this->rdtIndia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtIndia->Name = L"rdtIndia";
			this->rdtIndia->Size = System::Drawing::Size(59, 21);
			this->rdtIndia->TabIndex = 49;
			this->rdtIndia->TabStop = true;
			this->rdtIndia->Text = L"India";
			this->rdtIndia->UseVisualStyleBackColor = true;
			// 
			// rdtHungría
			// 
			this->rdtHungría->AutoSize = true;
			this->rdtHungría->Location = System::Drawing::Point(380, 201);
			this->rdtHungría->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtHungría->Name = L"rdtHungría";
			this->rdtHungría->Size = System::Drawing::Size(79, 21);
			this->rdtHungría->TabIndex = 48;
			this->rdtHungría->TabStop = true;
			this->rdtHungría->Text = L"Hungría";
			this->rdtHungría->UseVisualStyleBackColor = true;
			// 
			// rdtHonduras
			// 
			this->rdtHonduras->AutoSize = true;
			this->rdtHonduras->Location = System::Drawing::Point(380, 174);
			this->rdtHonduras->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtHonduras->Name = L"rdtHonduras";
			this->rdtHonduras->Size = System::Drawing::Size(91, 21);
			this->rdtHonduras->TabIndex = 47;
			this->rdtHonduras->TabStop = true;
			this->rdtHonduras->Text = L"Honduras";
			this->rdtHonduras->UseVisualStyleBackColor = true;
			// 
			// rdtHaití
			// 
			this->rdtHaití->AutoSize = true;
			this->rdtHaití->Location = System::Drawing::Point(380, 146);
			this->rdtHaití->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtHaití->Name = L"rdtHaití";
			this->rdtHaití->Size = System::Drawing::Size(57, 21);
			this->rdtHaití->TabIndex = 46;
			this->rdtHaití->TabStop = true;
			this->rdtHaití->Text = L"Haití";
			this->rdtHaití->UseVisualStyleBackColor = true;
			// 
			// rdtGuyana
			// 
			this->rdtGuyana->AutoSize = true;
			this->rdtGuyana->Location = System::Drawing::Point(380, 119);
			this->rdtGuyana->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGuyana->Name = L"rdtGuyana";
			this->rdtGuyana->Size = System::Drawing::Size(79, 21);
			this->rdtGuyana->TabIndex = 45;
			this->rdtGuyana->TabStop = true;
			this->rdtGuyana->Text = L"Guyana";
			this->rdtGuyana->UseVisualStyleBackColor = true;
			// 
			// rdtGuinea
			// 
			this->rdtGuinea->AutoSize = true;
			this->rdtGuinea->Location = System::Drawing::Point(380, 92);
			this->rdtGuinea->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGuinea->Name = L"rdtGuinea";
			this->rdtGuinea->Size = System::Drawing::Size(75, 21);
			this->rdtGuinea->TabIndex = 44;
			this->rdtGuinea->TabStop = true;
			this->rdtGuinea->Text = L"Guinea";
			this->rdtGuinea->UseVisualStyleBackColor = true;
			// 
			// rdtGuatemala
			// 
			this->rdtGuatemala->AutoSize = true;
			this->rdtGuatemala->Location = System::Drawing::Point(380, 66);
			this->rdtGuatemala->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGuatemala->Name = L"rdtGuatemala";
			this->rdtGuatemala->Size = System::Drawing::Size(98, 21);
			this->rdtGuatemala->TabIndex = 43;
			this->rdtGuatemala->TabStop = true;
			this->rdtGuatemala->Text = L"Guatemala";
			this->rdtGuatemala->UseVisualStyleBackColor = true;
			// 
			// rdtGrecia
			// 
			this->rdtGrecia->AutoSize = true;
			this->rdtGrecia->Location = System::Drawing::Point(380, 39);
			this->rdtGrecia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGrecia->Name = L"rdtGrecia";
			this->rdtGrecia->Size = System::Drawing::Size(71, 21);
			this->rdtGrecia->TabIndex = 42;
			this->rdtGrecia->TabStop = true;
			this->rdtGrecia->Text = L"Grecia";
			this->rdtGrecia->UseVisualStyleBackColor = true;
			// 
			// rdtGranada
			// 
			this->rdtGranada->AutoSize = true;
			this->rdtGranada->Location = System::Drawing::Point(251, 390);
			this->rdtGranada->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGranada->Name = L"rdtGranada";
			this->rdtGranada->Size = System::Drawing::Size(85, 21);
			this->rdtGranada->TabIndex = 41;
			this->rdtGranada->TabStop = true;
			this->rdtGranada->Text = L"Granada";
			this->rdtGranada->UseVisualStyleBackColor = true;
			// 
			// rdtGhana
			// 
			this->rdtGhana->AutoSize = true;
			this->rdtGhana->Location = System::Drawing::Point(245, 364);
			this->rdtGhana->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGhana->Name = L"rdtGhana";
			this->rdtGhana->Size = System::Drawing::Size(72, 21);
			this->rdtGhana->TabIndex = 40;
			this->rdtGhana->TabStop = true;
			this->rdtGhana->Text = L"Ghana";
			this->rdtGhana->UseVisualStyleBackColor = true;
			// 
			// rdtGeorgia
			// 
			this->rdtGeorgia->AutoSize = true;
			this->rdtGeorgia->Location = System::Drawing::Point(245, 336);
			this->rdtGeorgia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGeorgia->Name = L"rdtGeorgia";
			this->rdtGeorgia->Size = System::Drawing::Size(80, 21);
			this->rdtGeorgia->TabIndex = 39;
			this->rdtGeorgia->TabStop = true;
			this->rdtGeorgia->Text = L"Georgia";
			this->rdtGeorgia->UseVisualStyleBackColor = true;
			// 
			// rdtGambia
			// 
			this->rdtGambia->AutoSize = true;
			this->rdtGambia->Location = System::Drawing::Point(245, 309);
			this->rdtGambia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGambia->Name = L"rdtGambia";
			this->rdtGambia->Size = System::Drawing::Size(78, 21);
			this->rdtGambia->TabIndex = 38;
			this->rdtGambia->TabStop = true;
			this->rdtGambia->Text = L"Gambia";
			this->rdtGambia->UseVisualStyleBackColor = true;
			// 
			// rdtGabón
			// 
			this->rdtGabón->AutoSize = true;
			this->rdtGabón->Location = System::Drawing::Point(245, 282);
			this->rdtGabón->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtGabón->Name = L"rdtGabón";
			this->rdtGabón->Size = System::Drawing::Size(72, 21);
			this->rdtGabón->TabIndex = 37;
			this->rdtGabón->TabStop = true;
			this->rdtGabón->Text = L"Gabón";
			this->rdtGabón->UseVisualStyleBackColor = true;
			// 
			// rdtFrancia
			// 
			this->rdtFrancia->AutoSize = true;
			this->rdtFrancia->Location = System::Drawing::Point(245, 255);
			this->rdtFrancia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtFrancia->Name = L"rdtFrancia";
			this->rdtFrancia->Size = System::Drawing::Size(76, 21);
			this->rdtFrancia->TabIndex = 36;
			this->rdtFrancia->TabStop = true;
			this->rdtFrancia->Text = L"Francia";
			this->rdtFrancia->UseVisualStyleBackColor = true;
			// 
			// rdtFinlandia
			// 
			this->rdtFinlandia->AutoSize = true;
			this->rdtFinlandia->Location = System::Drawing::Point(245, 228);
			this->rdtFinlandia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtFinlandia->Name = L"rdtFinlandia";
			this->rdtFinlandia->Size = System::Drawing::Size(86, 21);
			this->rdtFinlandia->TabIndex = 35;
			this->rdtFinlandia->TabStop = true;
			this->rdtFinlandia->Text = L"Finlandia";
			this->rdtFinlandia->UseVisualStyleBackColor = true;
			// 
			// rdtFilipinas
			// 
			this->rdtFilipinas->AutoSize = true;
			this->rdtFilipinas->Location = System::Drawing::Point(245, 201);
			this->rdtFilipinas->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtFilipinas->Name = L"rdtFilipinas";
			this->rdtFilipinas->Size = System::Drawing::Size(80, 21);
			this->rdtFilipinas->TabIndex = 34;
			this->rdtFilipinas->TabStop = true;
			this->rdtFilipinas->Text = L"Filipinas";
			this->rdtFilipinas->UseVisualStyleBackColor = true;
			// 
			// rdtEtiopía
			// 
			this->rdtEtiopía->AutoSize = true;
			this->rdtEtiopía->Location = System::Drawing::Point(245, 174);
			this->rdtEtiopía->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEtiopía->Name = L"rdtEtiopía";
			this->rdtEtiopía->Size = System::Drawing::Size(72, 21);
			this->rdtEtiopía->TabIndex = 33;
			this->rdtEtiopía->TabStop = true;
			this->rdtEtiopía->Text = L"Etiopía";
			this->rdtEtiopía->UseVisualStyleBackColor = true;
			// 
			// rdtEstonia
			// 
			this->rdtEstonia->AutoSize = true;
			this->rdtEstonia->Location = System::Drawing::Point(245, 146);
			this->rdtEstonia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEstonia->Name = L"rdtEstonia";
			this->rdtEstonia->Size = System::Drawing::Size(76, 21);
			this->rdtEstonia->TabIndex = 32;
			this->rdtEstonia->TabStop = true;
			this->rdtEstonia->Text = L"Estonia";
			this->rdtEstonia->UseVisualStyleBackColor = true;
			// 
			// rdtEstadosUnidos
			// 
			this->rdtEstadosUnidos->AutoSize = true;
			this->rdtEstadosUnidos->Location = System::Drawing::Point(245, 121);
			this->rdtEstadosUnidos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEstadosUnidos->Name = L"rdtEstadosUnidos";
			this->rdtEstadosUnidos->Size = System::Drawing::Size(124, 21);
			this->rdtEstadosUnidos->TabIndex = 31;
			this->rdtEstadosUnidos->TabStop = true;
			this->rdtEstadosUnidos->Text = L"EstadosUnidos";
			this->rdtEstadosUnidos->UseVisualStyleBackColor = true;
			// 
			// rdtEspaña
			// 
			this->rdtEspaña->AutoSize = true;
			this->rdtEspaña->Location = System::Drawing::Point(245, 94);
			this->rdtEspaña->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEspaña->Name = L"rdtEspaña";
			this->rdtEspaña->Size = System::Drawing::Size(77, 21);
			this->rdtEspaña->TabIndex = 30;
			this->rdtEspaña->TabStop = true;
			this->rdtEspaña->Text = L"España";
			this->rdtEspaña->UseVisualStyleBackColor = true;
			// 
			// rdtEslovenia
			// 
			this->rdtEslovenia->AutoSize = true;
			this->rdtEslovenia->Location = System::Drawing::Point(245, 66);
			this->rdtEslovenia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEslovenia->Name = L"rdtEslovenia";
			this->rdtEslovenia->Size = System::Drawing::Size(90, 21);
			this->rdtEslovenia->TabIndex = 29;
			this->rdtEslovenia->TabStop = true;
			this->rdtEslovenia->Text = L"Eslovenia";
			this->rdtEslovenia->UseVisualStyleBackColor = true;
			// 
			// rdtEslovaquia
			// 
			this->rdtEslovaquia->AutoSize = true;
			this->rdtEslovaquia->Location = System::Drawing::Point(245, 39);
			this->rdtEslovaquia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEslovaquia->Name = L"rdtEslovaquia";
			this->rdtEslovaquia->Size = System::Drawing::Size(98, 21);
			this->rdtEslovaquia->TabIndex = 28;
			this->rdtEslovaquia->TabStop = true;
			this->rdtEslovaquia->Text = L"Eslovaquia";
			this->rdtEslovaquia->UseVisualStyleBackColor = true;
			// 
			// rdtEmirattosÁrabesUnidos
			// 
			this->rdtEmirattosÁrabesUnidos->AutoSize = true;
			this->rdtEmirattosÁrabesUnidos->Location = System::Drawing::Point(72, 390);
			this->rdtEmirattosÁrabesUnidos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEmirattosÁrabesUnidos->Name = L"rdtEmirattosÁrabesUnidos";
			this->rdtEmirattosÁrabesUnidos->Size = System::Drawing::Size(185, 21);
			this->rdtEmirattosÁrabesUnidos->TabIndex = 27;
			this->rdtEmirattosÁrabesUnidos->TabStop = true;
			this->rdtEmirattosÁrabesUnidos->Text = L"Emirattos Árabes Unidos";
			this->rdtEmirattosÁrabesUnidos->UseVisualStyleBackColor = true;
			// 
			// rdtElSalvador
			// 
			this->rdtElSalvador->AutoSize = true;
			this->rdtElSalvador->Location = System::Drawing::Point(117, 363);
			this->rdtElSalvador->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtElSalvador->Name = L"rdtElSalvador";
			this->rdtElSalvador->Size = System::Drawing::Size(101, 21);
			this->rdtElSalvador->TabIndex = 26;
			this->rdtElSalvador->TabStop = true;
			this->rdtElSalvador->Text = L"El Salvador";
			this->rdtElSalvador->UseVisualStyleBackColor = true;
			// 
			// rdtEgipto
			// 
			this->rdtEgipto->AutoSize = true;
			this->rdtEgipto->Location = System::Drawing::Point(117, 336);
			this->rdtEgipto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEgipto->Name = L"rdtEgipto";
			this->rdtEgipto->Size = System::Drawing::Size(69, 21);
			this->rdtEgipto->TabIndex = 25;
			this->rdtEgipto->TabStop = true;
			this->rdtEgipto->Text = L"Egipto";
			this->rdtEgipto->UseVisualStyleBackColor = true;
			// 
			// rdtEcuador
			// 
			this->rdtEcuador->AutoSize = true;
			this->rdtEcuador->Location = System::Drawing::Point(117, 309);
			this->rdtEcuador->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtEcuador->Name = L"rdtEcuador";
			this->rdtEcuador->Size = System::Drawing::Size(82, 21);
			this->rdtEcuador->TabIndex = 24;
			this->rdtEcuador->TabStop = true;
			this->rdtEcuador->Text = L"Ecuador";
			this->rdtEcuador->UseVisualStyleBackColor = true;
			// 
			// rdtDinamarca
			// 
			this->rdtDinamarca->AutoSize = true;
			this->rdtDinamarca->Location = System::Drawing::Point(117, 282);
			this->rdtDinamarca->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtDinamarca->Name = L"rdtDinamarca";
			this->rdtDinamarca->Size = System::Drawing::Size(97, 21);
			this->rdtDinamarca->TabIndex = 23;
			this->rdtDinamarca->TabStop = true;
			this->rdtDinamarca->Text = L"Dinamarca";
			this->rdtDinamarca->UseVisualStyleBackColor = true;
			// 
			// rdtCuba
			// 
			this->rdtCuba->AutoSize = true;
			this->rdtCuba->Location = System::Drawing::Point(117, 255);
			this->rdtCuba->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCuba->Name = L"rdtCuba";
			this->rdtCuba->Size = System::Drawing::Size(62, 21);
			this->rdtCuba->TabIndex = 22;
			this->rdtCuba->TabStop = true;
			this->rdtCuba->Text = L"Cuba";
			this->rdtCuba->UseVisualStyleBackColor = true;
			// 
			// rdtCroacia
			// 
			this->rdtCroacia->AutoSize = true;
			this->rdtCroacia->Location = System::Drawing::Point(117, 228);
			this->rdtCroacia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCroacia->Name = L"rdtCroacia";
			this->rdtCroacia->Size = System::Drawing::Size(77, 21);
			this->rdtCroacia->TabIndex = 21;
			this->rdtCroacia->TabStop = true;
			this->rdtCroacia->Text = L"Croacia";
			this->rdtCroacia->UseVisualStyleBackColor = true;
			// 
			// rdtCostaRica
			// 
			this->rdtCostaRica->AutoSize = true;
			this->rdtCostaRica->Location = System::Drawing::Point(117, 201);
			this->rdtCostaRica->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCostaRica->Name = L"rdtCostaRica";
			this->rdtCostaRica->Size = System::Drawing::Size(97, 21);
			this->rdtCostaRica->TabIndex = 20;
			this->rdtCostaRica->TabStop = true;
			this->rdtCostaRica->Text = L"Costa Rica";
			this->rdtCostaRica->UseVisualStyleBackColor = true;
			// 
			// rdtCostadeMarfil
			// 
			this->rdtCostadeMarfil->AutoSize = true;
			this->rdtCostadeMarfil->Location = System::Drawing::Point(117, 174);
			this->rdtCostadeMarfil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCostadeMarfil->Name = L"rdtCostadeMarfil";
			this->rdtCostadeMarfil->Size = System::Drawing::Size(123, 21);
			this->rdtCostadeMarfil->TabIndex = 19;
			this->rdtCostadeMarfil->TabStop = true;
			this->rdtCostadeMarfil->Text = L"Costa de Marfil";
			this->rdtCostadeMarfil->UseVisualStyleBackColor = true;
			// 
			// rdtCoreaSur
			// 
			this->rdtCoreaSur->AutoSize = true;
			this->rdtCoreaSur->Location = System::Drawing::Point(117, 146);
			this->rdtCoreaSur->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCoreaSur->Name = L"rdtCoreaSur";
			this->rdtCoreaSur->Size = System::Drawing::Size(116, 21);
			this->rdtCoreaSur->TabIndex = 18;
			this->rdtCoreaSur->TabStop = true;
			this->rdtCoreaSur->Text = L"Corea del Sur";
			this->rdtCoreaSur->UseVisualStyleBackColor = true;
			// 
			// rdtCoreadelNorte
			// 
			this->rdtCoreadelNorte->AutoSize = true;
			this->rdtCoreadelNorte->Location = System::Drawing::Point(116, 121);
			this->rdtCoreadelNorte->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCoreadelNorte->Name = L"rdtCoreadelNorte";
			this->rdtCoreadelNorte->Size = System::Drawing::Size(129, 21);
			this->rdtCoreadelNorte->TabIndex = 17;
			this->rdtCoreadelNorte->TabStop = true;
			this->rdtCoreadelNorte->Text = L"Corea del Norte";
			this->rdtCoreadelNorte->UseVisualStyleBackColor = true;
			// 
			// rdtCongo
			// 
			this->rdtCongo->AutoSize = true;
			this->rdtCongo->Location = System::Drawing::Point(117, 94);
			this->rdtCongo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCongo->Name = L"rdtCongo";
			this->rdtCongo->Size = System::Drawing::Size(70, 21);
			this->rdtCongo->TabIndex = 16;
			this->rdtCongo->TabStop = true;
			this->rdtCongo->Text = L"Congo";
			this->rdtCongo->UseVisualStyleBackColor = true;
			// 
			// rdtColombia
			// 
			this->rdtColombia->AutoSize = true;
			this->rdtColombia->Location = System::Drawing::Point(116, 66);
			this->rdtColombia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtColombia->Name = L"rdtColombia";
			this->rdtColombia->Size = System::Drawing::Size(87, 21);
			this->rdtColombia->TabIndex = 15;
			this->rdtColombia->TabStop = true;
			this->rdtColombia->Text = L"Colombia";
			this->rdtColombia->UseVisualStyleBackColor = true;
			// 
			// rdtChina
			// 
			this->rdtChina->AutoSize = true;
			this->rdtChina->Location = System::Drawing::Point(117, 39);
			this->rdtChina->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtChina->Name = L"rdtChina";
			this->rdtChina->Size = System::Drawing::Size(65, 21);
			this->rdtChina->TabIndex = 14;
			this->rdtChina->TabStop = true;
			this->rdtChina->Text = L"China";
			this->rdtChina->UseVisualStyleBackColor = true;
			// 
			// rdtChile
			// 
			this->rdtChile->AutoSize = true;
			this->rdtChile->Location = System::Drawing::Point(5, 390);
			this->rdtChile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtChile->Name = L"rdtChile";
			this->rdtChile->Size = System::Drawing::Size(60, 21);
			this->rdtChile->TabIndex = 13;
			this->rdtChile->TabStop = true;
			this->rdtChile->Text = L"Chile";
			this->rdtChile->UseVisualStyleBackColor = true;
			// 
			// rdtCatar
			// 
			this->rdtCatar->AutoSize = true;
			this->rdtCatar->Location = System::Drawing::Point(5, 363);
			this->rdtCatar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCatar->Name = L"rdtCatar";
			this->rdtCatar->Size = System::Drawing::Size(63, 21);
			this->rdtCatar->TabIndex = 12;
			this->rdtCatar->TabStop = true;
			this->rdtCatar->Text = L"Catar";
			this->rdtCatar->UseVisualStyleBackColor = true;
			// 
			// rdtCanadá
			// 
			this->rdtCanadá->AutoSize = true;
			this->rdtCanadá->Location = System::Drawing::Point(5, 336);
			this->rdtCanadá->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtCanadá->Name = L"rdtCanadá";
			this->rdtCanadá->Size = System::Drawing::Size(78, 21);
			this->rdtCanadá->TabIndex = 11;
			this->rdtCanadá->TabStop = true;
			this->rdtCanadá->Text = L"Canadá";
			this->rdtCanadá->UseVisualStyleBackColor = true;
			// 
			// rbtCamerún
			// 
			this->rbtCamerún->AutoSize = true;
			this->rbtCamerún->Location = System::Drawing::Point(5, 309);
			this->rbtCamerún->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rbtCamerún->Name = L"rbtCamerún";
			this->rbtCamerún->Size = System::Drawing::Size(86, 21);
			this->rbtCamerún->TabIndex = 10;
			this->rbtCamerún->TabStop = true;
			this->rbtCamerún->Text = L"Camerún";
			this->rbtCamerún->UseVisualStyleBackColor = true;
			// 
			// rdtBelice
			// 
			this->rdtBelice->AutoSize = true;
			this->rdtBelice->Location = System::Drawing::Point(5, 282);
			this->rdtBelice->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtBelice->Name = L"rdtBelice";
			this->rdtBelice->Size = System::Drawing::Size(67, 21);
			this->rdtBelice->TabIndex = 9;
			this->rdtBelice->TabStop = true;
			this->rdtBelice->Text = L"Belice";
			this->rdtBelice->UseVisualStyleBackColor = true;
			// 
			// rdtBélgica
			// 
			this->rdtBélgica->AutoSize = true;
			this->rdtBélgica->Location = System::Drawing::Point(5, 255);
			this->rdtBélgica->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtBélgica->Name = L"rdtBélgica";
			this->rdtBélgica->Size = System::Drawing::Size(75, 21);
			this->rdtBélgica->TabIndex = 8;
			this->rdtBélgica->TabStop = true;
			this->rdtBélgica->Text = L"Bélgica";
			this->rdtBélgica->UseVisualStyleBackColor = true;
			// 
			// rdtBaréin
			// 
			this->rdtBaréin->AutoSize = true;
			this->rdtBaréin->Location = System::Drawing::Point(5, 228);
			this->rdtBaréin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtBaréin->Name = L"rdtBaréin";
			this->rdtBaréin->Size = System::Drawing::Size(70, 21);
			this->rdtBaréin->TabIndex = 7;
			this->rdtBaréin->TabStop = true;
			this->rdtBaréin->Text = L"Baréin";
			this->rdtBaréin->UseVisualStyleBackColor = true;
			// 
			// rdtBangladés
			// 
			this->rdtBangladés->AutoSize = true;
			this->rdtBangladés->Location = System::Drawing::Point(5, 201);
			this->rdtBangladés->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtBangladés->Name = L"rdtBangladés";
			this->rdtBangladés->Size = System::Drawing::Size(96, 21);
			this->rdtBangladés->TabIndex = 6;
			this->rdtBangladés->TabStop = true;
			this->rdtBangladés->Text = L"Bangladés";
			this->rdtBangladés->UseVisualStyleBackColor = true;
			// 
			// rdtBrasil
			// 
			this->rdtBrasil->AutoSize = true;
			this->rdtBrasil->Location = System::Drawing::Point(5, 174);
			this->rdtBrasil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtBrasil->Name = L"rdtBrasil";
			this->rdtBrasil->Size = System::Drawing::Size(64, 21);
			this->rdtBrasil->TabIndex = 5;
			this->rdtBrasil->TabStop = true;
			this->rdtBrasil->Text = L"Brasil";
			this->rdtBrasil->UseVisualStyleBackColor = true;
			// 
			// rdtAndorra
			// 
			this->rdtAndorra->AutoSize = true;
			this->rdtAndorra->Location = System::Drawing::Point(5, 146);
			this->rdtAndorra->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtAndorra->Name = L"rdtAndorra";
			this->rdtAndorra->Size = System::Drawing::Size(80, 21);
			this->rdtAndorra->TabIndex = 4;
			this->rdtAndorra->TabStop = true;
			this->rdtAndorra->Text = L"Andorra";
			this->rdtAndorra->UseVisualStyleBackColor = true;
			// 
			// rdtAlemania
			// 
			this->rdtAlemania->AutoSize = true;
			this->rdtAlemania->Location = System::Drawing::Point(5, 121);
			this->rdtAlemania->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtAlemania->Name = L"rdtAlemania";
			this->rdtAlemania->Size = System::Drawing::Size(87, 21);
			this->rdtAlemania->TabIndex = 3;
			this->rdtAlemania->TabStop = true;
			this->rdtAlemania->Text = L"Alemania";
			this->rdtAlemania->UseVisualStyleBackColor = true;
			// 
			// rdtAlbania
			// 
			this->rdtAlbania->AutoSize = true;
			this->rdtAlbania->Location = System::Drawing::Point(5, 94);
			this->rdtAlbania->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtAlbania->Name = L"rdtAlbania";
			this->rdtAlbania->Size = System::Drawing::Size(76, 21);
			this->rdtAlbania->TabIndex = 2;
			this->rdtAlbania->TabStop = true;
			this->rdtAlbania->Text = L"Albania";
			this->rdtAlbania->UseVisualStyleBackColor = true;
			// 
			// rdtAfganistán
			// 
			this->rdtAfganistán->AutoSize = true;
			this->rdtAfganistán->Location = System::Drawing::Point(5, 66);
			this->rdtAfganistán->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtAfganistán->Name = L"rdtAfganistán";
			this->rdtAfganistán->Size = System::Drawing::Size(96, 21);
			this->rdtAfganistán->TabIndex = 1;
			this->rdtAfganistán->TabStop = true;
			this->rdtAfganistán->Text = L"Afganistán";
			this->rdtAfganistán->UseVisualStyleBackColor = true;
			// 
			// rdtArgentina
			// 
			this->rdtArgentina->AutoSize = true;
			this->rdtArgentina->Location = System::Drawing::Point(5, 39);
			this->rdtArgentina->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rdtArgentina->Name = L"rdtArgentina";
			this->rdtArgentina->Size = System::Drawing::Size(90, 21);
			this->rdtArgentina->TabIndex = 0;
			this->rdtArgentina->TabStop = true;
			this->rdtArgentina->Text = L"Argentina";
			this->rdtArgentina->UseVisualStyleBackColor = true;
			// 
			// LBLLEMPIRA
			// 
			this->LBLLEMPIRA->AutoSize = true;
			this->LBLLEMPIRA->BackColor = System::Drawing::Color::Transparent;
			this->LBLLEMPIRA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLLEMPIRA->ForeColor = System::Drawing::Color::Aqua;
			this->LBLLEMPIRA->Location = System::Drawing::Point(732, 570);
			this->LBLLEMPIRA->Name = L"LBLLEMPIRA";
			this->LBLLEMPIRA->Size = System::Drawing::Size(56, 26);
			this->LBLLEMPIRA->TabIndex = 116;
			this->LBLLEMPIRA->Text = L"LPS";
			this->LBLLEMPIRA->Visible = false;
			// 
			// txtp
			// 
			this->txtp->Location = System::Drawing::Point(401, 722);
			this->txtp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtp->Name = L"txtp";
			this->txtp->Size = System::Drawing::Size(269, 22);
			this->txtp->TabIndex = 117;
			// 
			// btnPrecio
			// 
			this->btnPrecio->BackColor = System::Drawing::Color::Transparent;
			this->btnPrecio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrecio->ForeColor = System::Drawing::Color::Black;
			this->btnPrecio->Location = System::Drawing::Point(48, 722);
			this->btnPrecio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPrecio->Name = L"btnPrecio";
			this->btnPrecio->Size = System::Drawing::Size(135, 37);
			this->btnPrecio->TabIndex = 118;
			this->btnPrecio->Text = L"Precio";
			this->btnPrecio->UseVisualStyleBackColor = false;
			this->btnPrecio->Click += gcnew System::EventHandler(this, &frmBoletos::btnPrecio_Click);
			// 
			// txtArg
			// 
			this->txtArg->Location = System::Drawing::Point(885, 570);
			this->txtArg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtArg->Name = L"txtArg";
			this->txtArg->Size = System::Drawing::Size(100, 22);
			this->txtArg->TabIndex = 119;
			this->txtArg->Text = L"9816";
			this->txtArg->Visible = false;
			// 
			// bntAgr
			// 
			this->bntAgr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntAgr->Location = System::Drawing::Point(727, 698);
			this->bntAgr->Margin = System::Windows::Forms::Padding(4);
			this->bntAgr->Name = L"bntAgr";
			this->bntAgr->Size = System::Drawing::Size(163, 49);
			this->bntAgr->TabIndex = 120;
			this->bntAgr->Text = L"AGREGAR";
			this->bntAgr->UseVisualStyleBackColor = true;
			// 
			// bntMostr
			// 
			this->bntMostr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntMostr->Location = System::Drawing::Point(928, 698);
			this->bntMostr->Margin = System::Windows::Forms::Padding(4);
			this->bntMostr->Name = L"bntMostr";
			this->bntMostr->Size = System::Drawing::Size(163, 49);
			this->bntMostr->TabIndex = 121;
			this->bntMostr->Text = L"MOSTRAR";
			this->bntMostr->UseVisualStyleBackColor = true;
			this->bntMostr->Click += gcnew System::EventHandler(this, &frmBoletos::bntMostr_Click);
			// 
			// frmBoletos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1256, 837);
			this->Controls->Add(this->bntMostr);
			this->Controls->Add(this->bntAgr);
			this->Controls->Add(this->txtArg);
			this->Controls->Add(this->btnPrecio);
			this->Controls->Add(this->txtp);
			this->Controls->Add(this->LBLLEMPIRA);
			this->Controls->Add(this->grbDestino);
			this->Controls->Add(this->TXTBOLETOS);
			this->Controls->Add(this->cboAerolinea);
			this->Controls->Add(this->cbonasiento);
			this->Controls->Add(this->cboOrigen);
			this->Controls->Add(this->cboDestino);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->lblnboleto);
			this->Controls->Add(this->lblAerolinea);
			this->Controls->Add(this->lblnasiento);
			this->Controls->Add(this->lblorigen);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->lblnombre);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmBoletos";
			this->Text = L"Boletos";
			this->grbDestino->ResumeLayout(false);
			this->grbDestino->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnPrecio_Click(System::Object^ sender, System::EventArgs^ e) {
	double prize = Convert::ToDouble(txtArg->Text);
	/*lblP->Text = prize.ToString();*/
	if (rdtArgentina->Checked)
		txtp->Text = String::Format("$9816");
	if (rdtAfganistán->Checked)
		txtp->Text = String::Format("$32598");
	if (rdtAlbania->Checked)
		txtp->Text = String::Format("$9586");
	if (rdtAlemania->Checked)
		txtp->Text = String::Format("$10249");
	if (rdtAndorra->Checked)
		txtp->Text = String::Format("$32192");
	if (rdtBrasil->Checked)
		txtp->Text = String::Format("$612");
	if (rdtBangladés->Checked)
		txtp->Text = String::Format("$18021");
	if (rdtBaréin->Checked)
		txtp->Text = String::Format("$3220");
	if (rdtBélgica->Checked)
		txtp->Text = String::Format("$1465");
	if (rdtBelice->Checked)
		txtp->Text = String::Format("$980");
	if (rbtCamerún->Checked)
		txtp->Text = String::Format("$21299");
	if (rdtCanadá->Checked)
		txtp->Text = String::Format("$4509");
	if (rdtCatar->Checked)
		txtp->Text = String::Format("$1744");
	if (rdtChile->Checked)
		txtp->Text = String::Format("$866");
	if (rdtChina->Checked)
		txtp->Text = String::Format("$3000");
	if (rdtColombia->Checked)
		txtp->Text = String::Format("$3802");
	if (rdtCongo->Checked)
		txtp->Text = String::Format("$4375");
	if (rdtCoreadelNorte->Checked)
		txtp->Text = String::Format("$18456");
	if (rdtCoreaSur->Checked)
		txtp->Text = String::Format("$21669");
	if (rdtCostadeMarfil->Checked)
		txtp->Text = String::Format("$25498");
	if (rdtCostaRica->Checked)
		txtp->Text = String::Format("$327");
	if (rdtCroacia->Checked)
		txtp->Text = String::Format("$10000");
	if (rdtCuba->Checked)
		txtp->Text = String::Format("$742");
	if (rdtDinamarca->Checked)
		txtp->Text = String::Format("$1200");
	if (rdtEcuador->Checked)
		txtp->Text = String::Format("$10243");
	if (rdtEgipto->Checked)
		txtp->Text = String::Format("$2000");
	if (rdtElSalvador->Checked)
		txtp->Text = String::Format("$440");
	if (rdtEmirattosÁrabesUnidos->Checked)
		txtp->Text = String::Format("$1000");
	if (rdtEslovaquia->Checked)
		txtp->Text = String::Format("$24728");
	if (rdtEslovenia->Checked)
		txtp->Text = String::Format("$1800");
	if (rdtEspaña->Checked)
		txtp->Text = String::Format("$8000");
	if (rdtEstadosUnidos->Checked)
		txtp->Text = String::Format("$676");
	if (rdtEstonia->Checked)
		txtp->Text = String::Format("$20144");
	if (rdtEtiopía->Checked)
		txtp->Text = String::Format("$20756");
	if (rdtFilipinas->Checked)
		txtp->Text = String::Format("$14548");
	if (rdtFinlandia->Checked)
		txtp->Text = String::Format("$16417");
	if (rdtFrancia->Checked)
		txtp->Text = String::Format("$10846");
	if (rdtGabón->Checked)
		txtp->Text = String::Format("$900");
	if (rdtGambia->Checked)
		txtp->Text = String::Format("$700");
	if (rdtGeorgia->Checked)
		txtp->Text = String::Format("$500");
	if (rdtGhana->Checked)
		txtp->Text = String::Format("$15100");
	if (rdtGranada->Checked)
		txtp->Text = String::Format("1000");
	if (rdtCroacia->Checked)
		txtp->Text = String::Format("$10000");
	if (rdtGrecia->Checked)
		txtp->Text = String::Format("$1300");
	if (rdtGuatemala->Checked)
		txtp->Text = String::Format("$3976");
	if (rdtGuinea->Checked)
		txtp->Text = String::Format("$700");
	if (rdtGuyana->Checked)
		txtp->Text = String::Format("2000");
	if (rdtHaití->Checked)
		txtp->Text = String::Format("500");
	if (rdtHonduras->Checked)
		txtp->Text = String::Format("$18000");
	if (rdtHungría->Checked)
		txtp->Text = String::Format("$1832");
	if (rdtIndia->Checked)
		txtp->Text = String::Format("$1600");
	if (rdtIndonesia->Checked)
		txtp->Text = String::Format("$20242");
	if (rdtIrak->Checked)
		txtp->Text = String::Format("$31411");
	if (rdtIrán->Checked)
		txtp->Text = String::Format("$4450");
	if (rdtIrlanda->Checked)
		txtp->Text = String::Format("$14987");
	if (rdtIslandia->Checked)
		txtp->Text = String::Format("$1400");
	if (rdtIsrael->Checked)
		txtp->Text = String::Format("$15000");
	if (rdtItalia->Checked)
		txtp->Text = String::Format("$1057");
	if (rdtJamaica->Checked)
		txtp->Text = String::Format("$850");
	if (rdtJapón->Checked)
		txtp->Text = String::Format("$15870");
	if (rdtJordania->Checked)
		txtp->Text = String::Format("$2016");
	if (rdtKenia->Checked)
		txtp->Text = String::Format("$11225");
	if (rdtKiribati->Checked)
		txtp->Text = String::Format("$2000");
	if (rdtKosovo->Checked)
		txtp->Text = String::Format("$5000");
	if (rdtKuwait->Checked)
		txtp->Text = String::Format("$492");
	if (rdtLaos->Checked)
		txtp->Text = String::Format("$737");
	if (rdtLiechtenstein->Checked)
		txtp->Text = String::Format("$28253");
	if (rdtLuxemburgo->Checked)
		txtp->Text = String::Format("$1272");
	if (rdtMacednoiadelNorte->Checked)
		txtp->Text = String::Format("$9928");
	if (rdtMadagascar->Checked)
		txtp->Text = String::Format("$29839");
	if (rdtMalasia->Checked)
		txtp->Text = String::Format("$988");
	if (rdtMalasia->Checked)
		txtp->Text = String::Format("$988");
	if (rdtMaldivas->Checked)
		txtp->Text = String::Format("$1770");
	if (rdtMalta->Checked)
		txtp->Text = String::Format("$7800");
	if (rdtMarruecos->Checked)
		txtp->Text = String::Format("$13000");
	if (rdtMauricio->Checked)
		txtp->Text = String::Format("$17227");
	if (rdtMexico->Checked)
		txtp->Text = String::Format("$3500");
	if (rdtMicronesia->Checked)
		txtp->Text = String::Format("$2000");
	if (rdtMónaco->Checked)
		txtp->Text = String::Format("$1500");
	if (rdtMongolia->Checked)
		txtp->Text = String::Format("$700");
	if (rdtMontenegro->Checked)
		txtp->Text = String::Format("$1200");
	if (rdtMozambique->Checked)
		txtp->Text = String::Format("$1053");
	if (rdtNepal->Checked)
		txtp->Text = String::Format("$14431");
	if (rdtNicaragua->Checked)
		txtp->Text = String::Format("$600");
	if (rdtNigeria->Checked)
		txtp->Text = String::Format("$1800");
	if (rdtNuevaZelanda->Checked)
		txtp->Text = String::Format("$40490");
	if (rdtPaísesBajos->Checked)
		txtp->Text = String::Format("$900");
	if (rdtPanamá->Checked)
		txtp->Text = String::Format("$1228");
	if (rdtParaguay->Checked)
		txtp->Text = String::Format("$915");
	if (rdtPerú->Checked)
		txtp->Text = String::Format("$866");
	if (rdtPolonia->Checked)
		txtp->Text = String::Format("$21230");
	if (rdtPortugal->Checked)
		txtp->Text = String::Format("$17000");
	if (rdtReinoUnido->Checked)
		txtp->Text = String::Format("$18000");
	if (rdtRepúblicaCheca->Checked)
		txtp->Text = String::Format("$16343");
	if (rdtRepublicaDominicana->Checked)
		txtp->Text = String::Format("$850");
	if (rdtRumania->Checked)
		txtp->Text = String::Format("$19416");
	if (rdtRusia->Checked)
		txtp->Text = String::Format("$16000");
	if (rdtSamoa->Checked)
		txtp->Text = String::Format("$2000");
	if (rdtSenegal->Checked)
		txtp->Text = String::Format("$32284");
	if (rdtSerbia->Checked)
		txtp->Text = String::Format("$10000");
	if (rdtSingapur->Checked)
		txtp->Text = String::Format("$2000");
	if (rdtSomalia->Checked)
		txtp->Text = String::Format("$819");
	if (rdtSudáfrica->Checked)
		txtp->Text = String::Format("$11180");
	if (rdtSuecia->Checked)
		txtp->Text = String::Format("$8800");
	if (rdtSuiza->Checked)
		txtp->Text = String::Format("$3000");
	if (rdtSurinam->Checked)
		txtp->Text = String::Format("$4000");
	if (rdtTailandia->Checked)
		txtp->Text = String::Format("$2800");
	if (rdtTaiwán->Checked)
		txtp->Text = String::Format("$1800");
	if (rdtTrinidadyTobago->Checked)
		txtp->Text = String::Format("$1900");
	if (rdtTurquía->Checked)
		txtp->Text = String::Format("$949");



}
private: bool TextChanged = false;
private: System::Void bntMostr_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRegistroBOLETO^ formulario = gcnew frmRegistroBOLETO;
	formulario->Show();

}
private: System::Void txtNombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->txtNombre->Text->Contains(".") && !this->txtid->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
	
}

private: System::Void txtid_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.'){
		if (this->txtid->Text->Contains(".") && !this->txtid->SelectedText->Contains(".") )
		e->Handled = true;
	}
	
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}


private: System::Void txtFecha_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.') {
		if (this->txtFecha->Text->Contains(".") && !this->txtid->SelectedText->Contains("."))
			e->Handled = true;
	}

	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void txtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	TextChanged = true;
}
private: System::Void txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
private: System::Void txtFecha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextChanged = true;
}
};
}
