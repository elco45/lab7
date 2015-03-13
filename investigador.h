#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H
#include <string>
#include "persona.h"
using std::string;

class Investigador: public Persona{
	int atendidos;
	int cerrados;
	int sinresolver;
public:
	Investigador(int,int,int);
	Investigador(string,string,string,int,string,string,int,int,int);
	Investigador(const Investigador&);
	virtual string toString()const;
	int getAtendidos()const;
	int getCerrados()const;
	int getSinresolver()const;
	void setAtendidos(int);
	void setCerrados(int);
	void setSinresolver(int);
};

#endif