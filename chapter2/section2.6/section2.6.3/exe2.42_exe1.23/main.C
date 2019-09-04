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
    Sales_data currData, data;
    
    double price = 0.0;
    
    if (std::cin >> currData.bookNo >> currData.units_sold >> price)
    {
        currData.revenue = currData.units_sold * price;
        
        int cnt = 1;
        
        while (std::cin >> data.bookNo >> data.units_sold >> price)
        {
            data.revenue = data.units_sold * price;
            
            if (data.bookNo == currData.bookNo)
                ++cnt;
            else
            {
                std::cout << currData.bookNo << " occurs "
                << cnt << " times" << std::endl;
                currData = data;    // remember the new value
                cnt = 1;      // reset the counter
            }
        }
        
        // remember to print the count for the last value in the file
        std::cout << currData.bookNo << " occurs " << cnt << " times" << std::endl;
    }
    else
    {
        std::cout << "No input" << std::endl;
        return -1;
    }
    return 0;
}
