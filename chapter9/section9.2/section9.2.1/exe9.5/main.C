#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator find_value(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    for (auto it = begin; it != end; ++it)
        if (*it == value) return it;
    
    cerr << "can not find element " << endl;
    return end;
}

int main()
{
    vector<int> vec = {0, 3, 2, 8, 5, 9, 10};
    
    cout << *find_value(vec.cbegin(), vec.cend(), 8) << endl;
    
    return 0;
}
