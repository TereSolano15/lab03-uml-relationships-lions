//
// Created by Tere Solano on 14/8/2020.
//

#include "Chofer.h"

Chofer::Chofer(const string &name, const string &id) : name(name), id(id) {}

Chofer::Chofer(const string &name, const string &id, Auto *audi) : name(name), id(id), audi(audi) {}

Chofer::~Chofer() {

}

const string &Chofer::getName() const {
    return name;
}

void Chofer::setName(const string &name) {
    Chofer::name = name;
}

const string &Chofer::getId() const {
    return id;
}

void Chofer::setId(const string &id) {
    Chofer::id = id;
}



Auto *Chofer::getAudi() const {
    return audi;
}

void Chofer::setAudi(Auto *audi) {
    Chofer::audi = audi;
}
