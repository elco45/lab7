#pragma once

#include "persona.h"
#include <string>
using std::string;

class Forense: public Persona{
	string fechai, horario;
public:
	Forense(string, string);
	Forense(string, string, string, int, string, string, string, string);
	Forense(const Forense&);
	virtual string toString()const;
	string getFechai()const;
	string getHorario()const;
	void setFechai(string);
	void setHorario(string);

	/* data */
};