#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &p, int &q)
{
    int tmp;
    tmp = p;
    p = q;
    q = tmp;
}

int main ()
{
    int i, j;
    
    cout << "Enter two integers " << endl;
    cin >> i >> j;
    
    swap(i, j);
    
    cout << "The swapped values are " << i << " and " << j << endl;

}
