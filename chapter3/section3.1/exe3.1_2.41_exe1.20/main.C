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
    double price = 0.0;
};

int main()
{
    Sales_data book;
    
    cout << "Please input data: 'ISBN' 'Number of copies sold' 'Sales price'" << endl;
    
    while (cin >> book.bookNo >> book.units_sold >> book.price)
    {
        cout << book.bookNo << " " << book.units_sold << " " << book.price << endl;
    }
    return 0;
}
