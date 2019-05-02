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
    
    for (vector<int>::size_type index = 0; index < ivec.size() - 1; ++index){
        cout << ivec[index] + ivec[index + 1] << endl;
    }
}
