#ifndef C_H
#define C_H

#include<string>

class NoDefault
{
public:
    NoDefault(int i): m_i(i) {}
private:
    int m_i = 0;
    std::string m_s;
};

class C{
public:
    C(): mem( NoDefault(0) ){}
private:
    NoDefault mem;
    int m_j = 0;
};

#endif
