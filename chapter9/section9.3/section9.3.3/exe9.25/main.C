#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lst = {0,1,2,3,4,5,6,7,8,9};
    
    auto elem1 = lst.end();
    auto elem2 = lst.end();
    
    elem1 = lst.erase(elem1,elem2);

    for (auto i : lst)
        cout << i << endl;
    
    return 0;
}
