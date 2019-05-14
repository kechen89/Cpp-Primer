#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main ()
{
    int i, j;
    
    cout << "Enter two integers" << endl;
    
    cin >> i >> j;
    
    if (j != 0)
    {
        cout << "The result of dividing the first number by the second is:" << i/j << endl;
        return 0;
    }
    else
    {
        cerr << "The divisor can not be zero" << endl;
        return -1;
    }

}
