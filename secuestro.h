#include "casos.h"
#include "persona.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Secuestro: public Casos{
	string nombre, lugar, motivo, cerrado;
	int rescate;
	double cantidad;
public:
	Secuestro(int, vector<Investigador>, vector<Evidencias>, string, string, int, string, string, string, string, int);
	Secuestro(const Secuestro&);
	virtual string toString()const;
	string getNombre()const;
	string getLugar()const;
	string getMotivo()const;
	string getCerrado()const;
};