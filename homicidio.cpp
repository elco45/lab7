#include "persona.h"
#include "casos.h"
#include "homicidio.h"
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::vector;

Homicidio::Homicidio(int numero_caso, vector<Persona> investigadores, vector<Evidencias> evidencia, string lugar, string hora, string fecha, int estado,
				vector<Persona> sospechosos,string culpable,string victima): Casos(numero_caso, investigadores, evidencia, lugar, hora, fecha, estado),
				sospechosos(sospechosos), culpable(culpable), victima(victima){

}
Homicidio::Homicidio(const Homicidio& other):Casos(other),sospechosos(other.sospechosos),culpable(other.culpable),
						victima(other.victima){
	
}
string Homicidio::toString()const{
	stringstream ss;
	ss << Casos::toString() << " Sospechosos: " << endl;
	for(int i=0; i< sospechosos.size(); i++){
		ss << sospechosos.at(i).toString()<<endl;
	}
	ss << " Sospechoso Principal/Culpable: " << culpable << " Víctima: " << victima;
	return ss.str();
}
string Homicidio::getCulpable()const{
	return culpable;
}
string Homicidio::getVictima()const{
	return victima;
}
void Homicidio::setCulpable(string culpable){
	this->culpable = culpable;
}
void Homicidio::setVictima(string victima){
	this->victima = victima;
}