//
// Created by kacper on 22.10.16.
//

#ifndef ZADANIE2_PERMANENT_H
#define ZADANIE2_PERMANENT_H

#include "Employee.h"

class Permanent : public Employee {
private:
    double m_salary = 0.0;
public:
    Permanent();
    Permanent(const std::string & name, const std::string & surname,
             const std::string & pesel, const std::string & nip,
             double salary);
    ~Permanent(){};
    virtual double calcSalary() const;
    virtual void print() const;
};


#endif //ZADANIE2_PERMANENT_H
