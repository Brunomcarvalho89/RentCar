/* 
 * File:   NaturalPerson.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 26 de janeiro de 2021, 16:30
 */

#ifndef NATURALPERSON_HPP
#define NATURALPERSON_HPP

#include "domain/Person.hpp"
#include <string>
#include <time.h>

class NaturalPerson : public Person {
protected:
    std::string cpf;
public:
    NaturalPerson(int id, std::string name, tm* dateOfbirth, std::string cpf);
    NaturalPerson();
    virtual ~NaturalPerson();
    std::string getCpf();
    void setCpf(std::string cpf);
};

#endif /* NATURALPERSON_HPP */

