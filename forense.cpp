#include "persona.h"
#include "forense.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Forense::Forense(string fechai, string horario):fechai(fechai), horario(horario) {

}
Forense::Forense(string name, string user, string password, int age, string id, string birth, string fechai, string horario)
	:Persona(name, user, password, age, id, birth), fechai(fechai), horario(horario) {

}
Forense::Forense(const Forense& otra):Persona(otra), fechai(otra.fechai), horario(otra.horario) {

}
string Forense::toString()const{
	stringstream ss;
	ss << Persona::toString() << " Fecha de ingreso: " << fechai << " Horario: " << horario;
	return ss.str();
}
string Forense::getFechai()const{
	return fechai;
}
string Forense::getHorario()const{
	return horario;
}
void Forense::setFechai(string fechai){
	this->fechai = fechai;
}
void Forense::setHorario(string horario){
	this->horario = horario;
}
