/* 
 * File:   RentalPeriod.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 28 de janeiro de 2021, 12:56
 */

#include "domain/RentalPeriod.hpp"

RentalPeriod::RentalPeriod(tm* contractStartDate, tm* contractTerminationDate) : contractStartDate(contractStartDate), contractTerminationDate(contractTerminationDate) {
}

RentalPeriod::~RentalPeriod() {
}

tm* RentalPeriod::getContractStartDate() {
    return this->contractStartDate;
}

tm* RentalPeriod::getContractTerminationDate() {
    return this->contractTerminationDate;
}