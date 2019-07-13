#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data total(std::cin); // istream constructor
    
    if (std::cin)
    {
        Sales_data trans(std::cin);
        
        while (std::cin)
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;    // remember the new value
            }
            read(std::cin, trans);
        }
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cout << "No input " << std::endl;
        return -1;
    }
    return 0;
}
