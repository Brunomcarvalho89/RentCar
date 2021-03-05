/* 
 * File:   AbstractPersonRepository.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 19 de fevereiro de 2021, 10:38
 */

#ifndef CLIENTREPOSITORY_HPP
#define CLIENTREPOSITORY_HPP

#include <memory>
#include <vector>
#include "domain/Client.hpp"
#include "domain/repository/AbstractClientRepository.hpp"

class ClientRepository : public AbstractClientRepository {
private:
    std::vector<std::shared_ptr<Client>> repository;

public:

    ClientRepository();

    ~ClientRepository();

    virtual void add(std::shared_ptr<Client> client);

    virtual std::shared_ptr<Client> getByID(int id);

};
#endif /* CLIENTREPOSITORY_HPP */