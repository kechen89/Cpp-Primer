#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data
{
//friend declarations for nonmember Sales_data operations
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
friend std::istream &read(std::istream &is, Sales_data &item);
friend std::ostream &print(std::ostream &os, const Sales_data &item);
    
public:
    //constructor
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n) {std::cout << "Delegated-to constructor " << std::endl;}
    
    //delegating constructors
    Sales_data(): Sales_data("", 0 , 0) {std::cout << "Delegating Constructor, default Constructor " << std::endl;}   //default constructor
    Sales_data(std::string s): Sales_data(s, 0 , 0) {std::cout << "Delegating Constructor " << std::endl;}
    Sales_data(std::istream &is): Sales_data() {std::cout << "Delegating Constructor, istream " << std::endl; read(is, *this); }
    
    //member functions
    std::string isbn() const { return bookNo; }  // defined
    Sales_data& combine(const Sales_data&);      // declared
    
private:
    double avg_price() const;                    // declared
    
    //data members
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//declaration
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);

//member function defined
inline double Sales_data::avg_price() const
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
