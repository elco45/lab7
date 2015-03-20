#include "persona.h"
#include "admin.h"

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

/*Admin::Admin(string clave, string puesto):clave(clave), puesto(puesto) {

}*/

Admin::Admin(string name, string user, string password,int age, int id, string birth,  string clave, string puesto) 
	:Persona(name, user, password, age, id, birth), clave(clave), puesto(puesto) {

}
Admin::Admin(const Admin& otra):Persona(otra), clave(otra.clave), puesto(otra.puesto) {

}
string Admin::toString()const{
	stringstream ss;
	ss << "Admin: "<<endl
		<<Persona::toString() 
		<<"Clave: " << clave <<endl
		<<"Puesto: " << puesto<<endl;
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