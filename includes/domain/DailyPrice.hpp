/* 
 * File:   DailyPrice.hpp
 * Author: bruno
 *
 * Created on 28 de janeiro de 2021, 12:45
 */

#ifndef DAILYPRICE_HPP
#define DAILYPRICE_HPP

class DailyPrice {
private:

    double price;

public:

    DailyPrice(double price);
    virtual ~DailyPrice();
    
    double getPrice();
    
    double calculateByDays(int days);
};

#endif /* DAILYPRICE_HPP */