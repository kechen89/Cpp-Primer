#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int add(int a, int b)
{
    return a+b;
}

int substract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int devide(int a, int b)
{
    if (b == 0)
    {
        cout << "Error" << endl;
        return -1;
    }
    else
        return a/b;
}

int main ()
{
    vector <int (*) (int , int)> vecfp;
    vecfp = {&add, &substract, &multiply, &devide};
    for (auto func: vecfp)
        cout << func(1,2) << endl;
}

