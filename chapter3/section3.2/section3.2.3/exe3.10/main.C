#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string s, sc;
    cout << "Enter a string of characters including punctuation:" << endl;
    cin >> s;
    int i = 0;
    for (auto c : s){
        if (!ispunct(c)){
            sc += c;
            ++i;
        }
    }
    cout << sc << endl;
}
