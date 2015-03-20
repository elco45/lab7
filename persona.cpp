#include "persona.h"

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

Persona::Persona(string name, string user, string password, int age, int id, string birth)
	:name(name), user(user), password(password), age(age), id(id), birth(birth) {

}
Persona::Persona(const Persona& otra)
	:name(otra.name), user(otra.user), password(otra.password), age(otra.age), id(otra.id), birth(otra.birth) {

}
string Persona::toString()const{
	stringstream ss;
	ss << "Nombre: " << name <<endl
	 	<<"Usuario: " << user << endl
	 	<<"Contraseña: " << password <<endl
		<<"Edad: " << age << endl
		<<"# de Indentidad: " << id << endl
		<<"Fecha de Nacimiento: " << birth<<endl;
	return ss.str();	
}
string Persona::getName()const{
	return name;
}
string Persona::getUser()const{
	return user;
}
string Persona::getPassword()const{
	return password;
}
int Persona::getAge()const{
	return age;
}
int Persona::getID()const{
	return id;
}
string Persona::getBirth()const{
	return birth;
}
void Persona::setName(string name){
	this->name = name;
}
void Persona::setUser(string user){
	this->user = user;
}
void Persona::setPassword(string password){
	this->password = password;
}
void Persona::setAge(int age){
	this->age = age;
}
void Persona::setID(int id){
	this->id = id;
}
void Persona::setBirth(string birth){
	this->birth = birth;
}





