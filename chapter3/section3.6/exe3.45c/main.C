#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
    for (auto p = std::begin(ia); p != std::end(ia); ++p)   // ia is actually &ia[0], the address of the first element of ia, which is an array of four ints
                                                                 // p points to an array of four ints
        for (auto q = std::begin(*p); q != std::end(*p); ++q)
        cout << *q << " ";
    cout << endl;
    
    return 0;
}
