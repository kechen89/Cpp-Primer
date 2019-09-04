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
    Sales_data total;
    
    double price = 0.0;
    
    if (cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;
        
        Sales_data trans;
        
        while (cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue = trans.units_sold * price;
            
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << "The sum of objects is:" << total.bookNo << " " << total.units_sold << " "
                << total.revenue << endl;
                
                if (total.units_sold != 0)
                {
                    cout << "Average price is:" << endl;
                    
                    cout << total.revenue/total.units_sold << endl;
                }
                total = trans;    // remember the new value
            }
        }
        cout << "The sum of objects is:" << total.bookNo << " " << total.units_sold << " "
        << total.revenue << endl;
        
        if (total.units_sold != 0)
        {
            cout << "Average price is:" << endl;
            
            cout << total.revenue/total.units_sold << endl;
        }
    }
    else
    {
        cout << "No input" << endl;
        return -1;
    }
    return 0;
}
