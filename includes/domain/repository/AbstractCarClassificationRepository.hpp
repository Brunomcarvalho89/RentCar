/* 
 * File:   AbstractPersonRepository.hpp
 * Author: bruno
 *
 * Created on 19 de fevereiro de 2021, 10:38
 */

#ifndef ABSTRACT_CAR_CLASSIFICATION_REPOSITORY_HPP
#define ABSTRACT_CAR_CLASSIFICATION_REPOSITORY_HPP

#include <memory>
#include "domain/CarClassification.hpp"

class AbstractCarClassificationRepository {
public:

    virtual std::shared_ptr<CarClassification> getByID(int id) = 0;

};
#endif /* ABSTRACT_CAR_CLASSIFICATION_REPOSITORY_HPP */