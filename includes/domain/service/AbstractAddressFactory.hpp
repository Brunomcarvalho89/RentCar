/*
 * File:   AbstractCarFactory.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 29 de janeiro de 2021, 15:29
 */

#ifndef ABSTRACT_ADDRESS_FACTORY_HPP
#define ABSTRACT_ADDRESS_FACTORY_HPP

#include "domain/Address.hpp"
#include <string>
#include <memory>

class AbstractAddressFactory {
public:
    virtual std::shared_ptr<Address> get(
            int id,
            std::string addressDescription,
            std::string addressComplement,
            std::string numberAddress,
            std::string zipCode,
            std::string city,
            std::string state,
            std::string country) = 0;
};

#endif /* ABSTRACT_ADDRESS_FACTORY_HPP */