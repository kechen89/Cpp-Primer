#include <iostream>
int main()
{
    int i = 0;
    
    //(a)
    //double *dp = &i; //main.C:7:13: error: cannot initialize a variable of type 'double *' with an rvalue of type 'int *'
    
    //(b)
    //int *ip = i;    //main.C:5:10: error: cannot initialize a variable of type 'int *' with an lvalue of type 'int'
    
    //(c)
    int *p = &i;      //legal
    
    return 0;
}
