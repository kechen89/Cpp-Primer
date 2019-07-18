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
    
    item.combine(null_book);  // error: non-const lvalue reference to type 'Sales_data' cannot bind to a value of unrelated type 'std::string'
    
    print(std::cout, item) << std::endl;
    
    return 0;
}


/*
 Sales_data.C:14:18: error: non-const lvalue reference to type 'Sales_data' cannot bind to a value of unrelated type 'std::string'
 (aka 'basic_string<char, char_traits<char>, allocator<char> >')
 item.combine(null_book);
 ^~~~~~~~~
 ./Sales_data.h:55:45: note: passing argument to parameter 'rhs' here
 Sales_data& Sales_data::combine(Sales_data &rhs)
 ^
 1 error generated.
 */
