/* 
 * File:   Vehicle.cpp
 * Author: bruno
 * 
 * Created on 28 de janeiro de 2021, 13:10
 */

#include "domain/Vehicle.hpp"

Vehicle::Vehicle(int id,
        std::string brand,
        std::string model,
        std::string description,
        std::string color,
        std::string registrationPlate,
        int year) : id(id), brand(brand), model(model), description(description), color(color), registrationPlate(registrationPlate), year(year) {
}

Vehicle::~Vehicle() {
}

int Vehicle::getId() {
    return id;
}

std::string Vehicle::getModel() {
    return this->model;
}