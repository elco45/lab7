#include "persona.h"
#include "admin.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Admin::Admin(string clave, string puesto){

}
Admin::Admin(const Admin& otra){

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