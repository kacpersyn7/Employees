//
// Created by kacper on 22.10.16.
//

#include "Permanent.h"
Permanent::Permanent() : Employee() {}
Permanent::Permanent(const std::string & name, const std::string & surname,
                     const std::string & pesel, const std::string & nip, double salary)
        : Employee(name, surname, pesel, nip)
{
    m_salary = salary;
}
double Permanent::calcSalary() const
{
    return m_salary;
}

void Permanent::print() const {
    Employee::print();
    std::cout << "płaca miesięczna: " << this->calcSalary() << "\n";
}



