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
        finalgrade = (grade > 90) ? "high pass"
        : (grade <= 75 && grade >= 60) ? "low pass"
        : (grade < 60) ? "fail" : "pass";
        cout << finalgrade << endl;
    }
    
}
