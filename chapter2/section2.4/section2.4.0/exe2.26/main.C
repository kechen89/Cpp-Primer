#include <iostream>
int main()
{
    const int buf;  // error: default initialization of an object of const type 'const int'
    int cnt = 0;    // ok
    const int sz = cnt;   // ok
    ++cnt;    // ok
    ++sz;  // error: cannot assign to variable 'sz' with const-qualified type 'const int'
}
