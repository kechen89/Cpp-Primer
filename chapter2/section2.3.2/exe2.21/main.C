#include <iostream>
int main()
{
    int i = 0;
    int *ip = i;    //main.C:5:10: error: cannot initialize a variable of type 'int *' with an lvalue of type 'int'
    std::cout<< *ip << std::endl;
    return 0;
}
