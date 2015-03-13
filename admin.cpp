#include "persona.h"
#include "admin.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Admin::Admin(string clave, string puesto):clave(clave), puesto(puesto) {

}

Admin::Admin(string clave, string puesto, string name, string user, string password, int age, string id, string birth) 
	:Persona(name, user, password, age, id, birth), clave(clave), puesto(puesto) {

}
Admin::Admin(const Admin& otra):Persona(otra), clave(otra.clave), puesto(otra.puesto) {

}
string Admin::toString()const{
	stringstream ss;
	ss << Persona::toString() << " Clave: " << clave << " Puesto: " << puesto;
	return ss.str();
}
string Admin::getClave()const{
	return clave;
}
string Admin::getPuesto()const{
	return puesto;
}
void Admin::setClave(string clave){
	this->clave = clave;
}
void Admin::setPuesto(string puesto){
	this->puesto = puesto;
}