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
    
    while(cin >> i) {
        ivec.push_back(i);
    }
    
    cout << "The sum of first and last elements, sum of the second and second-to-last, ..., is:" << endl;
    
    auto beg = ivec.begin(), end = ivec.end();
    auto mid = ivec.begin() + (end - beg + 1)/2;
    
    for (auto it = ivec.begin(); it != mid; ++it){
        auto it2 = beg + (end - it - 1);
        cout << *it + *(it2) << endl;
    }
}
