/* 
 * File:   ClientFactory.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 29 de janeiro de 2021, 23:05
 */

#ifndef CLIENTFACTORY_HPP
#define CLIENTFACTORY_HPP

#include "domain/service/AbstractClientFactory.hpp"
#include "domain/Person.hpp"
#include <string>
#include <memory>

class ClientFactory : public AbstractClientFactory {
public:
    
    ClientFactory();
    
    std::shared_ptr<Client> get(
            int id,
            std::shared_ptr<Person> person, 
            std::shared_ptr<Address> address);
};



#endif /* CLIENTFACTORY_HPP */

