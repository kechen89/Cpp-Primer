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
    
    using int_array = int[4];
    
    for (int_array &i : ia)
        for (int j : i)
        cout << j << " ";
    cout << endl;
    
    return 0;
}
