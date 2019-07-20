#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char **argv)
{
    Sales_data total;
    
    double price = 0.0;
    
    if (argc == 1)
    {
        cerr << "No input file " << endl;
        return -1;
    }
    else
    {
        ifstream in(argv[1]);
        ofstream out(argv[2]);
        
        if (in >> total.bookNo >> total.units_sold >> price)
        {
            total.revenue = total.units_sold * price;
            
            Sales_data trans;
            
            while (in >> trans.bookNo >> trans.units_sold >> price)
            {
                trans.revenue = trans.units_sold * price;
                
                if (total.bookNo == trans.bookNo)
                {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue;
                }
                else
                {
                    out << "The sum of objects is:" << total.bookNo << " " << total.units_sold << " "
                    << total.revenue << std::endl;
                
                    if (total.units_sold != 0)
                    {
                        out << "Average price is:" << std::endl;
                    
                        out << total.revenue/total.units_sold << std::endl;
                    }
                    
                    total = trans;    // remember the new value
                }
            }
            out << "The sum of objects is:" << total.bookNo << " " << total.units_sold << " "
            << total.revenue << std::endl;
        
            if (total.units_sold != 0)
            {
                out << "Average price is:" << std::endl;
            
                out << total.revenue/total.units_sold << std::endl;
            }
            
        }
        else
        {
            cerr << "No input" << std::endl;
            return -1;
        }
    }
    return 0;
}
