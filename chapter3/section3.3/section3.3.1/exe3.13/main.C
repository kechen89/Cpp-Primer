#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    //(a)
    vector<int> v1;
    cout << v1.size() << endl;
    
    //(b)
    vector<int> v2(10);
    cout << v2.size() << endl;
    
    //(c)
    vector<int> v3(10, 42);
    cout << v3.size() << endl;
    
    //(d)
    vector<int> v4{10};
    cout << v4.size() << endl;
    
    //(e)
    vector<int> v5{10,42};
    cout << v5.size() << endl;
    
    //(f)
    vector<string> v6{10};
    cout << v6.size() << endl;
    
    //(g)
    vector<string> v7{10, "hi"};
    cout << v7.size() << endl;
    
    return 0;
}
