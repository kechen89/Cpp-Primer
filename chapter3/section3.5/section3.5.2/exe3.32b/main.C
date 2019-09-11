#include <iostream>
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
    
    ib = ia;
    
    for (auto i : ib)
        cout << i << " ";
    cout << endl;
    
}
