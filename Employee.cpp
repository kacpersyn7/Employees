//
// Created by kacper on 22.10.16.
//

#include "Employee.h"
Employee::Employee(const std::string & name, const std::string & surname,
                   const std::string & pesel,
                   const std::string & nip): m_name(name), m_surname(surname), m_pesel(pesel), m_nip(nip) {}
void Employee::print() const
{
    std::cout << "Imię: " << m_name << "\n"
         << "Nazwisko: " << m_surname << "\n"
         << "Pesel: " << m_pesel << "\n"
         << "Nip" << m_nip << "\n";
}