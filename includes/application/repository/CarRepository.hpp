/* 
 * File:   CarRepository.
 * Author: bruno
 *
 * Created on 19 de fevereiro de 2021, 10:24
 */

#ifndef CAR_REPOSITORY_HPP
#define CAR_REPOSITORY_HPP

#include <memory>
#include "domain/Car.hpp"
#include "domain/repository/AbstractCarRepository.hpp"

class CarRepository : public AbstractCarRepository {
private:
    std::vector<std::shared_ptr<Car>> repository;

public:

    CarRepository();

    ~CarRepository();

    virtual void add(std::shared_ptr<Car> car);

    virtual std::shared_ptr<Car> getByID(int id);
};
#endif /* CAR_REPOSITORY_HPP */