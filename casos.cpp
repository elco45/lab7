#include "casos.h"
#include "evidencias.h"
#include "persona.h"
#include "investigador.h"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

Casos::Casos(int numero_caso, vector<Persona> investigadores, vector<Evidencias> evidencia,string lugar,string hora, string fecha, int estado){
	this->numero_caso=numero_caso;
	this->investigadores=investigadores;
	this->evidencia=evidencia;
	this->hora=hora;
	this->fecha=fecha;
	this->lugar=lugar;
	this->estado=estado;
}
Casos::Casos(const Casos& other)
	:numero_caso(other.numero_caso),investigadores(other.investigadores), evidencia(other.evidencia),lugar(other.lugar),hora(other.hora),fecha(other.fecha)
	,estado(other.estado){

}

string Casos::toString()const{
	stringstream ss;
	ss<<"Caso numero: "<<numero_caso<<" Fecha: "<<fecha<<" Hora: "<<hora << " Lugar: " << lugar<<" Estado: "<<estado<<endl<<"Investigadores: "<<endl;
	for(int i=0; i<investigadores.size(); i++){
		ss<<investigadores.at(i).toString()<<endl;
	}
	ss<<"Evidencias"<<endl;
	for(int i=0; i<evidencia.size(); i++){
		ss<<evidencia.at(i).toString()<<endl;
	}
	return ss.str();
}
const vector<Persona> Casos::getInvestigadores()const{
  	return investigadores;
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
const int Casos::getEstado()const{
	return estado;
}
const int Casos::getNumero_caso()const{
	return numero_caso;
}
const string getLugar()const{
	return lugar
}