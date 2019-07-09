#include <iostream>
#include <initializer_list>

using std::initializer_list;
using std::cout;
using std::endl;

int sum(initializer_list<int> i)
{
    int sum = 0;
    
    for (auto beg = i.begin(); beg != i.end(); ++beg)
    {
        sum += *beg;
    }
    
    return sum;
}


int main (int argc, char **argv)
{
    cout << sum({1, 2, 3}) << endl;
    
    return 0;
}

