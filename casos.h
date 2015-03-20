#pragma once
#include "persona.h"
#include "evidencias.h"
#include "investigador.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class Casos{
	int numero_caso;
	vector<Persona>investigadores;
	vector<Evidencias>evidencia;
	string hora;
	string fecha;
	string lugar;
	int estado;
public:
	Casos(int, vector<Persona>,vector<Evidencias>,string,string,string,int);
	Casos(const Casos&);
	virtual string toString()const;
	const vector<Persona> getInvestigadores()const;
	const Evidencias getEvidencias(int)const;
	const string getHora()const;
	const string getFecha()const;
	const int getEstado()const;
	const int getNumero_caso()const;
};