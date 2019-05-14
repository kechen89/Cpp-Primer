#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
    bool flag = true;
    string str, currStr;
    
    if (cin  >> str)
    {
        while (cin >> currStr) {
            if (!isupper(currStr[0])) {
                str = currStr;
                continue;
            }
            if (currStr == str) {
                cout << str << " occurred twice " << endl;
                flag = false;
                break;
            }
            else
                str = currStr;
        }
    }
    else {
        cout << "No input" << endl;
    }

    if (flag) cout << "No word was repeated" << endl;
    
    return 0;
}
