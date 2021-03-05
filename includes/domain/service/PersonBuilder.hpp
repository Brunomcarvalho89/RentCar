/* 
 * File:   PersonBuilder.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 29 de janeiro de 2021, 23:15
 */

#ifndef PERSONBUILDER_HPP
#define PERSONBUILDER_HPP

#include "domain/Person.hpp"
#include <string>
#include <memory>
#include <time.h>

class PersonBuilder {
public:

    virtual std::shared_ptr<PersonBuilder> withId(int id) = 0;
    virtual std::shared_ptr<PersonBuilder> withName(std::string name) = 0;
    virtual std::shared_ptr<PersonBuilder> withDateOfBirth(tm* dateOfbirth) = 0;
    virtual std::shared_ptr<PersonBuilder> withIdentificationNumber(std::string identificationNumber) = 0;
    virtual std::shared_ptr<Person> build() = 0;

};

#endif /* PERSONBUILDER_HPP */

