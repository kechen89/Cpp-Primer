#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string string1, string2;
    
    cout << "Enter two strings" << endl;
    
    cin >> string1;
    cin >> string2;
    
    if (string1.size() == string2.size())
    {
        cout << "The two strings have equal length" << endl;
    }
    else if (string1.size() > string2.size())
    {
        cout << "string " << string1 << " is longer than " << string2 << endl;
    }
    else
    {
        cout << "string " << string2 << " is longer than " << string1 << endl;
    }
    
    return 0;
}
