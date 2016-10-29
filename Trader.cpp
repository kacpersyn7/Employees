//
// Created by kacper on 29.10.16.
//

#include "Trader.h"
Trader::Trader() : Employee() {}
Trader::Trader(const std::string & name, const std::string & surname,
                           const std::string & pesel, const std::string & nip, double sales, double percent)
        : Employee(name, surname, pesel, nip)
{
    if(sales > 0.0 && percent > 0.0)
    {
        m_sales = sales;
        m_percent = percent;
    }
    else
    {
        m_sales = 0.0;
        m_percent = 0.0;
    }
}

double Trader::calcSalary() const{
    return m_sales * m_percent * 0.01;
}

void Trader::print() const
{
    Employee::print();
    std::cout << "sprzedaż miesięczna "<< m_sales << "\n"
              << "procent zysku od sprzedaży " << m_percent << "\n"
              << "płaca miesięczna: " << this->calcSalary() << "\n";
}