#ifndef SCREEN_H
#define SCREEN_H

#include <string>

int height;

class Screen
{
public:
    //typedef std::string::size_type pos;
    void dummy_fcn(pos height) {
        cursor = width * height;
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    
public:
    typedef std::string::size_type pos;
};

#endif

/*
 Screen.h:12:20: error: unknown type name 'pos'
 void dummy_fcn(pos height) {
 ^
 Screen.h:16:5: error: unknown type name 'pos'
 pos cursor = 0;
 ^
 Screen.h:17:5: error: unknown type name 'pos'
 pos height = 0, width = 0;
 ^
 3 errors generated.
 */
