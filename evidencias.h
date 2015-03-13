#ifndef EVIDENCIAS_H
#define EVIDENCIAS_H

#include <string>
using std::string;

class Evidencias{
	string nombre;
	string objeto;
	string lugar;
	int huellas;
	int procesada;
public:
	Evidencias(string,string,string,int,int);
	Evidencias(const Evidencias&);
	string toString()const;
	string getNombre()const;
	string getTipo()const;
	string getLugar()const;
	int getHuellas()const;
	int getProcesada()const;
	void setNombre(string);
	void setObjeto(string);
	void setLugar(string);
	void setHuellas(int);
	void setProcesada(int);
};

#endif