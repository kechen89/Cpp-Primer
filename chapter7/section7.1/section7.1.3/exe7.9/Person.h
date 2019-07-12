#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person
{
    std::string name;
    std::string address;
    
    std::string fetch_name() const { return name; }
    std::string fetch_address() const { return address; }
};

//nonmember functions
std::istream &read(std::istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
    os << p.fetch_name() << " " << p.fetch_address();
    return os;
}

#endif
