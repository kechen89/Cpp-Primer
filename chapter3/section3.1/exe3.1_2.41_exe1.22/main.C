#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data data, data_sum;
    
    double price = 0.0;

    cout << "Input data: 'ISBN' 'Number of copies sold' 'Sales price'" << endl;
    
    if (cin >> data_sum.bookNo >> data_sum.units_sold >> price)
    {
        data_sum.revenue = data_sum.units_sold * price;
        
        cout << "Input next data: 'ISBN' 'Number of copies sold' 'Sales price'" << endl;
        
        while (cin >> data.bookNo >> data.units_sold >> price)
        {
            
            data.revenue = data.units_sold * price;
            
            if (data_sum.bookNo == data.bookNo)
            {
                data_sum.units_sold += data.units_sold;
                
                data_sum.revenue += data.revenue;
                
            }
            else
            {
                cerr << "Data must refer to the same ISBN" << endl;
                return -1;
            }
            
            cout << "Input next data: 'ISBN' 'Number of copies sold' 'Sales price'" << endl;
        }
        
        if (data_sum.units_sold != 0)
        {
            cout << "Average price is:" << endl;
            
            cout << data_sum.revenue/data_sum.units_sold << endl;
        }
        else
            cout << "(no sales)" << endl;

        cout << "The sum of objects is:" << endl;
        
        cout << data_sum.bookNo << " " << data_sum.units_sold << " " << data_sum.revenue << " " << endl;
    }
    else
    {
        cout << "No input" << endl;
        return -1;
    }
    return 0;
}
