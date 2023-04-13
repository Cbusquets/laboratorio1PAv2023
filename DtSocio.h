#ifndef DTSOCIO_H
#define DTSOCIO_H
#include <string>
#include <iostream>
class DtSocio
{
private:
	int ci;
	std::string nombre;

public:
	DtSocio();
	DtSocio(int ci, std::string nombre);
	int getCi();
	std::string getNombre();
	~DtSocio();
};

#endif
