#pragma once
#include<iostream>
#include<sstream>
#include"Auto.h"
using namespace std;

class Autobus : public Auto
{
private:
	string tipoPermiso;

public:
	Autobus(int cilindrada, int modelo, int numeroPasajeros, string tipoPermiso) : Auto(cilindrada, modelo, numeroPasajeros, "diesel");
	void mostrarPermisos();
	string toString();
  string getTipoPermiso() const;
  void setTipoPermiso(string tipoPermiso);

};