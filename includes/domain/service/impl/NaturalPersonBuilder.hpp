/* 
 * File:   NaturalPersonFactory.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 29 de janeiro de 2021, 23:32
 */

#ifndef NATURALPERSONFACTORY_HPP
#define NATURALPERSONFACTORY_HPP

#include "domain/service/PersonBuilder.hpp"
#include "domain/NaturalPerson.hpp"
#include <memory>
#include <time.h>

class NaturalPersonBuilder : public PersonBuilder, public std::enable_shared_from_this<NaturalPersonBuilder>  {
private:

    std::shared_ptr<NaturalPerson> naturalPerson;

public:

    NaturalPersonBuilder();
    virtual ~NaturalPersonBuilder();
    std::shared_ptr<PersonBuilder> withId(int id);
    std::shared_ptr<PersonBuilder> withName(std::string name);
    std::shared_ptr<PersonBuilder> withDateOfBirth(tm* dateOfbirth);
    std::shared_ptr<PersonBuilder> withIdentificationNumber(std::string identificationNumber);
    std::shared_ptr<Person> build();
};

#endif /* NATURALPERSONFACTORY_HPP */