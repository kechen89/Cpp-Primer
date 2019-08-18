#include <iostream>
#include <vector>

using namespace std;

bool vec_is_equal(vector<int>&v1, vector<int>&v2)
{
    if (v1 == v2)
        return true;
    else
        return false;
}

int main()
{
    vector<int> v1 = {1, 3, 5, 7, 9, 12};
    vector<int> v2 = {1, 3, 5};
    
    cout << vec_is_equal(v1,v2) << endl;
}
