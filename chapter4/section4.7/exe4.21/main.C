#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5};
    
    for (auto & i : ivec){
        i = (i % 2) ? i * 2 : i;
        cout << i << " ";
    }
    
    cout << endl;
}
