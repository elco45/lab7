#pragma once
#include "persona.h"
#include "evidencias.h"
#include "investigador.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class Casos{
  int numero_caso;
  vector<Investigador>investigadores;
  vector<Evidencias>evidencia;
  string hora;
  string fecha;
  int estado;
public:
  Casos(int, vector<Investigador>,vector<Evidencias>,string,string,int);
  Casos(const Casos&);
  virtual string toString()const;
  const vector<Investigador> getInvestigadores()const;
  const Investigador getInvestigadores(int)const;
  const Evidencias getEvidencias(int)const;
  const string getHora()const;
  const string getFecha()const;
  const int getEstado()const;
  const int getNumero_caso()const;
  void setInvestigadores(vector<Investigador>);
  void setInvestigadores(Investigador);
  void setEvidencias(vector<Evidencias>);
  void setEvidencias(Evidencias);
  void setHora(string);
  void setFecha(string);
  void setEstado(int);
};