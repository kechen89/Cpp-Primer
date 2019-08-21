#include <iostream>
#include <list>

//the iterator arithmetic operator apply only to
// string, vector, deque and array.

using namespace std;

int main()
{
    list<int> vl = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vl.begin();
    
    while (iter != vl.end())
    {
        if (*iter % 2)
        {
            iter = vl.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
            iter = vl.erase(iter);
    }
    
    for (auto i : vl)
        cout << i << endl;
    
    return 0;
}
