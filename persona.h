#pragma once

#include <string>
using std::string;

class Persona{
	string name, user, password, birth;
	int age,id;
public:
	Persona(string, string, string, int, int, string);
	Persona(const Persona&);
	virtual string toString()const;
	string getName()const;
	string getUser()const;
	string getPassword()const;
	int getID()const;
	int getAge()const;
	string getBirth()const;
	void setName(string);
	void setUser(string);
	void setPassword(string);
	void setAge(int);
	void setID(int);
	void setBirth(string);

	/* data */
};