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
    
    for (vector<int>::size_type index = 0; index < ivec.size()/2; ++index){
        cout << ivec[index] + ivec[ivec.size() - 1 - index] << endl;
    }
    if (ivec.size()%2 == 1)
        cout << ivec[ivec.size()/2] << endl;
}
