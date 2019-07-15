#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen
{
public:
    typedef std::string::size_type pos;
    Screen() = default;      // needed because Screen has another constructor
    // cursor initialized to 0 by its in-class initializer
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    
    char get() const                 // get the character at the cursor
    { return contest[cursor];}       // implicitly inline
    
    inline char get(pos r, pos c) const;  // explicitly inline
    Screen &move(pos r, pos c);     // can be made inline later
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen &Screen::move(pos r, pos c)   // we can specify inline on the definition
{
    pos row = r * width;    // compute the row location
    cursor = row + c;       // move cursor to the column within that row
    return *this;           // return this object as an lvalue
}

char Screen::get(pos r, pos c) const   // declared as inline in the class
{
    pos row = r * width;            // compute row location
    return contents[row + c];       // return character at the given column
}


#endif
