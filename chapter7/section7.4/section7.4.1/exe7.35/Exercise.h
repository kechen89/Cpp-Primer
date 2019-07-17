#ifndef EXERCISE_H
#define EXERCISE_H

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

Type Exercise::setVal(Type parm)  // error: return type is string, different from declaration in the class
{
    val = parm + initVal();
    return val;                   // error val is an int, function return type is string
}

#endif

/*
 Exercise.h:19:16: error: return type of out-of-line definition of 'Exercise::setVal' differs from that in the declaration
 Type Exercise::setVal(Type parm)
 ~~~~           ^
 Exercise.h:13:10: note: previous declaration is here
 Type setVal(Type);
 ~~~~ ^
 */

/*
 Exercise.h:22:12: error: no viable conversion from returned value of type 'int' to function return type 'Type' (aka
 'basic_string<char, char_traits<char>, allocator<char> >')
 return val;
 ^~~
 */
