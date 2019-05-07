#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    
    
    if (strcmp(ca1, ca2) == 0)
    {
        cout << "The two strings are equal" << endl;
    }
    else if (strcmp(ca1, ca2) > 0)
    {
        cout << "string 1 is larger than string 2" << endl;
    }
    else
    {
        cout << "string 1 is smallaer than string 2" << endl;
    }
    
    return 0;
}
