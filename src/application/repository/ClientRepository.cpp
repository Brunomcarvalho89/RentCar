/* 
 * File:   CarClassificationRepository.cpp
 * Author: brunomcarvalho89@gmail.com
 * 
 * Created on 19 de fevereiro de 2021, 14:11
 */

#include <algorithm>
#include <vector>
#include "application/repository/ClientRepository.hpp"
#include "domain/Client.hpp"

ClientRepository::ClientRepository() {
}

ClientRepository::~ClientRepository() {
}

void ClientRepository::add(std::shared_ptr<Client> client) {
    this->repository.insert(this->repository.begin(), client);
}

std::shared_ptr<Client> ClientRepository::getByID(int id) {

    for (std::shared_ptr<Client> elem : this->repository) {
        if (elem->getId() == id) {
            return elem;
        }
    }

    return NULL;
}



