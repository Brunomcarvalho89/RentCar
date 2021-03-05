/* 
 * File:   CarClassification.hpp
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 27 de janeiro de 2021, 13:53
 */

#ifndef CARCLASSIFICATION_HPP
#define CARCLASSIFICATION_HPP

#include <string>

class CarClassification {
private:

    int id;
    std::string name;
    std::string description;

public:

    CarClassification(int id, std::string name, std::string description);

    virtual ~CarClassification();

    int getId();

    std::string getDescription();

    std::string getName();
};


#endif /* CARCLASSIFICATION_HPP */

