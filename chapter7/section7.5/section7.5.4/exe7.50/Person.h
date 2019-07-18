#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person;   // class declaration (forward declaration)
// after a declaration and before a definition, type Person is an incomplete type
// we can use an incomplete type in only limited ways: we can define pointers or references to such types
// and wew can declare (but not define) functions that use an incomplete type as a parameter or return type
std::istream &read(std::istream &is, Person &p);

class Person
{
    friend std::istream &read(std::istream &is, Person &p);
    
public:
    //constructor
    Person() = default;  //default constructor
    explicit Person(const std::string &ns): name(ns) {}  //constructor
    Person(const std::string &ns, const std::string &as): name(ns), address(as) {}  //constructor
    explicit Person(std::istream &);
    
    //member function
    std::string fetch_name() const { return name; }
    std::string fetch_address() const { return address; }
    
private:
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
