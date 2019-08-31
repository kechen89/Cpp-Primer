#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    
    int *p1 = &i;
    
    *p1 = *p1 * *p1;
    
    cout << i << " " << *p1 << endl;
    
    return 0;
}
