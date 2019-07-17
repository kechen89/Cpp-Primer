#ifndef EXERCISE_FIX_H
#define EXERCISE_FIX_H

#include <string>

typedef std::string Type;
Type initVal();

class Exercise
{
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};

Exercise::Type Exercise::setVal(Type parm)
{
    val = parm + initVal();
    return val;
}

#endif
