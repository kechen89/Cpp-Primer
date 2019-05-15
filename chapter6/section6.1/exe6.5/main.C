#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

double absolute(double a);

int main ()
{
    double a, b;
    
    cout << "Enter an value" << endl;
   
    cin >> a;
    
    b = absolute(a);
    
    cout << "The absolute value of the number is " << b << endl;
    return 0;
}

double absolute(double val)
{
    return std::abs(val);
}
