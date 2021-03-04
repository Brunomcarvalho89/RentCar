/* 
 * File:   Book.hpp
 * Author: bruno
 *
 * Created on 26 de janeiro de 2021, 15:02
 */

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <string>

class Vehicle {
protected:

    int id;
    std::string brand;
    std::string model;
    std::string description;
    std::string color;
    std::string registrationPlate;
    int year;

public:

    Vehicle(int id,
            std::string brand,
            std::string model,
            std::string description,
            std::string color,
            std::string registrationPlate,
            int year);

    virtual ~Vehicle();

    int getId();

    std::string getModel();

};

#endif /* VEHICLE_HPP */