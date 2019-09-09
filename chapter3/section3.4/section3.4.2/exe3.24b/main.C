#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int i;
    vector<int> ivec;
    
    cout << "Enter integer numbers " << endl;
    
    while(cin >> i) {
        ivec.push_back(i);
    }
    
    cout << "The sum of first and last elements, sum of the second and second-to-last, ..., is:" << endl;
    
    for (auto beg = ivec.cbegin(), end = ivec.cend(); beg < end; ++beg, --end)
        cout << *beg + *(end - 1) << " ";
    cout << endl;
}
