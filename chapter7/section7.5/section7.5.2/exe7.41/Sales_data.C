#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data total1;  // default constructor
    
    Sales_data total2("");
    
    Sales_data total3("", 0, 0);
    
    Sales_data total4(std::cin);
    
    return 0;
}


/*
 Delegating Constructor, default Constructor
 Delegated-to constructor
 Delegating Constructor
 Delegated-to constructor
 Delegated-to constructor
 Delegating Constructor, default Constructor
 Delegating Constructor, istream
 n 2 10
 */
