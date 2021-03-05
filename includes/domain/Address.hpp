/* 
 * File:   Address.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 26 de janeiro de 2021, 15:55
 */

#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <string>

class Address {
private:
    int id;
    std::string addressDescription;
    std::string addressComplement;
    std::string numberAddress;
    std::string zipCode;
    std::string city;
    std::string state;
    std::string country;
public:
    Address(int id, std::string addressDescription, std::string addressComplement, std::string numberAddress, std::string zipCode,
            std::string city,std::string state,std::string country);
    virtual ~Address();
};


#endif /* ADDRESS_HPP */

