#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    constexpr size_t array_size = 10;
    int ia[array_size];
    
    for (size_t ix = 0; ix < array_size; ++ix) {  
        ia[ix] = ix;
        cout << ia[ix] << endl;
    }
}
