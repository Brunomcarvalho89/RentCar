/* 
 * File:   VehicleMaintenance.hpp
 * Author: bruno
 *
 * Created on 27 de janeiro de 2021, 16:33
 */

#ifndef VEHICLEMAINTENANCE_HPP
#define VEHICLEMAINTENANCE_HPP

#include "Car.hpp"
#include "MaintenancePrice.hpp"
#include <memory>

class VehicleMaintenance {
private:
    int id;
    std::shared_ptr<Car> car;
    std::shared_ptr<MaintenancePrice> maintenancePrice;
public:
    VehicleMaintenance(int id, std::shared_ptr<Car> car, std::shared_ptr<MaintenancePrice> maintenancePrice);
    virtual ~VehicleMaintenance();
    int getId();
};

#endif /* VEHICLEMAINTENANCE_HPP */