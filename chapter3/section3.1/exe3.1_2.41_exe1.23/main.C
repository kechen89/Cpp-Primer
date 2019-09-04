#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data currData, data;
    
    double price = 0.0;
    
    if (cin >> currData.bookNo >> currData.units_sold >> price)
    {
        currData.revenue = currData.units_sold * price;
        
        int cnt = 1;
        
        while (cin >> data.bookNo >> data.units_sold >> price)
        {
            data.revenue = data.units_sold * price;
            
            if (data.bookNo == currData.bookNo)
                ++cnt;
            else
            {
                cout << currData.bookNo << " occurs "
                << cnt << " times" << endl;
                currData = data;    // remember the new value
                cnt = 1;      // reset the counter
            }
        }
        
        // remember to print the count for the last value in the file
        cout << currData.bookNo << " occurs " << cnt << " times" << endl;
    }
    else
    {
        cout << "No input" << endl;
        return -1;
    }
    return 0;
}
