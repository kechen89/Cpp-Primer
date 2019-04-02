#include <iostream>
int main()
{
    const int v2 = 0;  // top-level const
    
    int v1 = v2;       // top-level const is ignored
    
    int *p1 = &v1, &r1 = v1;  // p1 is a pointer to v1, r1 is a reference to v1
    
    const int *p2 = &v2, *const p3 = &v1, &r2 = v2; // p2 is a pointer with low-level const (point to a const), p3 is a pointer with top and low-level const
  
    r1 = v2;   // ok, top-level const is ignored
    
    p1 = p2; // error: assigning to 'int *' from incompatible type 'const int *'
    
    p2 = p1;  // ok, can convert a nonconst to low-level const
    
    p1 = p3; // error: assigning to 'int *' from incompatible type 'const int *const'
    
    p2 = p3; // ok, top-level const is ignored
}
