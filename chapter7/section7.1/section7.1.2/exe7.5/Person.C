#include <iostream>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Person person1;
    
    cout << "Enter name and address " << endl;
    cin >> person1.name >> person1.address;
    
    cout << "Person name is " << person1.fetch_name() << " Address is " << person1.fetch_address() << endl;
    
    return 0;
}
