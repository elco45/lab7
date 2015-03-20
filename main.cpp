#include "admin.h"
#include "casos.h"
#include "evidencias.h"
#include "forense.h"
//#include "homicidio.h"
#include "investigador.h"
#include "persona.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int menu();
int agregar();
int person();
int view();

int main(int argc, char const *argv[]){
	int op,add,p;
	string name,user,pass,id,birth,clave,puesto,fechai,horario;
	int edad,cont_id=0;
	int atendidos,cerrados,sinresolver;
	vector<Persona*> lp;
	Persona* per;
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
					id=cont_id+"";
					cout<<"Clave: ";
					cin>>clave;
					cout<<"Puesto: ";
					cin>>puesto;
					per=new Admin(name,user,pass,edad,id,birth,clave,puesto);
					cout<<"Su id es: "<<cont_id<<endl;
					cont_id++;
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
					id=cont_id+"";
					cout<<"Casos Atendidos: ";
					cin>>atendidos;
					cout<<"Casos Cerrados: ";
					cin>>cerrados;
					cout<<"Casos Sin resolver: ";
					cin>>sinresolver;
					per=new Investigador(name,user,pass,edad,id,birth,atendidos,cerrados,sinresolver);
					cout<<"Su id es: "<<cont_id<<endl;
					cont_id++;
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
					id=cont_id+"";
					cout<<"Fecha ingreso: ";
					cin>>fechai;
					cout<<"Horario: ";
					cin>>horario;
					per=new Forense(name,user,pass,edad,id,birth,fechai,horario);
					cout<<"Su id es: "<<cont_id<<endl;
					cont_id++;
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
						
					}
				}
			}else {

			}
		}else if(op==2){
			
		}else if(op==3){
			
		}else if(op==4){

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
			<<"2. Modificar"<<endl
			<<"3. Eliminar"<<endl
			<<"4. Visualizar"<<endl
			<<"5. Salir"<<endl;
		cin>>op;
		if (op>=1&&op<=5){
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
			<<"Que cargo tiene?"<<endl
			<<"1. Personal Administrativo"<<endl
			<<"2. Investigador"<<endl
			<<"3. Forense"<<endl;
		cin>>op;
		if (op>=1&&op<=3){
			return op;
		}else {
			cout<<"Valor invalido!"<<endl;
		}
	}while(true);
}

