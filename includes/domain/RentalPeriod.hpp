/* 
 * File:   RentalPeriod.hpp
 * Author: bruno
 *
 * Created on 27 de janeiro de 2021, 15:30
 */

#ifndef RENTALPERIOD_HPP
#define RENTALPERIOD_HPP

#include <time.h>

class RentalPeriod {
private:

    tm* contractStartDate;
    tm* contractTerminationDate;

public:

    RentalPeriod(tm* contractStartDate, tm* contractTerminationDate);

    virtual ~RentalPeriod();

    tm* getContractStartDate();

    tm* getContractTerminationDate();
};

#endif /* RENTALPERIOD_HPP */