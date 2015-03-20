#include "admin.h"
#include "casos.h"
#include "evidencias.h"
#include "forense.h"
#include "homicidio.h"
#include "secuestro.h"
#include "investigador.h"
#include "persona.h"
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;
int menu();
int agregar();
int person();
int cas();
//int case();
int view();


int main(int argc, char const *argv[]){
	int op,add,p,c;
	string name,user,pass,birth,clave,puesto,fechai,horario,type,lugar,huellas,procesada;
	int edad,id=0;
	int atendidos,cerrados,sinresolver,tipo,cont=0;
	vector<Persona*> lp;
	vector<Evidencias*> le;
	vector<Casos*> lc;
	Persona* per;
	Evidencias* ev;
	Casos* ca;
	do{
		op=menu();
		if (op==1){
			add=agregar();
			if (add==1){
				p=person();
				if (p==1){
					cout<<"Personal Administrativo"<<endl
						<<"Nombre: ";
					cin>>name;
					cout<<"User: ";
					cin>>user;
					cout<<"Pass: ";
					cin>>pass;
					cout<<"Edad: ";
					cin>>edad;
					cout<<"Fecha de nacimiento(dd/mm/yy): ";
					cin>>birth;
					cout<<"Clave: ";
					cin>>clave;
					cout<<"Puesto: ";
					cin>>puesto;
					per=new Admin(name,user,pass,edad,id,birth,clave,puesto);
					cout<<"Su id es: "<<id<<endl;
					id++;
					lp.push_back(per);
				}else if(p==2){
					cout<<"Investigador"<<endl
						<<"Nombre:";
					cin>>name;
					cout<<"User: ";
					cin>>user;
					cout<<"Pass: ";
					cin>>pass;
					cout<<"Edad: ";
					cin>>edad;
					cout<<"Fecha de nacimiento(dd/mm/yy): ";
					cin>>birth;
					cout<<"Casos Atendidos: ";
					cin>>atendidos;
					cout<<"Casos Cerrados: ";
					cin>>cerrados;
					cout<<"Casos Sin resolver: ";
					cin>>sinresolver;
					per=new Investigador(name,user,pass,edad,id,birth,atendidos,cerrados,sinresolver);
					cout<<"Su id es: "<<id<<endl;
					id++;
					lp.push_back(per);
				}else{
					cout<<"Forense"<<endl
						<<"Nombre:";
					cin>>name;
					cout<<"User: ";
					cin>>user;
					cout<<"Pass: ";
					cin>>pass;
					cout<<"Edad: ";
					cin>>edad;
					cout<<"Fecha de nacimiento(dd/mm/yy): ";
					cin>>birth;
					cout<<"Fecha ingreso: ";
					cin>>fechai;
					cout<<"Horario: ";
					cin>>horario;
					per=new Forense(name,user,pass,edad,id,birth,fechai,horario);
					cout<<"Su id es: "<<id<<endl;
					id++;
					lp.push_back(per);
				}
			}else if(add==2){
				cout<<"User: ";
				cin>>user;
				cout<<"Password: ";
				cin>>pass;
				cout<<"ID: ";
				cin>>id;
				for (int i = 0; i < lp.size(); i++){
					if (lp.at(i)->getUser()==user&&lp.at(i)->getPassword()==pass&&lp.at(i)->getID()==id){
						if (typeid(*lp.at(i))==typeid(Investigador)){
							cout<<"Evidencias"<<endl	
								<<"Nombre: ";
							cin>>name;
							cout<<"Tipo de objeto"<<endl
								<<"1. Arma blanca"<<endl
								<<"2. Arma de fuego"<<endl
								<<"3. Evidencia circunstancial"<<endl;
							cin>>tipo;
							if (tipo==1){
								type="Arma blanca";
							}else if(tipo==2){
								type="Arma de fuego";
							}else if(tipo==3){
								type="Evidencia circunstancial";
							}else{
								type="meow";
							}
							cout<<"Lugar: ";
							cin>>lugar;
							cout<<"Huellas"<<endl
								<<"1. Si"<<endl
								<<"2. No"<<endl;
							cin>>p;
							if (p==1){
								huellas="Si";
							}else{
								huellas="No";
							}
							cout<<"Procesada"<<endl
								<<"1. Si"<<endl
								<<"2. No"<<endl;
							cin>>p;
							if (p==1){
								procesada="Si";
							}else {
								procesada="No";
							}
							ev=new Evidencias(name,type,lugar,huellas,procesada);
							le.push_back(ev);
							break;
						}else{
							cout<<"Tiene que ser un investigador para poder crear evidencias"<<endl;
						}
					}
				}

			}else {
				c=cas();
				int numero, estado, noInv, noEv;
				string hora, fecha, lugar;
				std::vector<Persona> investigadores;
				std::vector<Evidencias> evidencias;
				if (c==1){
					string culpable, victima;
					std::vector<Persona> sospechosos;
					int noSec;
					cout << "Ingrese el numero de caso: ";
					cin >> numero;
					cout << " Ingrese el lugar de los hechos: ";
					cin >> lugar;
					cout << "Ingrese la hora del incidente: ";
					cin >> hora;
					cout << "Ingrese la fecha: ";
					cin >> fecha;
					cout << "Fue cerrado el estado? (0 es si, 1 es no): ";
					cin >> estado;
					cout << "Ingrese el nombre de la victima: ";
					cin >> victima;
					if (estado == 0)
					{
						cout << "Ingrese el nombre del culpable: ";
						cin >> culpable;
					}else if (estado == 1){
						cout << "Ingrese el nombre del sospechoso principal: ";
						cin >> culpable;
					}
					ca = new Homicidio(numero, investigadores, evidencias, lugar, hora, fecha, estado, sospechosos, culpable, victima);
					lc.push_back(ca);
				}else{
					string nombre, motivo, cerrado = "";
					int rescate;
					double cantidad = 0.0;
					cout << "Ingrese el numero de caso: ";
					cin >> numero;
					cout << " Ingrese el lugar de los hechos: ";
					cin >> lugar;
					cout << "Ingrese la hora del incidente: ";
					cin >> hora;
					cout << "Ingrese la fecha: ";
					cin >> fecha;
					cout << "Fue cerrado el estado? (0 es si, 1 es no): ";
					cin >> estado;
					cout << "Ingrese el nombre de la victima: ";
					cin >> nombre;
					cout << "Ingrese el motivo por el que fue secuestrado: ";
					cin >> motivo;
					cout << "Ingrese si pidio rescate (0 es si, 1 es no): ";
					cin >> rescate;
					if (rescate == 0)
					{
						cout << "Ingrese la cantidad que se pide: ";
						cin >> cantidad;
					}
					if (estado == 0)
					{
						cout << "Ingrese el estado de la victima (vivo o muerto): ";
						cin >> cerrado;
					}
					ca = new Secuestro(numero, investigadores, evidencias, lugar, hora, fecha, estado, nombre, motivo, cerrado, cantidad, rescate);
					lc.push_back(ca);
				}
			}
		}else if(op==2){
			cout<<"Opciones de eliminacion\n1. Persona\n2. Casos\n3. Evidencias"<<endl;
			cin>>p;
			while(p!=1&&p!=2&&p!=3){
				cout<<"Ingrese una opcion valida"<<endl;
				cin>>p;
			}
			if(p==1){
				for(int i=0; i<lp.size(); i++){
					cout<<"Persona #"<<i<<endl;
					cout<<lp.at(i)->toString()<<endl;
				}
				cout<<"Seleccione a la persona que desea eliminar"<<endl;
				cin>>c;
				while(c<0&&c>lp.size()-1){
					cout<<"Ingrese una opcion valida"<<endl;
					cin>>c;
				}
				lp.erase(lp.begin()+c);
				cout<<"Personaje elimnado de la lista exitosamente...supuestamente"<<endl;


			}
			if(p==2){
				for(int i=0; i<lc.size(); i++){
					cout<<"Casos #"<<i<<endl;
					cout<<le.at(i)->toString()<<endl;
				}
				cout<<"Seleccione el caso que desea eliminar"<<endl;
				cin>>c;
				while(c<0&&c>lc.size()-1){
					cout<<"Ingrese una opcion valida"<<endl;
					cin>>c;
				}
				lc.erase(lc.begin()+c);
				cout<<"Caso elimnado de la lista exitosamente...supuestamente"<<endl;
			}
			if(p==3){
				for(int i=0; i<le.size(); i++){
					cout<<"Evidencia # "<<i<<endl;
					cout<<le.at(i)->toString()<<endl;
					
				}
				cout<<"Seleccione la evidencia que desea eliminar"<<endl;
				cin>>c;
				while(c<0&&c>le.size()-1){
					cout<<"Ingrese una opcion valida"<<endl;
					cin>>c;
				}
				le.erase(le.begin()+c);
				cout<<"Evidencia elimnada de la lista exitosamente...supuestamente"<<endl;
			}
		}else if(op==3){
			cont=0;
			cout<<"User: ";
			cin>>user;
			cout<<"Password: ";
			cin>>pass;
			cout<<"ID: ";
			cin>>id;
			for (int i = 0; i < lp.size(); i++){
				if (lp.at(i)->getUser()==user&&lp.at(i)->getPassword()==pass&&lp.at(i)->getID()==id){
					if (typeid(*lp.at(i))==typeid(Investigador)){
						c=view();
						if (c==1){
							for (int j = 0; j < lp.size(); j++){
								cout<<"#"<<j+1<<" "<<lp.at(j)->toString();
							}
						}else if(c==2){
							for (int j = 0; j < le.size(); j++){
								cout<<"#"<<j+1<<" "<<le.at(j)->toString();
							}
						}else{
							for (int j = 0; j < lc.size(); j++){
								cout<<"#"<<j+1<<" "<<lc.at(j)->toString();
							}
						}
					}else if (typeid(*lp.at(i))==typeid(Admin)){
						c=view();
						if (c==1){
							for (int j = 0; j < lp.size(); j++){
								cout<<"#"<<j+1<<" "<<lp.at(j)->toString();
							}
						}else if(c==2){
							for (int j = 0; j < le.size(); j++){
								cout<<"#"<<j+1<<" "<<le.at(j)->toString();
							}
						}else{
							cout<<"Secuestros"<<endl;
							for (int j = 0; j < lc.size(); j++){
								if(typeid(*lc.at(j))==typeid(Secuestro)){
									cont++;
									cout<<cont<<lc.at(j)->toString();
								}
							}
						}
					}else if(typeid(*lp.at(i))==typeid(Investigador)){
						c=view();
						if (c==1){
							for (int j = 0; j < lp.size(); j++){
								cout<<"#"<<j+1<<" "<<lp.at(j)->toString();
							}
						}else if(c==2){
							for (int j = 0; j < le.size(); j++){
								cout<<"#"<<j+1<<" "<<le.at(j)->toString();
							}
						}else{
							cout<<"Homicidio"<<endl;
							for (int j = 0; j < lc.size(); j++){
								if(typeid(*lc.at(j))==typeid(Homicidio)){
									cont++;
									cout<<cont<<lc.at(j)->toString();
								}
							}
						}
					}
				}
			}
		}else{
			break;
		}
	}while (true);
	return 0;
}

