/*
 * File:   AbstractCarFactory.
 * Author: bruno
 *
 * Created on 29 de janeiro de 2021, 15:29
 */

#ifndef ABSTRACTCARFACTORY_HPP
#define ABSTRACTCARFACTORY_HPP

#include "domain/Car.hpp"
#include <string>
#include <memory>

class AbstractCarFactory {
public:

    virtual std::shared_ptr<Car> get(
            int id,
            std::string brand,
            std::string model,
            std::string description,
            std::string color,
            std::string registrationPlate,
            std::string renavan,
            int year) = 0;
};

#endif /* ABSTRACTCARFACTORY_HPP */

