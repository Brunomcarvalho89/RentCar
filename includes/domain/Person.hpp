/* 
 * File:   Pearson.
 * Author: brunomcarvalho89@gmail.com
 *
 * Created on 26 de janeiro de 2021, 16:07
 */

#ifndef PEARSON_HPP
#define PEARSON_HPP

#include <time.h> 
#include <string>

class Person {
protected:
    int id;
    std::string name;
    tm* dateOfbirth;
public:
    Person();
    Person(int id, std::string name, tm* dateOfbirth);
    virtual ~Person();
    tm* getDateOfbirth();
    void setDateOfbirth(tm* dateOfbirth);
    int getId();
    void setId(int id);
    std::string getName();
    void setName(std::string name);
};

#endif /* PEARSON_HPP */

