#include <iostream>
int main()
{
    int ival = 1.01;  // ok
    int &rval1 = 1.01; // error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'double'
    int &rval2 = ival; // ok
    int &rval3; // error: declaration of reference variable 'rval3' requires an initializer
}

