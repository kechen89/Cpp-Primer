#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)  // error, ./main Abort trap: 6
        ia[ix] = ix;
}
