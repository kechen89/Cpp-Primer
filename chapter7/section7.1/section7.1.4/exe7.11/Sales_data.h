#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data
{
    //constructor
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &);  // Constructor can be declared inside class but defined outside class 
    
    //member functions
    std::string isbn() const { return bookNo; }  // defined
    Sales_data& combine(const Sales_data&);      // declared
    double avg_price() const;                    // declared
    
    //data members
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//nonmember function declared
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

// Define a constructor outside the class body
Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);   // read will read a transaction from is into this object
}

//member function defined
double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

//nonmember function defined
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // add the members of rhs into the members of "this" object
    revenue += rhs.revenue;
    return *this;      // return the object on which the function was called
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;  // copy data members from lhs into sum
    sum.combine(rhs);   // add datra members from rhs into sum
    return sum;
}

#endif
