#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cout << "Please enter a pair of transactions: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
    std::cin >> item1 >> item2;
    std::cout << "Print the sum of the two transactions:" << std::endl;
    std::cout << item1 + item2 << std::endl;
    return 0;
}
