/* 
 * File:   Car.hpp
 * Author: bruno
 *
 * Created on 26 de janeiro de 2021, 15:25
 */

#ifndef CAR_HPP
#define CAR_HPP

#include <string>
#include "domain/Vehicle.hpp"

class Car : public Vehicle {
public:
    std::string renavan;

    Car(int id,
            std::string brand,
            std::string model,
            std::string description,
            std::string color,
            std::string registrationPlate,
            std::string renavan,
            int year);

    virtual ~Car();
};


#endif /* CAR_HPP */