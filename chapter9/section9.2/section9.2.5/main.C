#include <iostream>
#include<string>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<const char*> listc = {"a", "an", "the"};
    
    vector<string> vecs;
    
    vecs.assign(listc.begin(),listc.end());
    
    for (auto s : vecs)
        cout << s << endl;
    
    return 0;
}
