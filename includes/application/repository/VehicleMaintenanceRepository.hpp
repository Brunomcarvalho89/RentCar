/* 
 * File:   AbstractPersonRepository.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 19 de fevereiro de 2021, 10:38
 */

#ifndef VEHICLE_MAINTENANCE_REPOSITORY_HPP
#define VEHICLE_MAINTENANCE_REPOSITORY_HPP

#include <memory>
#include "domain/VehicleMaintenance.hpp"
#include "domain/repository/AbstractVehicleMaintenanceRepository.hpp"

class VehicleMaintenanceRepository : public AbstractVehicleMaintenanceRepository {
private:
    std::vector<std::shared_ptr<VehicleMaintenance>> repository;
    
public:

    VehicleMaintenanceRepository();

    ~VehicleMaintenanceRepository();

    virtual void add(std::shared_ptr<VehicleMaintenance> person);
    
    virtual std::shared_ptr<VehicleMaintenance> getByID(int id);
    
    int numberCarsInMaintenance();
};
#endif /* VEHICLE_MAINTENANCE_REPOSITORY_HPP */