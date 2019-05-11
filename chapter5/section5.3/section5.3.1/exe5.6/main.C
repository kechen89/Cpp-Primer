#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main ()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    
    unsigned grade;
    string lettergrade;
    
    while (cin >> grade) {
        // if failing grade, no need to check for a plus or minus
        (grade < 60) ? lettergrade = scores[0] :
        (lettergrade = scores[(grade -  50)/10], (grade == 100)? lettergrade :
         (grade %10 > 7) ? lettergrade += '+' :
         (grade % 10 < 3) ? lettergrade += '-' : lettergrade);
        
        cout << lettergrade << endl;
    }
}
