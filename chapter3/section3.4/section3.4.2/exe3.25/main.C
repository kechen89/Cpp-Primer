#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<unsigned> scores(11, 0);    // 11 buckets, all initially 0
    
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++(*(scores.begin() + grade/10));
    }
    cout << "Clustered grade is:" << endl;
    for (auto it = scores.begin(); it != scores.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
