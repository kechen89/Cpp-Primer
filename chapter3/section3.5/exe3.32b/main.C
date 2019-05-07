#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> ia(10);
    vector<int> ib(10);
    
    for (vector<int>::size_type ix = 0; ix != ia.size(); ++ix)
        ia[ix] = ix;
    
    for (vector<int>::size_type ix = 0; ix != ib.size(); ++ix) {
        ib[ix] = ia[ix];
        cout << ib[ix] << endl;
    }
    
}
