#include <iostream>
int main()
{
    int month1 = 9, day1 = 7;
    std::cout <<"month " << month1 << "day " << day1 << std::endl;
    //int month2 = 09, day2 = 07; // error: invalid digit '9' in octal constant
    int month2 = 06, day2 = 07;
    std::cout <<"month " << month2 << "day " << day2 << std::endl;
}
