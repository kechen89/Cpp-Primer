#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val);

int main ()
{
    int i, j;
    
    cout << "Enter an integer" << endl;
   
    cin >> i;
    
    j = fact(i);
    
    cout << "The factorial of the integer is " << j << endl;
    return 0;
}

int fact (int val)
{
    int ret = 1;
    for (; val > 1; --val)
        ret *= val;
    
    return ret;
}
