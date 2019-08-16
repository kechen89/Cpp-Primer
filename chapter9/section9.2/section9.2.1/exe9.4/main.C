#include <iostream>
#include <vector>

using namespace std;

bool find_value(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    for (auto it = begin; it != end; ++it)
        if (*it == value) return true;
    
    return false;
}

int main()
{
    vector<int> vec = {0, 3, 2, 8, 5, 9, 10};
    
    cout << boolalpha << find_value(vec.cbegin(), vec.cend(), 8) << endl;
    
    return 0;
}
