#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, str_con;
    
    while (cin >> str)
    {
        str_con += str;
        str_con += " ";
    }
    
    cout << str_con << endl;
    
    return 0;
}
