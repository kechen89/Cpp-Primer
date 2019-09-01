#include <iostream>
int main()
{
    int i = -1;
    
    const int ic = 0;
    
    int *p1 = nullptr;
    
    int *const p2 = &i;

    const int *const p3 = &i; // error: default initialization of an object of const type 'const int *const'

    //(a)
    i = ic;  // legal
    
    //(b)
    //p1 = p3;  // error: main.C:18:10: error: assigning to 'int *' from incompatible type 'const int *const'
    
    //(c)
    //p1 = &ic; // error: main.C:21:10: error: assigning to 'int *' from incompatible type 'const int *' p1 = &ic;
    
    //(d)
    //p3 = &ic;  // error:  main.C:24:8: error: cannot assign to variable 'p3' with const-qualified type 'const int *const'
    
    //(e)
    //p2 = p1;   // error:  main.C:27:8: error: cannot assign to variable 'p2' with const-qualified type 'int *const'
    
    //(f)
    ic = *p3;    // error: error: cannot assign to variable 'ic' with const-qualified type 'const int'
}
