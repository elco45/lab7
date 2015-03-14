#ifndef CASOS_H
#define CASOS_H
#include "personas.h"
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
  strign estado;
public:
  Casos(int, vector<Investigador>,vector<Evidencias>,string,string,string);
  Casos(const Casos&);
  virtual string toString()const;
  const vector<Investigador> getInvestigadores()const;
  const Investigador getInvestigadores(int)const;
  const Evidencias getEvidencias(int)const;
  const string getHora()const;
  const string getFecha()const;
  const string getEstado()const;
  const int getNumero_caso()const;
  void setInvestigadores(vector<Investigador>);
  void setInvestigadores(Investigador);
  void setEvidencias(vector<Evidencias>);
  void setEvidencias(Evidencias);
  void setHora(string);
  void setFecha(string);
  void setEstado(string);

}