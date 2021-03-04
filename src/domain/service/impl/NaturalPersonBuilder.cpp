/* 
 * File:   NaturalPersonFactory.cpp
 * Author: bruno
 * 
 * Created on 29 de janeiro de 2021, 23:34
 */

#include "domain/service/impl/NaturalPersonBuilder.hpp"
#include "domain/NaturalPerson.hpp"

NaturalPersonBuilder::NaturalPersonBuilder() {
    this->naturalPerson = std::make_shared<NaturalPerson>();
}

NaturalPersonBuilder::~NaturalPersonBuilder() {
}

std::shared_ptr<PersonBuilder>  NaturalPersonBuilder::withId(int id) {
    this->naturalPerson->setId(id);
    return this->shared_from_this();
}

std::shared_ptr<PersonBuilder>  NaturalPersonBuilder::withName(std::string name) {
    this->naturalPerson->setName(name);
    return this->shared_from_this();
}

std::shared_ptr<PersonBuilder>  NaturalPersonBuilder::withDateOfBirth(tm* dateOfbirth) {
    this->naturalPerson->setDateOfbirth(dateOfbirth);
    return this->shared_from_this();
}

std::shared_ptr<PersonBuilder>  NaturalPersonBuilder::withIdentificationNumber(std::string identificationNumber) {
    this->naturalPerson->setCpf(identificationNumber);
    return this->shared_from_this();
}

std::shared_ptr<Person> NaturalPersonBuilder::build() {
    return this->naturalPerson;
}