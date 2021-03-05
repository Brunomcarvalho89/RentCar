/*
 * File:   AbstractCarFactory.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 29 de janeiro de 2021, 15:29
 */

#ifndef ADDRESS_FACTORY_HPP
#define ADDRESS_FACTORY_HPP

#include "domain/Address.hpp"
#include "domain/service/AbstractAddressFactory.hpp"
#include <string>
#include <memory>

class AddressFactory : public AbstractAddressFactory {
public:

    std::shared_ptr<Address> get(
            int id,
            std::string addressDescription,
            std::string addressComplement,
            std::string numberAddress,
            std::string zipCode,
            std::string city,
            std::string state,
            std::string country);
};

#endif /* ADDRESS_FACTORY_HPP */