#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int ia[] = {0,2,4,6,8};
    
    int *p1 = ia;
    
    int *p2 = &ia[3];
    
    p1 += p2 - p1;
    
    cout << *p1 << endl;
    
}
