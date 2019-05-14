#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main ()
{
    bool flag = true;
    vector<int> vec1 = {0,1,1,2};
    vector<int> vec2 = {0,1,1,2,3,5,8};
    
    vector<int>::size_type sz = (vec1.size() < vec2.size()) ? vec1.size() : vec2.size();

    for (vector<int>::size_type i = 0; i != sz; ++i)
        if (vec1[i] != vec2[i]) flag = false;
    
    if (flag == true)
        cout << "One vector is a prefix of another" <<endl;
    else
        cout << "One vector is not a prefix of another" <<endl;

    return 0;
}
