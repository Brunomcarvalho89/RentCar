/* 
 * File:   CarFactory.
 * Author: bruno
 *
 * Created on 29 de janeiro de 2021, 15:42
 */

#ifndef CARFACTORY_HPP
#define CARFACTORY_HPP


#include "domain/service/AbstractCarFactory.hpp"
#include <string>

class CarFactory : public AbstractCarFactory {
public:

    CarFactory();

    std::shared_ptr<Car> get(int id, std::string brand, std::string model, std::string description, std::string color, std::string registrationPlate, std::string renavan, int year);
};

#endif /* CARFACTORY_HPP */

