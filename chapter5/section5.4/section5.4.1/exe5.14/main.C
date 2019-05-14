#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
    string str, currStr;
    int mcnt = 0;
    string mstr;
    
    if (cin >> str)
    {
        int cnt = 1;
        while (cin >> currStr)
        {
            if (currStr == str) ++cnt;
            else
            {
                if (cnt > mcnt)
                {
                    mcnt = cnt;
                    mstr = str;
                }
                cnt = 1;
                str = currStr;
            }
        }
        
        if (cnt > mcnt)
        {
            mcnt = cnt;
            mstr = str;
        }
        
        cout << mstr << " occurred " << mcnt << " times " << endl;
        
    }
    else
    {
        cout << "No input!" << endl;
    }

    return 0;
}
