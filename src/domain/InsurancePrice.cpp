/* 
 * File:   InsurancePrice.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 28 de janeiro de 2021, 12:48
 */

#include "domain/InsurancePrice.hpp"

InsurancePrice::InsurancePrice(double value) : value(value) {
}

InsurancePrice::~InsurancePrice() {
}

double InsurancePrice::getPrice(){
    return this->value;
}

