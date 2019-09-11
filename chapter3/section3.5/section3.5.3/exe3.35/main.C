#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int ia[] = {0,2,4,6,8};
    
    for (int *p = std::begin(ia); p != std::end(ia); ++p) {
        *p = 0;
        cout << *p << endl;
    }
    
}
