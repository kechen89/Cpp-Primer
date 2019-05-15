#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val);

int main ()
{
    int j = fact(5);
    cout << "5! is " << j << endl;
    return 0;
}

int fact (int val)
{
    int ret = 1;
    for (; val > 1; --val)
        ret *= val;
    
    return ret;
}
