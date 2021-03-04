/* 
 * File:   NaturalPersonFactory.cpp
 * Author: bruno
 * 
 * Created on 29 de janeiro de 2021, 23:34
 */

#include "domain/service/impl/LegalPersonBuilder.hpp"

LegalPersonBuilder::LegalPersonBuilder() {
    this->legalPerson = std::make_shared<LegalPerson>();
}

LegalPersonBuilder::~LegalPersonBuilder() {
}

std::shared_ptr<PersonBuilder> LegalPersonBuilder::withId(int id) {
    this->legalPerson->setId(id);
    return this->shared_from_this();
}

std::shared_ptr<PersonBuilder> LegalPersonBuilder::withName(std::string name) {
    this->legalPerson->setName(name);
    return this->shared_from_this();
}

std::shared_ptr<PersonBuilder> LegalPersonBuilder::withDateOfBirth(tm* dateOfbirth) {
    this->legalPerson->setDateOfbirth(dateOfbirth);
    return this->shared_from_this();
}

std::shared_ptr<PersonBuilder> LegalPersonBuilder::withIdentificationNumber(std::string identificationNumber) {
    this->legalPerson->setCnpj(identificationNumber);
    return this->shared_from_this();
}

std::shared_ptr<Person> LegalPersonBuilder::build() {
    return this->legalPerson;
}