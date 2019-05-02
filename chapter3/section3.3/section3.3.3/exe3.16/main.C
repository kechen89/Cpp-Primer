#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    // (a)
    vector<int> v1;
    cout << v1.size() << endl;
    // (b)
    vector<int> v2(10);
    cout << v2.size() << endl;
    for (auto i : v2)
        cout << i << endl;
    // (c)
    vector<int> v3(10,42);
    cout << v3.size() << endl;
    for (auto i : v3)
        cout << i << endl;
    // (d)
    vector<int> v4{10};
    cout << v4.size() << endl;
    for (auto i : v4)
        cout << i << endl;
    // (e)
    vector<int> v5{10, 42};
    cout << v5.size() << endl;
    for (auto i : v5)
        cout << i << endl;
    // (f)
    vector<string> v6{10};
    cout << v6.size() << endl;
    for (auto s : v6)
        cout << s << endl;
    // (g)
    vector<string> v7{10, "hi"};
    cout << v7.size() << endl;
    for (auto s : v7)
        cout << s << endl;
}
