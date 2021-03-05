/* 
 * File:   LegalPerson.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 26 de janeiro de 2021, 16:30
 */

#ifndef LEGALPERSON_HPP
#define LEGALPERSON_HPP

#include <time.h>
#include "Person.hpp"

class LegalPerson : public Person {
protected:
    std::string cnpj;
public:
    LegalPerson(int id, std::string name, tm* dateOfbirth, std::string cnpj);
    LegalPerson();
    virtual ~LegalPerson();
    std::string getCnpj();
    void setCnpj(std::string cnpj);
};


#endif /* LEGALPERSON_HPP */


