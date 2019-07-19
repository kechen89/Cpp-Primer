#include <iostream>

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
    std::istream &st = read_write(std::cin);
    
    return 0;
}
