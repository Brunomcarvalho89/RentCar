/* 
 * File:   NaturalPerson.cpp
 * Author: bruno
 * 
 * Created on 28 de janeiro de 2021, 12:52
 */

#include "domain/NaturalPerson.hpp"
#include "domain/Person.hpp"
#include <string>

NaturalPerson::NaturalPerson(int id, std::string name, tm* dateOfbirth, std::string cpf) : Person(id, name, dateOfbirth), cpf(cpf) {
}

NaturalPerson::NaturalPerson() {
}

NaturalPerson::~NaturalPerson() {
}

std::string NaturalPerson::getCpf() {
    return cpf;
}

void NaturalPerson::setCpf(std::string cpf) {
    this->cpf = cpf;
}

