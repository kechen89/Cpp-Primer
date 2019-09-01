#include <iostream>
int main()
{
    //int null = 0, *p = null; // error: cannot initialize a variable of type 'int *' with an lvalue of type 'int'
    
    //(1)
    int null = 0, *p = 0;  //legal
    
    //(2)
    //constexpr int null = 0;
    //int *p = null;              // error: cannot initialize a variable of type 'int *' with an lvalue of type 'const int'
    
}
