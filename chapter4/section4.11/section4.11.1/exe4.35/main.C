#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int ival;
    char cval;
    float fval;
    double dval;
    unsigned int ui;
    
    // (a)
    cout << typeid('a' + 3).name() << endl;
    cout << typeid(fval + ival).name() << endl;
    
    // (c)
    cout << typeid(ival).name() << endl;
    cout << typeid(cval).name() << endl;
    cout << typeid(ival * cval).name() << endl;
    cout << typeid(dval + ival * cval).name() << endl;
    
}
