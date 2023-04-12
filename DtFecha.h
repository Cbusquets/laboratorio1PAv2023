#ifndef DTFECHA_H
#define DTFECHA_H
#include <iostream>
#include <stdexcept>

class DtFecha
{
private:
	int dia;
	int mes;
	int anio;

public:
	DtFecha();
	DtFecha(int dia, int mes, int anio);
	int getAnio();
	int getMes();
	int getDia();
	friend std::ostream &operator<<(std::ostream &o, const DtFecha &fecha);
	~DtFecha();
};

#endif
