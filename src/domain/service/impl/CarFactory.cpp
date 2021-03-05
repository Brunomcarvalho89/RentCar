/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CarFactory.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 29 de janeiro de 2021, 15:51
 */

#include "domain/service/impl/CarFactory.hpp"
#include <string>

CarFactory::CarFactory() {
}

std::shared_ptr<Car> CarFactory::get(int id, std::string brand, std::string model, std::string description, std::string color, std::string registrationPlate, std::string renavan, int year) {
    return std::make_shared<Car>(id, brand, model, description, color, registrationPlate, renavan, year);
}

