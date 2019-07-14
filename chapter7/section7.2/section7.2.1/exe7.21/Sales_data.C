#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    //Sales_data total;  // default constructor
    
    //Sales_data total(" "); // constructor
    
    Sales_data total(" ", 0, 0.0); // constructor
    
    if (read(std::cin, total))
    {
        Sales_data trans;
        
        while (read(std::cin, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;    // remember the new value
            }
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
