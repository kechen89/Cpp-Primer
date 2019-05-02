#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){

    string word;
    vector<string> text;
    
    while (cin >> word) {
        text.push_back(word);
    }
    
    string::size_type i = 1;
    for (auto s : text) {
        
        for (auto &c : s)
            c = toupper(c);
        
        cout << s << " ";
        
        if (i%8 == 0)
            cout << endl;
        ++i;
    }
    cout << endl;
}
