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

#endif
