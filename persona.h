#pragma once

#include <string>
using std::string;

class Persona
{
	string name, user, password, id, birth;
	int age;
public:
	Persona(string, string, string, int, string, string);
	Persona(const Persona&);
	virtual string toString()const;
	string getName()const;
	string getUser()const;
	string getPassword()const;
	int getAge()const;
	string getId()const;
	string getBirth()const;
	void setName(string);
	void setUser(string);
	void setPassword(string);
	void setAge(int);
	void setId(string);
	void setBirth(string);

	/* data */
};