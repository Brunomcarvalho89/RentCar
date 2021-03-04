/* 
 * File:   AbstractPersonRepository.hpp
 * Author: bruno
 *
 * Created on 19 de fevereiro de 2021, 10:38
 */

#ifndef ABSTRACT_VEHICLE_MAINTENANCE_REPOSITORY_HPP
#define ABSTRACT_VEHICLE_MAINTENANCE_REPOSITORY_HPP

#include <memory>
#include "domain/VehicleMaintenance.hpp"

class AbstractVehicleMaintenanceRepository {
public:
    virtual void add(std::shared_ptr<VehicleMaintenance> person) = 0;

    virtual std::shared_ptr<VehicleMaintenance> getByID(int id) = 0;

};
#endif /* ABSTRACT_VEHICLE_MAINTENANCE_REPOSITORY_HPP */