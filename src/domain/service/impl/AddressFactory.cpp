/* 
 * File:   AddressFactory.cpp
 * Author: bruno
 * 
 * Created on 29 de janeiro de 2021, 15:51
 */

#include "domain/service/impl/AddressFactory.hpp"
#include <string>

std::shared_ptr<Address> AddressFactory::get(
        int id,
        std::string addressDescription,
        std::string addressComplement,
        std::string numberAddress,
        std::string zipCode,
        std::string city,
        std::string state,
        std::string country) {


    return std::make_shared<Address>(
            id,
            addressDescription,
            addressComplement,
            numberAddress,
            zipCode,
            city,
            state,
            country);
}