#include <iostream>
int main()
{
    int i, *const cp; // error: default initialization of an object of const type 'int *const'
    
    int *p1, *const p2; // error: default initialization of an object of const type 'int *const'
    
    const int ic, &r = ic; // error: default initialization of an object of const type 'const int'
    
    const int *const p3; // error: default initialization of an object of const type 'const int *const'
    
    const int *p;  // ok
}
