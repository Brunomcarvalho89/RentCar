/* 
 * File:   MaintenancePrice.hpp
 * Author: bruno
 *
 * Created on 27 de janeiro de 2021, 16:40
 */

#ifndef MAINTENANCEPRICE_HPP
#define MAINTENANCEPRICE_HPP

class MaintenancePrice {
private:
    double price;
public:
    MaintenancePrice(double price);
    virtual ~MaintenancePrice();
};

#endif /* MAINTENANCEPRICE_HPP */