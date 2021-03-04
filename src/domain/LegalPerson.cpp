/* 
 * File:   LegalPerson.cpp
 * Author: bruno
 * 
 * Created on 28 de janeiro de 2021, 12:50
 */

#include "domain/LegalPerson.hpp"

LegalPerson::LegalPerson(int id, std::string name, tm* dateOfbirth, std::string cnpj) : Person(id, name, dateOfbirth), cnpj(cnpj) {
}

LegalPerson::~LegalPerson() {
}

LegalPerson::LegalPerson() {
}

std::string LegalPerson::getCnpj() {
    return cnpj;
}

void LegalPerson::setCnpj(std::string cnpj) {
    this->cnpj = cnpj;
}
