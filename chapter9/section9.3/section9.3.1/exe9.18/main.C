#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    string word;
    deque<string> deqs;
    
    while (cin >> word)
    {
        deqs.push_back(word);
    }
    
    for (auto s : deqs)
        cout << s << endl;
    
    return 0;
}
