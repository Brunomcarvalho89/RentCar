/* 
 * File:   NaturalPersonFactory.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 29 de janeiro de 2021, 23:32
 */

#ifndef LEGAL_PERSON_BUILDER_HPP
#define LEGAL_PERSON_BUILDER_HPP

#include "domain/service/PersonBuilder.hpp"
#include "domain/LegalPerson.hpp"
#include <memory>

class LegalPersonBuilder : public PersonBuilder, public std::enable_shared_from_this<LegalPersonBuilder> {
private:

    std::shared_ptr<LegalPerson> legalPerson;

public:

    LegalPersonBuilder();
    virtual ~LegalPersonBuilder();
    std::shared_ptr<PersonBuilder> withId(int id);
    std::shared_ptr<PersonBuilder> withName(std::string name);
    std::shared_ptr<PersonBuilder> withDateOfBirth(tm* dateOfbirth);
    std::shared_ptr<PersonBuilder> withIdentificationNumber(std::string identificationNumber);
    std::shared_ptr<Person> build();
};

#endif /* LEGAL_PERSON_BUILDER_HPP */