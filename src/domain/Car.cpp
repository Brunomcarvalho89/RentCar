/* 
 * File:   Car.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 28 de janeiro de 2021, 10:41
 */

#include "domain/Vehicle.hpp"
#include "domain/Car.hpp"

Car::Car(int id,
        std::string brand,
        std::string model,
        std::string description,
        std::string color,
        std::string registrationPlate,
        std::string renavan,
        int year) : Vehicle(id, brand, model, description, color, registrationPlate, year), renavan(renavan) {
}

Car::~Car() {
}

