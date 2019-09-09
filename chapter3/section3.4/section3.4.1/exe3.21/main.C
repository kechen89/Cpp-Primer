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
    for (auto it = v2.cbegin(); it != v2.cend(); ++it)
        cout << *it << endl;
    
    // (c)
    vector<int> v3(10,42);
    cout << v3.size() << endl;
    for (auto it = v3.cbegin(); it != v3.cend(); ++it)
        cout << *it << endl;
    
    // (d)
    vector<int> v4{10};
    cout << v4.size() << endl;
    for (auto it = v4.cbegin(); it != v4.cend(); ++it)
        cout << *it << endl;
    
    // (e)
    vector<int> v5{10, 42};
    cout << v5.size() << endl;
    for (auto it = v5.cbegin(); it != v5.cend(); ++it)
        cout << *it << endl;
    
    // (f)
    vector<string> v6{10};
    cout << v6.size() << endl;
    for (auto it = v6.cbegin(); it != v6.cend(); ++it)
        cout << *it << endl;
    
    // (g)
    vector<string> v7{10, "hi"};
    cout << v7.size() << endl;
    for (auto it = v7.cbegin(); it != v7.cend(); ++it)
        cout << *it << endl;
}
