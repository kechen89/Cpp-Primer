#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
};

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
