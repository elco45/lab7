#include "persona.h"
#include "casos.h"
#include "himicidio.h"
#include <string>
#include <sstream>
#include <vector>

using std::string;
using std::stringstream;
using std::vector;
Homiciodio::Homicidio(int numero_caso, vector<Investigador>investigadores,vector<Evidencias>evidencia,string hora,string fecha,string estado,
	vector<Persona> sospechosos,Persona culpable,Persona victima): Casos(numero_caso,investigadores,evidencia,hora,fecha,estado),
	sospechosos(sospechosos),culpable(culpable),victima(victima)
{

}

Homiciodio::Homiciodio(const Homiciodio& other):Casos(Homiciodio),sospechosos(other.sospechosos),culpable(other.culpable),
victima(other.victima){
	
}