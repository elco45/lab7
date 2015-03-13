#pragma once

#include <vector>
#include <string>
using std::vector;
using std::string;

class Secuestros: public Casos {
	string nombre, lugar, motivo;
	int rescate, estado;//cambiar el nombre de la variable estado
	double cantidad;
public:
	Secuestros(string, string, string, int, double, int);
	Secuestros(int, vector<Investigador>, vector<Evidencias>, string, string, string, string, string, string, int, double, int);
	Secuestros(const Secuestros&);
	virtual string toString()const;
	string getNombre()const;
	string getLugar()const;
	string getMotivo()const;
	int getRescate()const;
	double getCantidad()const;
	int getEstado()const;
	void setNombre(string);
	void setLugar(string);
	void setMotivo(string);
	void setRescate(int);
	void setCantidad(double);
	void setEstado(int);

	/* data */
};