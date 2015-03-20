#include "persona.h"
#include "casos.h"
#include "secuestro.h"
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::vector;

Secuestro::Secuestro(int numero_caso, vector<Persona> investigadores, vector<Evidencias> evidencia, string lugar, string hora, string fecha, int estado,
					 string nombre, string motivo, string cerrado, double cantidad, int rescate)
					:Casos(numero_caso, investigadores, evidencia, lugar, hora, fecha, estado), 
					nombre(nombre), motivo(motivo), cerrado(cerrado), rescate(rescate), cantidad(cantidad) {

}
Secuestro::Secuestro(const Secuestro& secuestro):Casos(secuestro), nombre(secuestro.nombre), motivo(secuestro.motivo),
					cerrado(secuestro.cerrado), rescate(secuestro.rescate), cantidad(secuestro.cantidad) {
}
string Secuestro::toString()const{
	stringstream ss;
	ss << Casos::toString() << "Nombre de la víctima: " << nombre << endl << " Motivo: " << motivo << endl
		<< " Pide rescate? ";
	if(rescate == 0){
		ss << "si " << " Cantidad: " << cantidad;
	}else{
		ss << "no.";
	}
	return ss.str();
}
string Secuestro::getNombre()const{
	return nombre;
}
string Secuestro::getMotivo()const{
	return motivo;
}
string Secuestro::getCerrado()const{
	return cerrado;
}	