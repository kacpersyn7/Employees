//
// Created by kacper on 22.10.16.
//

#ifndef ZADANIE2_PERMANENT_H
#define ZADANIE2_PERMANENT_H

#include "Employee.h"

class Permanent : public Employee {
private:
    double m_salary;
public:
    Permanent(const std::string & name = "przykład", const std::string & surname = "przykład",
             const std::string & pesel = "00000000000", const std::string & nip = "0000000000",
             double salary = 0.0);

};


#endif //ZADANIE2_PERMANENT_H
