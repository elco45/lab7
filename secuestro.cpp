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

Secuestro::Secuestro(int numero_caso, vector<Investigador> investigadores, vector<Evidencias> evidencia,string hora, string fecha, int estado,
					 string nombre, string lugar, string motivo, string cerrado, int rescate)
					:Casos(numero_caso, investigadores, evidencia, hora, fecha, estado), 
					nombre(nombre), lugar(lugar), motivo(motivo), cerrado(cerrado), rescate(rescate), cantidad(0.0) {

}
Secuestro::Secuestro(const Secuestro& secuestro):Casos(secuestro), nombre(secuestro.nombre), lugar(secuestro.lugar), motivo(secuestro.motivo),
					cerrado(secuestro.cerrado), rescate(secuestro.rescate), cantidad(secuestro.cantidad) {

}
string Secuestro::toString()const{
	stringstream ss;
	ss << Casos::toString() << " Nombre de la víctima: " << nombre << " Lugar donde fue secuestrado: " << lugar << " Motivo: " << motivo
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
string Secuestro::getLugar()const{
	return lugar;
}
string Secuestro::getMotivo()const{
	return motivo;
}
string Secuestro::getCerrado()const{
	return cerrado;
}	