#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    unsigned grade;
    string finalgrade;
    
    while(cin >> grade){
        
        if (grade > 90)
            finalgrade = "high pass";
        else if (grade <= 75 && grade >= 60)
            finalgrade = "low pass";
        else if (grade < 60)
            finalgrade = "fail";
        else
            finalgrade = "pass";
        cout << finalgrade << endl;
    }
    
}
