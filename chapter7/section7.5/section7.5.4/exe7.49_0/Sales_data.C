#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data item("9-999-99999-9", 1, 10);  // default constructor
    
    print(std::cout, item) << std::endl;
    
    std::string null_book = "9-999-99999-9";
    // constructs a temporary Sales_data object
    // with units_sold and revenue equal to 0 and bookNo equal to null_book
    item.combine(null_book);
    
    //item.combine("9-999-99999-9"); // error: reference to type 'const Sales_data' could not bind to an lvalue of type 'const char [14]'
    
    //item.combine(std::cin);
    
    print(std::cout, item) << std::endl;
    
    return 0;
}
