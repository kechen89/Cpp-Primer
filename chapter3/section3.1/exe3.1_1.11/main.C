#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter two numbers in increasing order:" << endl;
    int val1 = 0, val2 = 0;
    cin >> val1 >> val2;
    
    int val = val1;
    while (val <= val2)
    {
        cout << "Val is "
        << val << endl;
        ++val;         // add 1 to val
    }
    return 0;
}
