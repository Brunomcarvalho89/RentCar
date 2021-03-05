/* 
 * File:   CarClassificationRepository.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 19 de fevereiro de 2021, 14:11
 */

#include <algorithm>
#include <vector>
#include "application/repository/VehicleMaintenanceRepository.hpp"
#include "domain/Client.hpp"

VehicleMaintenanceRepository::VehicleMaintenanceRepository() {
}

VehicleMaintenanceRepository::~VehicleMaintenanceRepository() {
}

void VehicleMaintenanceRepository::add(std::shared_ptr<VehicleMaintenance> vehicleMaintenance) {
    this->repository.insert(this->repository.begin(), vehicleMaintenance);
}

std::shared_ptr<VehicleMaintenance> VehicleMaintenanceRepository::getByID(int id) {

    for (std::shared_ptr<VehicleMaintenance> elem : this->repository) {
        if (elem->getId() == id) {
            return elem;
        }
    }

    return NULL;
}

int VehicleMaintenanceRepository::numberCarsInMaintenance() {
    return this->repository.size();
}

