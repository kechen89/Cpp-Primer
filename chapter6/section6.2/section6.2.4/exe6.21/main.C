#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int larger_value(const int i, const int *j)
{
    return (i > *j) ? i : *j;
}


int main ()
{
    int i, j;
    
    cout << "Enter two integers " << endl;
    
    cin >> i >> j;
    
    cout << "The larger value is " << larger_value(i, &j) << endl;
}
