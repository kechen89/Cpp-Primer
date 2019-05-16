#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool containCapital(const string &s)
{
    for (auto c : s) {
        if (isupper(c)) return true;
    }
    return false;
}

void changeCapital(string &s)
{
    for (auto &c :s)
        c = toupper(c);
}

int main ()
{
    string str;
    
    cout << "Enter a string " << endl;
    
    cin >> str;
    
    if(containCapital(str))
        cout << str << " contains capital letter " << endl;
    else
        cout << str << " does not contain capital letter " << endl;
    
    changeCapital(str);
    cout << "The string is changed to " << str << endl;
}
