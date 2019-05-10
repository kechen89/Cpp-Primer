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
    cval = 'a' + 3;
    cout << typeid(cval).name() << endl;
    cout << endl;
    
    // (b)
    cout << typeid(ival * 1.0).name() << endl;
    cout << typeid(ui - ival * 1.0).name() << endl;   // double
    fval = ui - ival * 1.0;
    cout << typeid(fval).name() << endl;
    cout << endl;
    
    // (c)
    cout << typeid(ui * fval).name() << endl;
    dval = ui * fval;
    cout << typeid(dval).name() << endl;
    cout << endl;
    
    // (d)
    cout << typeid(ival + fval).name() << endl;
    cout << typeid(ival + fval + dval).name() << endl;
    cval = ival + fval + dval;
    cout << typeid(cval).name() << endl;
    
}
