//
// Created by Tere Solano on 14/8/2020.
//
#ifndef LAB03_UML_RELATIONSHIP_LIONS_CARRO_H
#define LAB03_UML_RELATIONSHIP_LIONS_CARRO_H
#include <sstream>

class Carro {
    private:
        int cilindrada;
        int modelo;
        int numeroPasajeros;
        string tipoCombustible;
public:
    Carro(int cilindrada, int modelo, int numeroPasajeros, const string &tipoCombustible);
    int getCilindrada() const;
    void setCilindrada(int cilindrada);
    int getModelo() const;
    void setModelo(int modelo);
    int getNumeroPasajeros() const;
    void setNumeroPasajeros(int numeroPasajeros);
    const string &getTipoCombustible() const;
    void setTipoCombustible(const string &tipoCombustible);
    string toString();
    virtual ~Carro();
};


#endif //LAB03_UML_RELATIONSHIP_LIONS_CARRO_H
