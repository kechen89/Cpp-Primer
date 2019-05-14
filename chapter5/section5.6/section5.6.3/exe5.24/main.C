#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;

int main ()
{
    int i, j;
    
    cout << "Enter two integers" << endl;
    
    cin >> i >> j;
    
    if (j == 0)
        throw runtime_error("The divisor can not be zero");
    
    cout << "The result of dividing the first number by the second is:" << i/j << endl;

}
