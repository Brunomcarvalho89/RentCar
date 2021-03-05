
/* 
 * File:   VehicleMaintenance.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 28 de janeiro de 2021, 13:11
 */

#include "domain/VehicleMaintenance.hpp"

VehicleMaintenance::VehicleMaintenance(int id, std::shared_ptr<Car> car, std::shared_ptr<MaintenancePrice> maintenancePrice)
: id(id), car(car), maintenancePrice(maintenancePrice) {
}

VehicleMaintenance::~VehicleMaintenance() {
}

int VehicleMaintenance::getId() {
    return this->id;
}