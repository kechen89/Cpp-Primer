#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int val)
{
    if (val != 0)
        return factorial(val-1) * val;
    return 1;
}

int main()
{
    int i;
    cout << "Enter a positive integer " << endl;
    cin >> i;
    cout << "The factorial is " << factorial(i) << endl;
}
