/* 
 * File:   Client.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 28 de janeiro de 2021, 12:17
 */

#include "domain/Client.hpp"

Client::Client(int id,
        std::shared_ptr<Person> person,
        std::shared_ptr<Address> address) : id(id), person(person), address(address) {
}

Client::~Client() {
}

int Client::getId() {
    return this->id;
}

std::shared_ptr<Address> Client::getAddress() {
    return this->address;
}

std::shared_ptr<Person> Client::getPerson() {
    return this->person;
}

