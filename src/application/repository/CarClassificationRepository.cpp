/* 
 * File:   CarClassificationRepository.cpp
 * Author: bruno
 * 
 * Created on 19 de fevereiro de 2021, 14:11
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "application/repository/CarClassificationRepository.hpp"

CarClassificationRepository::CarClassificationRepository() {

    std::shared_ptr<CarClassification> classificationS = std::make_shared<CarClassification>(1, std::string("simples"), std::string("Carro simples"));
    std::shared_ptr<CarClassification> classificationL = std::make_shared<CarClassification>(2, std::string("luxo"), std::string("Carro de Luxo"));
    this->classificationNC = std::make_shared<CarClassification>(3, std::string("nenhum"), std::string("Carro não classificado"));

    this->repository.insert(this->repository.begin(), classificationS);
    this->repository.insert(this->repository.begin(), classificationL);
    this->repository.insert(this->repository.begin(), classificationNC);
    
    
}

CarClassificationRepository::~CarClassificationRepository() {
}

std::shared_ptr<CarClassification> CarClassificationRepository::getByID(int id) {

    for (std::shared_ptr<CarClassification> elem : this->repository) {
        if (elem->getId() == id) {
            return elem;
        }
    }

    return this->classificationNC;
}



