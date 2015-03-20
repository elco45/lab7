#include "investigador.h"
#include "persona.h"
#include <iostream>
#include <sstream>
using namespace std;

/*Investigador::Investigador(int atendidos,int cerrados,int sinresolver){
	this->atendidos=atendidos;
	this->cerrados=cerrados;
	this->sinresolver=sinresolver;
}*/

Investigador::Investigador(string name,string user,string password,int age,int id,string birth,int atendidos,int cerrados,int sinresolver)
	:Persona(name,user,password,age,id,birth),atendidos(atendidos),cerrados(cerrados),sinresolver(sinresolver){
}

Investigador::Investigador(const Investigador& other)
	:Persona(other),atendidos(other.atendidos),cerrados(other.cerrados),sinresolver(other.sinresolver){
}

string Investigador::toString()const{
	stringstream ss;
	ss<<"Investigador: "<<endl
		<<Persona::toString()
		<<"Casos Atendidos: "<<atendidos<<endl
		<<"Casos Cerrados: "<<cerrados<<endl
		<<"Casos sin resolver: "<<sinresolver<<endl;
	return ss.str();
}

int Investigador::getAtendidos()const{
	return atendidos;
}

int Investigador::getCerrados()const{
	return cerrados;
}

int Investigador::getSinresolver()const{
	return sinresolver;
}

void Investigador::setAtendidos(int){
	this->atendidos=atendidos;
}

void Investigador::setCerrados(int){
	this->cerrados=cerrados;
}

void Investigador::setSinresolver(int){
	this->sinresolver=sinresolver;
}