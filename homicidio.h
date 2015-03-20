#include "casos.h"
#include "persona.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Homicidio: public Casos{
	vector<Persona> sospechosos;
	string culpable;
	string victima;
public:
	Homicidio(int, vector<Investigador>, vector<Evidencias>, string, string, string, int, vector<Persona>, string, string);
	Homicidio(const Homicidio&);
	virtual string toString()const;
	string getCulpable()const;
	string getVictima()const;
	void setCulpable(string);
	void setVictima(string);
};