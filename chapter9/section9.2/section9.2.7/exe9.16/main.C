#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool is_equal(vector<int> &v, list<int> &l)
{
    if (v.size() != l.size())
        return false;
    else
    {
        list<int>::iterator it2 = l.begin();
        for (vector<int>::iterator it1 = v.begin(); it1 != v.end(); ++it1, ++it2)
        {
            
            if (*it1 != *it2)
                return false;
        }
    }
    return true;
}

int main()
{
    vector<int> v = {1, 3, 5};
    list<int> l = {1, 3, 5};
    
    cout << is_equal(v, l) << endl;
}
