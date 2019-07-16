#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>

class Screen
{
public:
    typedef std::string::size_type pos;
    
    Screen() = default;      // needed because Screen has another constructor
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
    
    char get() const                 // get the character at the cursor
    { return contents[cursor];}       // implicitly inline
    
    inline char get(pos r, pos c) const;  // explicitly inline
    
    Screen &move(pos r, pos c);     // can be made inline later
    
    Screen &set(char);
    
    Screen &set(pos, pos, char);
    
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    
    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    
private:
    void do_display(std::ostream &os) const
    {
        os << contents;
    }
    
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

char Screen::get(pos r, pos c) const   // declared as inline in the class
{
    pos row = r * width;            // compute row location
    return contents[row + c];       // return character at the given column
}

inline Screen &Screen::move(pos r, pos c)   // we can specify inline on the definition
{
    pos row = r * width;    // compute the row location
    cursor = row + c;       // move cursor to the column within that row
    return *this;           // return this object as an lvalue
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;   // set the new value at the current cursor location
    return *this;           // return this object as an lvalue
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;   // set specified location to given value
    return *this;                   // return this object as an lvalue
}



#endif
