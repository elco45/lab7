#include "casos.h"
#include "secuestros.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Secuestros::Secuestros(string nombre, string lugar, string motivo, int rescate, double cantidad, int estado)
	:nombre(nombre), lugar(lugar), motivo(motivo), rescate(rescate), cantidad(cantidad), estado(estado) {

}
Secuestros::Secuestros(int numero_caso, vector<Persona> investigadores, vector<Evidencias> evidencia, string hora, 
	string fecha, string estado, string nombre, string lugar, string motivo, int rescate, double cantidad, int estado)
	:Casos(numero_caso, investigadores, evidencia, hora, fecha, estado),
	nombre(nombre), lugar(lugar), motivo(motivo), rescate(rescate), cantidad(cantidad), estado(estado){

}
Secuestros::Secuestros(const Secuestros&){//terminar esto

}
string toString()const{
	stringstream ss;
	ss << Casos::toString() << " Nombre de la victima: " << nombre << " Lugar del secuestro: " << lugar 
		<< " Motivo: " << motivo << " Rescate: " << rescate << " Cantidad: " << cantidad << " Estado de la victima: " << estado;
	return ss.str();
}
string Secuestros::getNombre()const{
	return nombre;
}
string Secuestros::getLugar()const{
	return lugar;
}
string Secuestros::getMotivo()const{
	return motivo;
}
int Secuestros::getRescate()const{
	return rescate;
}
double Secuestros::getCantidad()const{
	return cantidad;
}
int Secuestros::getEstado()const{
	return estado;
}
void Secuestros::setNombre(string nombre){
	this->nombre = nombre;
}
void Secuestros::setLugar(string lugar){
	this->lugar = lugar;
}
void Secuestros::setMotivo(string motivo){
	this->motivo = motivo;
}
void Secuestros::setRescate(int rescate){
	this->rescate = rescate;
}
void Secuestros::setCantidad(double cantidad){
	this->cantidad = cantidad;
}
void Secuestros::setEstado(int estado){
	this->estado = estado;
}


