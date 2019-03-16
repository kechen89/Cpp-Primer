#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;
    std::cout << "Please input data: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
    while (std::cin >> book)
    {
        std::cout << "The output is:" << std::endl;
        std::cout << book << std::endl;
    }
    return 0;
}
