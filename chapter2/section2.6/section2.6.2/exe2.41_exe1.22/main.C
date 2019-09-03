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
    Sales_data data, data_sum;
    
    double price = 0.0;

    std::cout << "Input data: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
    
    if (std::cin >> data_sum.bookNo >> data_sum.units_sold >> price)
    {
        data_sum.revenue = data_sum.units_sold * price;
        
        std::cout << "Input next data: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
        
        while (std::cin >> data.bookNo >> data.units_sold >> price)
        {
            
            data.revenue = data.units_sold * price;
            
            if (data_sum.bookNo == data.bookNo)
            {
                data_sum.units_sold += data.units_sold;
                
                data_sum.revenue += data.revenue;
                
            }
            else
            {
                std::cerr << "Data must refer to the same ISBN" << std::endl;
                return -1;
            }
            
            std::cout << "Input next data: 'ISBN' 'Number of copies sold' 'Sales price'" << std::endl;
        }
        
        if (data_sum.units_sold != 0)
        {
            std::cout << "Average price is:" << std::endl;
            
            std::cout << data_sum.revenue/data_sum.units_sold << std::endl;
        }
        else
            std::cout << "(no sales)" << std::endl;

        std::cout << "The sum of objects is:" << std::endl;
        
        std::cout << data_sum.bookNo << " " << data_sum.units_sold << " " << data_sum.revenue << " " << std::endl;
    }
    else
    {
        std::cout << "No input" << std::endl;
        return -1;
    }
    return 0;
}
