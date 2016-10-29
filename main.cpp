#include <vector>
#include "HalfEmployee.h"
#include "Permanent.h"
#include "Trader.h"
int main() {
    std::vector <Employee*> tab;
    tab.push_back(new Permanent());
    tab.push_back(new Permanent("Jan","Kowalski","96020188556","4479111261",1750.2));
    tab.push_back(new HalfEmployee());
    tab.push_back(new HalfEmployee("Jan","Adamski","93071505619","9431805339",11.50, 50));
    tab.push_back(new Trader());
    tab.push_back(new Trader("Anna","Nowak","81033002209","3982478761",10120.0, 25.2));
    for(Employee * worker : tab)
        worker->print();
    for(Employee * worker : tab)
        delete worker;
    return 0;
}