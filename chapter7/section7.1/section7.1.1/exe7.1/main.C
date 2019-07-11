#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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
            
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << "The sum of objects is:" << total.bookNo << " " << total.units_sold << " "
                << total.revenue << std::endl;
                
                if (total.units_sold != 0)
                {
                    std::cout << "Average price is:" << std::endl;
                    
                    std::cout << total.revenue/total.units_sold << std::endl;
                }
                total = trans;    // remember the new value
            }
        }
        std::cout << "The sum of objects is:" << total.bookNo << " " << total.units_sold << " "
        << total.revenue << std::endl;
        
        if (total.units_sold != 0)
        {
            std::cout << "Average price is:" << std::endl;
            
            std::cout << total.revenue/total.units_sold << std::endl;
        }
    }
    else
    {
        std::cout << "No input" << std::endl;
        return -1;
    }
    return 0;
}
