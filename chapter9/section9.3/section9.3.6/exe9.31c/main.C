#include <iostream>
#include <forward_list>

//the iterator arithmetic operator apply only to
// string, vector, deque and array.
//forward_list only has insert_after and erase_after

using namespace std;

int main()
{
    forward_list<int> fl = {0,1,2,3,4,5,6,7,8,9};
    
    auto prev = fl.before_begin();
    auto iter = fl.begin();
    
    while (iter != fl.end())
    {
        if (*iter % 2)
        {
            iter = fl.insert_after(iter, *iter);
            ++iter;
            ++prev;
            ++prev;
        }
        else
            iter = fl.erase_after(prev);
    }
    
    for (auto i : fl)
        cout << i << endl;
    
    return 0;
}
