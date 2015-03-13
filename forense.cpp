#include "persona.h"
#include "forense.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Forense(string fechai, string horario):fechai(fechai), horario(horario) {

}
Forense(string name, string user, string password, int age, string id, string birth, string fechai, string horario)
	:Persona(name, user, password, age, id, birth), fechai(fechai), horario(horario) {

}
Forense(const Forense& otra):Persona(otra), fechai(otra.fechai), horario(otra.horario) {

}
virtual string toString()const{
	stringstream ss;
	ss << Persona::toString() << " Fecha de ingreso: " << fechai << " Horario: " << horario;
	return ss.str();
}
string getFechai()const{
	return fechai;
}
string getHorario()const{
	return horario;
}
void setFechai(string fechai){
	this->fechai = fechai;
}
void setHorario(string horario){
	this->horario = horario;
}
