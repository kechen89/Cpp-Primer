#include <iostream>
int main()
{
    std::cout << "Enter two random integer numbers:" << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;
    
    int min, max;
    
    min = val1;
    if (min > val2) min = val2;
    max = val1;
    if (max < val2) max = val2;
    
    for (int val = min; val <= max; ++val)
    {
        std::cout << "Val is "
        << val << std::endl;
    }
    return 0;
}
