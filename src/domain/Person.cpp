/* 
 * File:   Person.cpp
 * Author: bruno
 * 
 * Created on 28 de janeiro de 2021, 12:53
 */

#include "domain/Person.hpp"

Person::Person(int id, std::string name, tm* dateOfbirth) : id(id), name(name), dateOfbirth(dateOfbirth) {
}

Person::~Person() {
}

Person::Person() {
}

tm* Person::getDateOfbirth() {
    return dateOfbirth;
}

void Person::setDateOfbirth(tm* dateOfbirth) {
    this->dateOfbirth = dateOfbirth;
}

int Person::getId()  {
    return id;
}

void Person::setId(int id) {
    this->id = id;
}

std::string Person::getName()  {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}


