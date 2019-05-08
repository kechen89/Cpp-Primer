#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5};
    
    int arr[6];

    vector<int>::size_type sz= ivec.size();
    
    for (vector<int>::size_type i = 0; i!= sz; ++i){
        arr[i] = ivec[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
