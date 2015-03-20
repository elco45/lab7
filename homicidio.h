#include "casos.h"
#include "persona.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Homicidio: public casos{
	vector<Persona>sospechosos;
	Persona culpable;
	Persona victima;
public:
	Homicidio(int, vector<Investigador>,vector<Evidencias>,string,string,string,vector<Persona>,Persona,Persona);
	Homicidio(const Homicidio&);
	virtual string toString()const;
	const vector<Persona> getSospechosos()const;
	const Persona getSospechosos(int)const;
	const Persona getCulpable()const;
	const Persona getVictima()const;
	void setSospechosos();
	void setSospechosos(int);
	void setCulpable();
	void setVictima();

}