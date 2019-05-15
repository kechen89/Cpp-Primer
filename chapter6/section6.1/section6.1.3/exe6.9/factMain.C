#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    int i, j;
    
    cout << "Enter an integer" << endl;
   
    cin >> i;
    
    j = fact(i);
    
    cout << "The factorial of the integer is " << j << endl;
    return 0;
}
