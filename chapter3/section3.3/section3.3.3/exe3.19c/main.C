#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10, 42);
    
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
}
