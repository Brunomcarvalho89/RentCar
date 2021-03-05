/* 
 * File:   AbstractPersonRepository.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 19 de fevereiro de 2021, 10:38
 */

#ifndef CAR_CLASSIFICATION_REPOSITORY_HPP
#define CAR_CLASSIFICATION_REPOSITORY_HPP

#include <memory>
#include <vector>
#include "domain/CarClassification.hpp"
#include "domain/repository/AbstractCarClassificationRepository.hpp"

class CarClassificationRepository : public AbstractCarClassificationRepository {
private:
    std::vector<std::shared_ptr<CarClassification>> repository;
    std::shared_ptr<CarClassification> classificationNC;

public:

    CarClassificationRepository();

    ~CarClassificationRepository();

    virtual std::shared_ptr<CarClassification> getByID(int id);

};
#endif /* CAR_CLASSIFICATION_REPOSITORY_HPP */