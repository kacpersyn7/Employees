//
// Created by kacper on 22.10.16.
//

#ifndef ZADANIE2_EMPLOYEE_H
#define ZADANIE2_EMPLOYEE_H
#include <iostream>
class Employee {
private:
    std::string m_name;
    std::string m_surname;
    std::string m_pesel;
    std::string m_nip;
public:
    Employee(const std::string & name = "przykład", const std::string & surname = "przykład",
             const std::string & pesel = "00000000000", const std::string & nip = "0000000000" );
    virtual ~Employee(){};
    virtual void print() const;
    virtual void calcSalary() = 0;
};



#endif //ZADANIE2_EMPLOYEE_H
