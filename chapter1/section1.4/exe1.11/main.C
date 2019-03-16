#include <iostream>
int main()
{
    std::cout << "Enter two numbers in increasing order:" << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;
    
    int val = val1;
    while (val <= val2)
    {
        std::cout << "Val is "
        << val << std::endl;
        ++val;         // add 1 to val
    }
    return 0;
}
