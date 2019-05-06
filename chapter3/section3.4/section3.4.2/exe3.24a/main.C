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
    
    cout << "The sum of each pair of adjacent elements is:" << endl;
    
    for (auto it = ivec.begin(); it != ivec.end() - 1; ++it){
        cout << *it + *(it + 1) << endl;
    }
}
