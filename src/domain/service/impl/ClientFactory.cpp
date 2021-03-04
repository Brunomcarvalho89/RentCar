
/* 
 * File:   ClientFactory.cpp
 * Author: bruno
 * 
 * Created on 29 de janeiro de 2021, 23:07
 */

#include "domain/service/impl/ClientFactory.hpp"
#include "domain/Client.hpp"
#include <memory>


ClientFactory::ClientFactory() {
}

std::shared_ptr<Client> ClientFactory::get(int id, std::shared_ptr<Person> person, std::shared_ptr<Address> address) {
    return std::make_shared<Client>(id, person, address);
}