#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int>ia = {0,2,4,6,8};
    vector<int>ib = {0,2,4,6,8};
    
    if (ia == ib)
    {
        cout << "The two arrays are equal" << endl;
    }else
    {
        cout << "The two arrays are not equal" << endl;
    }
    
    return 0;
}
