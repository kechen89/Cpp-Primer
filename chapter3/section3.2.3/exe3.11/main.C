#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){
    const string s = "Keep out!";
    for (auto &c : s) { cout << c << " "; } // c is type const char &
    cout << endl;
}
