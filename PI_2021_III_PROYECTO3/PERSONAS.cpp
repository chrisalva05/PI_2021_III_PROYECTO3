#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <cstdlib>
#include "PERSONAS.h"

using namespace std;

Personas::Personas() {
	establcernumero_de_seguro("");
	establecerNombre("");
	establecerApellido("");
	establecerEdad("");
	establecerId("");
	establecerEmail("");
}
Personas::Personas(string Nombre, string apellido, string años, string identidad, string Email1, string seguro)
{
	establcernumero_de_seguro(seguro);
	establecerNombre(Nombre);
	establecerApellido(apellido);
	establecerEdad(años);
	establecerId(identidad);
	establecerEmail(Email1);
}
void Personas::establcernumero_de_seguro(string seguro)
{

	numero_de_seguro = seguro;
}
string Personas::obtenernumero_de_seguro() const
{
	return numero_de_seguro;
}
void Personas::establecerNombre(string Nombre)
{

	Nombre = Nombre;
}
string Personas::obtenerNombre() const
{
	return Nombre;
}
void Personas::establecerApellido(string apellido)
{
	apellido = apellido;
}
string Personas::obtenerApellido() const
{
	return Apellido;
}

void Personas::establecerEdad(string años)
{
	Edad = años;
}
string Personas::obtenerEdad() const
{
	return Edad;
}
void Personas::establecerId(string identidad)
{
	Id = identidad;
}
string Personas::obtenerId() const
{
	return Id;
}
void Personas::establecerEmail(string Email1)
{
	Email = Email1;
}
string Personas::obtenerEmail() const
{
	return Email;
}