#include <iostream>
int main()
{
    const int *p;   // ok.
    const int &q;   // error: declaration of reference variable 'q' requires an initializer
    return 0;
}
