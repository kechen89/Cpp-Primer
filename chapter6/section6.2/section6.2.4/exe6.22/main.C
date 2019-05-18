#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swp_pointer(int *&i, int *&j)
{
    int * tmp;
    tmp = i;
    i = j;
    j = tmp;
}


int main ()
{
    int i = 0, j = 0;
    int *p = &i, *q = &j;
    
    cout << "Enter two integers " << endl;
    
    cin >> i >> j;
    
    cout << "The two addresses are " << p << " " << q << endl;
    cout << "The two values are " << *p << " " << *q << endl;
    
    swp_pointer(p, q);
    
    cout << "The two addresses are " << p << " " << q << endl;
    cout << "The two values are " << *p << " " << *q << endl;
}
