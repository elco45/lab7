#include "evidencias.h"
#include <string>
#include <sstream>
using namespace std;

Evidencias::Evidencias(string nombre, string tipo,string lugar, int huellas,int procesada){
	this->nombre=nombre;
	this->tipo=tipo;
	this->lugar=lugar;
	this->huellas=huellas;
	this->procesada=procesada;
}

Evidencias::Evidencias(const Evidencias& other)
	:nombre(other.nombre),tipo(other.tipo),lugar(other.tipo),huellas(other.huellas),procesada(other.procesada){
}

string Evidencias::toString()const{
	stringstream ss;
	ss<<"Evidencia ("<<nombre<<", "<<tipo<<", "<<lugar<<", "<<huellas<<", "<<procesada<<")";
	return ss.str();
}

string Evidencias::getNombre()const{
	return nombre;
}

string Evidencias::getTipo()const{
	return tipo;
}

string Evidencias::getLugar()const{
	return lugar;
}

int Evidencias::getHuellas()const{
	return huellas;
}

int Evidencias::getProcesada()const{
	return procesada;
}

void Evidencias::setNombre(string nombre){
	this->nombre=nombre;
}

void Evidencias::setTipo(string tipo){
	this->tipo=tipo;
}

void Evidencias::setLugar(string lugar){
	this->lugar=lugar;
}

void Evidencias::setHuellas(int huellas){
	this->huellas=huellas;
}

void Evidencias::setProcesada(int procesada){
	this->procesada=procesada;
}