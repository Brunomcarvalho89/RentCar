/* 
 * File:   CarRentalAgreement.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 28 de janeiro de 2021, 11:26
 */
#include "domain/CarRentalAgreement.hpp"
#include <ctime>
#include <iostream>

CarRentalAgreement::CarRentalAgreement(
        int id,
        std::shared_ptr<Client> client,
        std::shared_ptr<Car> car,
        std::shared_ptr<CarClassification> carClassification,
        std::shared_ptr<RentalPeriod> rentalPeriod,
        std::shared_ptr<DailyPrice> dailyPrice,
        std::shared_ptr<InsurancePrice> insurancePrice) : id(id), client(client), car(car), carClassification(carClassification), rentalPeriod(rentalPeriod), dailyPrice(dailyPrice), insurancePrice(insurancePrice) {
}

CarRentalAgreement::~CarRentalAgreement() {
}

std::shared_ptr<Car> CarRentalAgreement::getCar() {
    return car;
}

std::shared_ptr<CarClassification> CarRentalAgreement::getCarClassification() {
    return carClassification;
}

std::shared_ptr<Client> CarRentalAgreement::getClient() {
    return client;
}

std::shared_ptr<DailyPrice> CarRentalAgreement::getDailyPrice() {
    return dailyPrice;
}

int CarRentalAgreement::getId() {
    return id;
}

std::shared_ptr<InsurancePrice> CarRentalAgreement::getInsurancePrice() {
    return insurancePrice;
}

std::shared_ptr<RentalPeriod> CarRentalAgreement::getRentalPeriod() {
    return rentalPeriod;
}

double CarRentalAgreement::calculateTotalValue() {

    struct std::tm* a = this->rentalPeriod->getContractStartDate();
    struct std::tm* b = this->rentalPeriod->getContractTerminationDate();

    std::time_t x = std::mktime(a);
    std::time_t y = std::mktime(b);
    if (x != (std::time_t)(-1) && y != (std::time_t)(-1)) {
        double difference = std::difftime(y, x) / (60 * 60 * 24);
        return this->dailyPrice->calculateByDays(difference);
    } else {
        std::cout << "Data informada inválida.";
    }

    return 0.0;
}