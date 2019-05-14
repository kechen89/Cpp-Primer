#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
    string str1, str2;
    
    cin >> str1 >> str2;
    
    do {
        if (str1 < str2) cout << str1 << " is less than " << str2 << endl;
        else cout << str2 << " is less than " << str1 << endl;
        
    } while (cin >> str1 >> str2);

    return 0;
}
