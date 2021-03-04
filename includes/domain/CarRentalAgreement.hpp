/* 
 * File:   CarRentalAgreement.hpp
 * Author: bruno
 *
 * Created on 28 de janeiro de 2021, 12:10
 */

#ifndef CARRENTALAGREEMENT_HPP
#define CARRENTALAGREEMENT_HPP

#include "Client.hpp"
#include "Car.hpp"
#include "CarClassification.hpp"
#include "DailyPrice.hpp"
#include "InsurancePrice.hpp"
#include "RentalPeriod.hpp"

class CarRentalAgreement {
private:

    int id;
    std::shared_ptr<Client> client;
    std::shared_ptr<Car> car;
    std::shared_ptr<CarClassification> carClassification;
    std::shared_ptr<RentalPeriod> rentalPeriod;
    std::shared_ptr<DailyPrice> dailyPrice;
    std::shared_ptr<InsurancePrice> insurancePrice;

public:

    CarRentalAgreement(int id,
            std::shared_ptr<Client> client,
            std::shared_ptr<Car> car,
            std::shared_ptr<CarClassification> carClassification,
            std::shared_ptr<RentalPeriod> rentalPeriod,
            std::shared_ptr<DailyPrice> dailyPrice,
            std::shared_ptr<InsurancePrice> insurancePrice);

    virtual ~CarRentalAgreement();

    std::shared_ptr<Car> getCar();

    std::shared_ptr<CarClassification> getCarClassification();

    std::shared_ptr<Client> getClient();

    std::shared_ptr<DailyPrice> getDailyPrice();

    int getId();

    std::shared_ptr<InsurancePrice> getInsurancePrice();

    std::shared_ptr<RentalPeriod> getRentalPeriod();

    double calculateTotalValue();

};


#endif /* CARRENTALAGREEMENT_HPP */

