#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    string word;
    list<string> lis;
    
    while (cin >> word)
    {
        lis.push_back(word);
    }
    
    for (auto s : lis)
        cout << s << endl;
    
    return 0;
}
