//
// Created by kacper on 27.10.16.
//

#ifndef ZADANIE2_HALFEMPLOYEE_H
#define ZADANIE2_HALFEMPLOYEE_H

#include "Employee.h"

class HalfEmployee : public Employee{
private:
    double m_salary_per_hour = 0.0;
    int m_hours = 0;
public:
    HalfEmployee();
    HalfEmployee(const std::string & name, const std::string & surname,
              const std::string & pesel, const std::string & nip,
              double salary_per_hour, int hours);
    ~HalfEmployee(){};
    virtual double calcSalary() const;
    virtual void print() const;
};


#endif //ZADANIE2_HALFEMPLOYEE_H
