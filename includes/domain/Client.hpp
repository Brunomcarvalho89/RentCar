/* 
 * File:   Client.hpp
 * Author: bruno
 *
 * Created on 26 de janeiro de 2021, 15:51
 */

#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Person.hpp"
#include "Address.hpp"
#include <memory>

class Client {
protected:
    int id;
    std::shared_ptr<Person> person;
    std::shared_ptr<Address> address;
public:
    Client(int id,
            std::shared_ptr<Person> person,
            std::shared_ptr<Address> address);
    virtual ~Client();
    int getId();
    std::shared_ptr<Address> getAddress();
    std::shared_ptr<Person> getPerson();
};


#endif /* CLIENT_HPP */

