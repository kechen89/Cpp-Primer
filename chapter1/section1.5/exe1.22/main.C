#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item, item_sum;
    
    std::cout << "Please enter a pair of transactions: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
    
    if (std::cin >> item)
    {
        item_sum = item;
        std::cout << "Print the sum of the transactions:" << std::endl;
        std::cout << item_sum << std::endl;
        
        std::cout << "Please enter a pair of transactions: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
        while (std::cin >> item)
        {
            std::cout << "Please enter a transaction: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
            item_sum += item;
            std::cout << "Print the sum of the transactions:" << std::endl;
            std::cout << item_sum << std::endl;
        }
    }
    else
    {
        std::cout << "No input" << std::endl;
    }
    return 0;
}
