#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    
    for (unsigned i = 0; i != 10; ++i)
        ivec.push_back(42);
    
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
}
