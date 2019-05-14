#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main ()
{
    vector<int> vec1, vec2, vecs, vecl;
    vector<int>::size_type sz1, sz2;
    bool flag = true;
    
    cout << "Enter the first vector of ints" << endl;
    
    int i;
    
    /*while (cin >> i)
        vec1.push_back(i);
    
    cout << "Enter the second vector of ints" << endl;
    
    while (cin >> i)
        vec2.push_back(i);*/
    
    vec1 = {0,1,1,2,3,5,8};
    vec2 = {0,2};
    
    sz1 = vec1.size();
    
    sz2 = vec2.size();
    
    if (sz1 == sz2)
    {
        flag = false;
    }
    else
    {
        if (sz1 < sz2)
        {
            vecs = vec1;
            vecl = vec2;
        }
        else
        {
            vecs = vec2;
            vecl = vec1;
        }
        
        for (vector<int>::size_type j = 0; j != vecs.size(); ++j)
            if (vecs[j] != vecl[j]) flag = false;
    }
    
    if (flag == true)
        cout << "One vector is a prefix of another" <<endl;
    else
        cout << "One vector is not a prefix of another" <<endl;

    return 0;
}
