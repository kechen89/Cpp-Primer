#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;
    
    std::cout << "Enter a transaction: 'ISBN' 'Number of copies sold' 'Sales price'"
    << std::endl;
    
    if (std::cin >> total)
    {
        std::cout << "Enter next transaction: 'ISBN' 'Number of copies sold' 'Sales price'"
        << std::endl;
        
        while (std::cin >> item)
        {
            std::cout << "Enter next transaction: 'ISBN' 'Number of copies sold' 'Sales price'"
            << std::endl;

            if (total.isbn() == item.isbn())
            {
                total += item;
            }
            else
            {
                std::cerr << "Data must refer to the same ISBN" << std::endl;
                return -1;
            }
        }
        std::cout << "The sum of the transactions:" << std::endl;
        std::cout << total << std::endl;
    }
    else
    {
        std::cout << "No data" << std::endl;
    }
    return 0;
}
