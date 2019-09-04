#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data book;
    
    std::cout << "Please input data: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
    
    while (std::cin >> book.bookNo >> book.units_sold >> book.price)
    {
        std::cout << book.bookNo << " " << book.units_sold << " " << book.price << std::endl;
    }
    return 0;
}
