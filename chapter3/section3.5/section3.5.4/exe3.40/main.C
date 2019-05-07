#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    char ca3[100];
    
    strcpy(ca3, ca1);
    strcat(ca3, " ");
    strcat(ca3, ca2);
    
    cout << ca3 << endl;

    return 0;
}
