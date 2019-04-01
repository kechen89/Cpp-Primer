#include <iostream>
int main()
{
    std::cin >> int input_value; // error: expected '(' for function-style cast or type construction
    int i = { 3.14 };   // ok.
    int i = 3.14;   // ok.
    double salary = wage = 9999.99; // error: use of undeclared identifier 'wage'
    std::cout << i << std::endl;
    
    return 0;
}
