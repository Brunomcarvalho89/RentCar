/* 
 * File:   CarClassificationRepository.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 19 de fevereiro de 2021, 14:11
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include "application/repository/CarRepository.hpp"

CarRepository::CarRepository() {
}

CarRepository::~CarRepository() {
}

void CarRepository::add(std::shared_ptr<Car> car) {
    this->repository.insert(this->repository.begin(), car);
}

std::shared_ptr<Car> CarRepository::getByID(int id) {

    for (std::shared_ptr<Car> elem : this->repository) {
        
        if (elem->getId() == id) {
            return elem;
        }
    }
    
    return NULL;
}



