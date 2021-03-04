/* 
 * File:   CarRepository.
 * Author: bruno
 *
 * Created on 19 de fevereiro de 2021, 10:24
 */

#ifndef ABSTRACT_CAR_REPOSITORY_HPP
#define ABSTRACT_CAR_REPOSITORY_HPP

#include <memory>
#include "domain/Car.hpp"

class AbstractCarRepository {
public:
    virtual void add(std::shared_ptr<Car> car) = 0;

    virtual std::shared_ptr<Car> getByID(int id) = 0;
};
#endif /* ABSTRACT_CAR_REPOSITORY_HPP */