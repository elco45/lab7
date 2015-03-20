#ifndef EVIDENCIAS_H
#define EVIDENCIAS_H

#include <string>
using std::string;

class Evidencias{
	string nombre;
	string tipo;
	string lugar;
	string huellas;
	string procesada;
public:
	Evidencias(string,string,string,string,string);
	Evidencias(const Evidencias&);
	string toString()const;
	string getNombre()const;
	string getTipo()const;
	string getLugar()const;
	string getHuellas()const;
	string getProcesada()const;
	void setNombre(string);
	void setTipo(string);
	void setLugar(string);
	void setHuellas(string);
	void setProcesada(string);
};

#endif