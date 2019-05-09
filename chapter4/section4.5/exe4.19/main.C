#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int i = 1;
    
    int *ptr = &i;
    
    vector<int> vec{0,1,2,3,4,5};
    
    int ival = 2;
    
    // (a)
    auto a = ptr != 0 && *ptr++;   // a is true if ptr is not NULL and *ptr != 0
    cout << a << endl;
    
    // (b)
    auto b = ival++ && ival;       // b is true if ival != 0
    cout << b << endl;
    
    // (c)
    auto c = vec[ival++] <= vec[ival]; // warning: unsequenced modification and access to 'ival'
    
    //
    vec[ival + 1] <= vec[ival];
    ++ival;
    
    return 0;
}
