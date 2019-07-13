#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream &is, Person &p);

struct Person
{
    //constructor
    Person() = default;  //default constructor
    Person(const std::string &ns): name(ns) {}  //constructor
    Person(const std::string &ns, const std::string &as): name(ns), address(as) {}  //constructor
    Person(std::istream &);
    
    //member function
    std::string fetch_name() const { return name; }
    std::string fetch_address() const { return address; }
    
    //data member
    std::string name;
    std::string address;
};

//constructor
Person::Person(std::istream &is)
{
    read(is, *this);
}

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
