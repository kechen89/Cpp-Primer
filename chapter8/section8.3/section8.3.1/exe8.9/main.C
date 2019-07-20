#include <iostream>
#include <sstream>
#include <string>

std::istream &read_write(std::istream &is)
{
    std::string s;
    
    while(is) {
        is >> s;
        std::cout << s << std::endl;
    }
    
    is.clear();
    
    return is;
}

int main()
{
    std::string line = "Section 8.3.1, Exercise 8.9, Output";
    
    std::istringstream is(line);
    
    std::istream &st = read_write(is);
    
    return 0;
}
