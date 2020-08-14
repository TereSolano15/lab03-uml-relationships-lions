#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Auto
{
private:
    int cilindrada;
    int modelo;
    int numeroPasajeros;
    string tipoCombustible;

public:
    Auto(int cilindrada, int modelo, int numeroPasajeros, string tipoCombustible);

public:
    int getCilindrada() const;
    void setCilindrada(int cilindrada);
    int getModelo() const;
    int getNumeroPasajeros() const;
    void setNumeroPasajeros(int numeroPasajeros) ;
    string getTipoCombustible() const;
    void setTipoCombustible(string tipoCombustible);
    string toString();
};