#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    
    int j = 5;

    int *ptr = &i;
    
    //change the value which the pointer points
    *ptr = 1;
    
    cout << *ptr << endl;
    
    //change the value of pointer
    ptr = &j;
    
    cout << *ptr << endl;
    
    return 0;
}