int menu(){
	int op;
	do{
		cout<<"Menu"<<endl
			<<"1. Agregar"<<endl
			<<"2. Eliminar"<<endl
			<<"3. Visualizar"<<endl
			<<"4. Salir"<<endl;
		cin>>op;
		if (op>=1&&op<=4){
			return op;
		}else {
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}

int agregar(){
	int op;
	do{
		cout<<"Agregar"<<endl
			<<"1. Personas"<<endl
			<<"2. Evidencias"<<endl
			<<"3. Casos"<<endl;
		cin>>op;
		if (op>=1&&op<=3){
			return op;
		}else{
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}

int person(){
	int op;
	do{
		cout<<"Personas"<<endl
			<<"1. Personal Administrativo"<<endl
			<<"2. Investigador"<<endl
			<<"3. Forense"<<endl;
		cin>>op;
		if (op>=1&&op<=3){
			return op;
		}else{
			cout<<"Valor invalido"<<endl;
		}
	}while(true);
}
int view(){
	int op;
	do{
		cout<<"Visualizar"<<endl
			<<"1. Personas"<<endl
			<<"2. Evidencias"<<endl
			<<"3. Casos"<<endl;
		cin>>op;
		if (op>=1&&op<=3){
			return op;
		}else{
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}


int cas(){
	int op;
	do{
		cout<<"Casos"<<endl
			<<"1. Homicidio"<<endl
			<<"2. Secuestro"<<endl;
		cin>>op;
		if (op>=1&&op<=2){
			return op;
		}else {
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}

