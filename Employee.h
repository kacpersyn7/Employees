//
// Created by kacper on 22.10.16.
//

#ifndef ZADANIE2_EMPLOYEE_H
#define ZADANIE2_EMPLOYEE_H
#include <iostream>
class Employee {
private:
    std::string m_name = "przykład";
    std::string m_surname = "przykład";
    std::string m_pesel = "00000000000";
    std::string m_nip = "0000000000";
public:
    Employee();
    Employee(const std::string & name, const std::string & surname,
             const std::string & pesel, const std::string & nip);
    virtual ~Employee(){};
    virtual void print() const;
    virtual double calcSalary() = 0;
};



#endif //ZADANIE2_EMPLOYEE_H
