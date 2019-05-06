#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> ivec(10);
    
    cout << "Enter 10 integers:" << endl;
    for (int j = 0; j < ivec.size(); ++j){
        cin >> ivec[j];
    }
    
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it *= 2;
        cout << *it << endl;
    }
    
}
