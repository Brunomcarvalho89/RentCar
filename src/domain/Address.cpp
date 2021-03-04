/* 
 * File:   Address.cpp
 * Author: bruno
 * 
 * Created on 27 de janeiro de 2021, 16:54
 */

#include "domain/Address.hpp"
#include <string>

Address::Address(int id,
        std::string addressDescription,
        std::string addressComplement,
        std::string numberAddress,
        std::string zipCode,
        std::string city,
        std::string state,
        std::string country) :
id(id),
addressDescription(addressDescription),
addressComplement(addressComplement),
numberAddress(numberAddress),
zipCode(zipCode),
city(city),
state(state),
country(country) {
}

Address::~Address() {
}

