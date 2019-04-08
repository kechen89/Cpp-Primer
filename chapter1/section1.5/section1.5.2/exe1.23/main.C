#include <iostream>
#include "Sales_item.h"
int main()
{
    // currVal is the number we're counting; we'll read new values into val
    Sales_item currItem, item;
    // read first item and ensure that we have data to process
    if (std::cin >> currItem)
    {
        int cnt = 1;   // store the count for the current value we're processing
        while (std::cin >> item)   // read the remaining items
        {
            if (item.isbn() == currItem.isbn())   // if the values are the same
                ++cnt;
            else                  // otherwise, print the count for the previous value
            {
                std::cout << currItem.isbn() << " occurs "
                << cnt << " times" << std::endl;
                currItem = item;    // remember the new value
                cnt = 1;      // reset the counter
            } // end if
        }  // end while
        
        // remember to print the count for the last value in the file
        std::cout << currItem.isbn() << " occurs "
        << cnt << " times" << std::endl;
    } //end if
    return 0;
}
