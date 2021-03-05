/* 
 * File:   InsurancePrice.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 27 de janeiro de 2021, 16:15
 */

#ifndef INSURANCEPRICE_HPP
#define INSURANCEPRICE_HPP

class InsurancePrice {
private:
    double value;
public:
    InsurancePrice(double value);
    virtual ~InsurancePrice();
    double getPrice();
};

#endif /* INSURANCEPRICE_HPP */

