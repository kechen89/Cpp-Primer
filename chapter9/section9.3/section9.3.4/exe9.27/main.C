#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
    auto prev = flst.before_begin();  // denotes element "off the start" of flst
    auto curr = flst.begin();   // denotes the first element in flst
    while (curr != flst.end())    // while there are still elements to process
    {
        if (*curr % 2)
            curr = flst.erase_after(prev);  // erase it and move curr
        else
        {
            prev = curr;   // move the iterators to denote the next
            ++curr;        // element and one before the next element
        }
    }
    
    for (auto i : flst)
        cout << i << endl;
    
    return 0;
}
