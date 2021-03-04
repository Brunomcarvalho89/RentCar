/* 
 * File:   AbstractClientFactory.hpp
 * Author: bruno
 *
 * Created on 29 de janeiro de 2021, 21:55
 */

#ifndef ABSTRACTCLIENTFACTORY_HPP
#define ABSTRACTCLIENTFACTORY_HPP

#include "domain/Client.hpp"
#include <memory>

class AbstractClientFactory {
public:

    virtual std::shared_ptr<Client> get(
            int id,
            std::shared_ptr<Person> person, 
            std::shared_ptr<Address> address) = 0;
};

#endif /* ABSTRACTCLIENTFACTORY_HPP */

