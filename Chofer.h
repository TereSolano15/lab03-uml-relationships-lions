//
// Created by Tere Solano on 14/8/2020.
//
#ifndef LAB03_UML_RELATIONSHIPS_LIONS_CHOFER_H
#define LAB03_UML_RELATIONSHIPS_LIONS_CHOFER_H

#include "Auto.h"

class Chofer {
private:
    string name;
    string id;
    Auto* audi;
public:
    Chofer(const string &name, const string &id);
    Chofer(const string &name, const string &id, Auto *audi);
    const string &getName() const;
    void setName(const string &name);
    const string &getId() const;
    Auto *getAudi() const;
    void setAudi(Auto *audi);
    void setId(const string &id);
    virtual ~Chofer();
    string toString();
};

#endif //LAB03_UML_RELATIONSHIPS_LIONS_CHOFER_H
