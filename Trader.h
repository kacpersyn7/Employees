//
// Created by kacper on 29.10.16.
//

#ifndef ZADANIE2_TRADER_H
#define ZADANIE2_TRADER_H
#include "Employee.h"

class Trader : public Employee {
private:
    double m_sales = 0.0;
    double m_percent = 0.0;
public:
    Trader();
    Trader(const std::string & name, const std::string & surname,
                 const std::string & pesel, const std::string & nip,
                 double sales, double percent);
    ~Trader();
    virtual double calcSalary() const;
    virtual void print() const;

};


#endif //ZADANIE2_TRADER_H
