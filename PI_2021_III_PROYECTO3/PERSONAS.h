#ifndef PERSONAS_H
#define PERSONAS_H

#include <string>
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <msclr/marshal_cppstd.h>

class Personas
{
public:
	Personas();
	Personas(std::string, std::string,   std::string, std::string, std::string , std::string);
	~Personas() {};
	void establcernumero_de_seguro(const std::string);
	std::string obtenernumero_de_seguro() const;

	void establecerNombre(const std::string);
	std::string obtenerNombre() const;

	void establecerApellido(const std::string);
	std::string obtenerApellido() const;


	void establecerEdad(const std::string);
	std::string obtenerEdad() const;

	void establecerId(const std::string);
	std::string obtenerId() const;

	void establecerEmail(const std::string);
	std::string obtenerEmail() const;
	//virtual void imprimir() const;
private:
	std::string numero_de_seguro;
	std::string Nombre;
	std::string Apellido;
	std::string Edad;
	std::string Id;
	std::string Email;
};

#endif // !PERSONAS_H