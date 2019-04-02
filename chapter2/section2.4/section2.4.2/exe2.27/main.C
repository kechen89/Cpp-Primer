#include <iostream>
int main()
{
    int i = -1;  // ok
    int &r = 0; // error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
    
    int i2 = 0;
    int *const p2 = &i2;  // ok
    
    const int i3 = -1, &r = 0;  // ok, const in reference types is always low-level
    
    const int *const p3 = &i2;  // ok
    
    const int *p1 = &i2;    // ok
    
    const int &const r2;  // error: 'const' qualifier may not be applied to a reference
    
    const int i4 = i, &r2 = i;  // ok
}
