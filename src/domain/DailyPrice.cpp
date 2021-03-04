/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DailyPrice.cpp
 * Author: bruno
 * 
 * Created on 28 de janeiro de 2021, 12:47
 */

#include "domain/DailyPrice.hpp"

DailyPrice::DailyPrice(double price) : price(price) {
}

DailyPrice::~DailyPrice() {
}

double DailyPrice::getPrice(){
    return this->price;
}

double DailyPrice::calculateByDays(int days) {
    return (double) this->price * days;
}
