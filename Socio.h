#ifndef SOCIO_H
#define SOCIO_H
#include <string>

class Socio
{
private:
	std::string ci;
	std::string nombre;

public:
	Socio();
	Socio(std::string ci, std::string nombre);
	std::string getCi();
	std::string getNombre();
	void setCi(std::string ci);
	void setNombre(std::string nombre);
	~Socio();
};

#endif
