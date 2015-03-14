#include "casos.h"
#include <string>
#include <sstream>
#include <vector>

using std::vector;
using std::string;
using std::stringstream;

Casos::Casos(int numero_caso, vector<Persona> investigadores, vector<Evidencias> evidencia,string hora, string fecha, string estado){
	this->numero_caso=numero_caso;
	this->investigadores=investigadores;
	this->evidencia=evidencia;
	this->hora=hora;
	this->fecha=fecha;
	this->estado=estado;
}

const string Casos::toString()const{
	stringstream ss;
	ss<<"Caso numero: "<<numero_caso<<" Fecha: "<<fecha<<" Hora: "<<hora<<" Estado: "<<estado<<endl<<"Investigadores"<<endl;
	for(int i=0; i<investigadores.size(); i++){
		ss<<investigadores.at(i).toString()<<endl;
	}
	ss<<"Evidencias"<<endl;
	for(int i=0; i<evidencia.size(); i++){
		ss<<evidencia.at(i).toString()<<endl;
	}

}
const vector<Investigador> Casos::getInvestigadores()const{
  	return investigadores;
}
const Investigador Casos::getInvestigadores(int posicion)const{
  	return investigadores.at(posicion);
}
const Evidencias Casos::getEvidencias(int posicion)const{
	return evidencia.at(posicion);
}
const string Casos::getHora()const{
	return hora;
}
const string Casos::getFecha()const{
	return fecha;
}
const string Casos::getEstado()const{
	return estado;
}
const int Casos::getNumero_caso()const{
	return numero_caso;
}
void Casos::setInvestigadores(vector<Investigador>investigadores){
	this->investigadores=investigadores;
}
void Casos::setInvestigadores(Investigador detective){
	this->investigadores.push_back(detective);
}
void Casos::setEvidencias(vector<Evidencias>evidencia){
	this->evidencia=evidencia;
}
void Casos::setEvidencias(Evidencias prueba){
	this->evidencia.push_back(prueba);
}
void Casos::setHora(string hora){
	this->hora=hora;
}
void Casos::setFecha(string fecha){
	this->fecha=fecha;
}
void Casos::setEstado(string estado){
	this->estado=estado;
}