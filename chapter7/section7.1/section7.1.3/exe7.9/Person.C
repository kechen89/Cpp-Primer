#include <iostream>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Person person1;
    
    cout << "Enter name and address " << endl;
    read(cin, person1);
    
    print(cout, person1);
    
    return 0;
}
