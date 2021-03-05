/* 
 * File:   AbstractPersonRepository.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 19 de fevereiro de 2021, 10:38
 */

#ifndef ABSTRACTCLIENTREPOSITORY_HPP
#define ABSTRACTCLIENTREPOSITORY_HPP

#include <memory>
#include "domain/Client.hpp"

class AbstractClientRepository {
public:
    virtual void add(std::shared_ptr<Client> person) = 0;

    virtual std::shared_ptr<Client> getByID(int id) = 0;

};
#endif /* ABSTRACTCLIENTREPOSITORY_HPP */