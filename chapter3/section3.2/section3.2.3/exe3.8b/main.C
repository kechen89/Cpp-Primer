#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    string str;
    
    while (cin >> str){
        cout << "Input string:" << str << endl;
        string::size_type length = str.size();
        for (string::size_type i = 0; i < length; ++i){
            str[i] = 'X';
        }
        cout << "Modified string:" << str << endl;
    }
    return 0;
}
