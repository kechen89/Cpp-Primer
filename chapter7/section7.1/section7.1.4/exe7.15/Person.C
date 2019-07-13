#include <iostream>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Person person1;  // use default constructor
    
    cout << "Enter name and address " << endl;
    read(cin, person1);
    
    print(cout, person1) << endl;
    
    return 0;
}
