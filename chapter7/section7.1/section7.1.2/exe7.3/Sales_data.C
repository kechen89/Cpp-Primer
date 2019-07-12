#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data total;
    
    double price = 0.0;
    
    if (std::cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;
        
        Sales_data trans;
        
        while (std::cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue = trans.units_sold * price;
            
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                std::cout << "The sum of objects is: " << total.isbn() << " " << total.units_sold << " "
                << total.revenue << std::endl;
                
                std::cout << "Average price is: " << total.avg_price() << std::endl;

                total = trans;    // remember the new value
            }
        }
        
        std::cout << "The sum of objects is: " << total.isbn() << " " << total.units_sold << " "
        << total.revenue << std::endl;
        
        std::cout << "Average price is: " << total.avg_price() << std::endl;
    }
    else
    {
        std::cout << "No input " << std::endl;
        return -1;
    }
    return 0;
}
