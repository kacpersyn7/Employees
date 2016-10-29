//
// Created by kacper on 27.10.16.
//

#include "HalfEmployee.h"

HalfEmployee::HalfEmployee() {Employee();}
HalfEmployee::HalfEmployee(const std::string & name, const std::string & surname,
                     const std::string & pesel, const std::string & nip, double salary_per_hour, int hours)
        : Employee(name, surname, pesel, nip)
{
    if(salary_per_hour > 0.0 && hours > 0)
    {
        m_salary_per_hour = salary_per_hour;
        m_hours = hours;
    }
    else
    {
        m_salary_per_hour = 0.0;
        m_hours = 0;
    }
}

double HalfEmployee::calcSalary() const{
    double salary;
    if(m_hours > 40)
        salary = m_salary_per_hour * (40 + (m_hours-40) * 1.5);
    else
        salary = m_salary_per_hour * m_hours;
    return salary;
}

void HalfEmployee::print() const
{
    Employee::print();
    std::cout << "stawka godzinowa: "<< m_salary_per_hour << "\n"
              << "liczba przepracowanych godzin: " << m_hours << "\n"
              << "płaca miesięczna: " << this->calcSalary() << "\n";
}
