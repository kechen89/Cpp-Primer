#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into the members of "this" object
    revenue += rhs.revenue;
    return *this;      // return the object on which the function was called
}

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
