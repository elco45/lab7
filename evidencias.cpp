#include "evidencias.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

Evidencias::Evidencias(string nombre, string tipo,string lugar, string huellas,string procesada){
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
	ss<<"Evidencia "<<endl
		<<"Nombre: "nombre<<endl
		<<"Tipo de objeto: "<<tipo<<endl
		<<"Lugar: "<<lugar<<endl
		<<"Huellas: "<<huellas<<endl
		<<"Procesada: "<<procesada<<endl;
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

string Evidencias::getHuellas()const{
	return huellas;
}

string Evidencias::getProcesada()const{
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

void Evidencias::setHuellas(string huellas){
	this->huellas=huellas;
}

void Evidencias::setProcesada(string procesada){
	this->procesada=procesada;
}