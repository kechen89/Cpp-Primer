#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int val)
{
    if (val > 1)
        return factorial(val--) * val; // warning: unsequenced modification and access to 'val' [-Wunsequenced]
    return 1;
}

int main()
{
    int i;
    cout << "Enter a positive integer " << endl;
    cin >> i;
    cout << "The factorial is " << factorial(i) << endl;
}

/*
 Enter a positive integer
 5
 Segmentation fault: 11
 */
