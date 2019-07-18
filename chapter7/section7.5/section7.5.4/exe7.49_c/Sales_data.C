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
    
    print(std::cout, item) << std::endl;
    
    return 0;
}

/*
 ./Sales_data.h:57:16: error: cannot assign to non-static data member within const member function 'combine'
 units_sold += rhs.units_sold; // add the members of rhs into the members of "this" object
 ~~~~~~~~~~ ^
 ./Sales_data.h:55:25: note: member function 'Sales_data::combine' is declared const here
 Sales_data& Sales_data::combine(const Sales_data &rhs) const
 ~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ./Sales_data.h:58:13: error: cannot assign to non-static data member within const member function 'combine'
 revenue += rhs.revenue;
 ~~~~~~~ ^
 ./Sales_data.h:55:25: note: member function 'Sales_data::combine' is declared const here
 Sales_data& Sales_data::combine(const Sales_data &rhs) const
 ~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ./Sales_data.h:59:12: error: binding value of type 'const Sales_data' to reference to type 'Sales_data' drops 'const' qualifier
 return *this;      // return the object on which the function was called
 ^~~~~
 3 errors generated.
 */
