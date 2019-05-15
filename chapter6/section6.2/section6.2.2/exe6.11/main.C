#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &i)
{
    i = 0;
}

int main ()
{
    int j = 42;
    reset(j);        // j is passed by reference; the value in j is changed
    cout << "j = " << j << endl;   // prints j = 0
}
