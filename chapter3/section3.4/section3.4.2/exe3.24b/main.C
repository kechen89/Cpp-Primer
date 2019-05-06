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
    
    for (auto it = ivec.begin(); it != (ivec.begin() + ivec.end())/2; ++it){
        cout << *it + *(ivec.end() - 1 - it) << endl;
    }
}
