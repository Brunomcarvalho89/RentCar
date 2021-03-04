/* 
 * File:   CarClassification.cpp
 * Author: bruno
 * 
 * Created on 28 de janeiro de 2021, 11:24
 */

#include "domain/CarClassification.hpp"

CarClassification::CarClassification(int id, std::string name, std::string description) : id(id), name(name), description(description) {
}

CarClassification::~CarClassification() {
}

int CarClassification::getId() {
    return id;
}

std::string CarClassification::getDescription() {
    return this->description;
}

std::string CarClassification::getName() {
    return this->name;
}