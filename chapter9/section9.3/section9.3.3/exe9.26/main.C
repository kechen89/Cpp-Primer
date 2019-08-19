#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    
    vector<int> ivec(begin(ia), end(ia));
    
    list<int> ilis(begin(ia), end(ia));
    
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
        if (*it % 2 == 0)
            ivec.erase(it);
    
    for (auto it = ilis.begin(); it != ilis.end(); ++it)
        if (*it % 2 != 0)
            ilis.erase(it);
    
    cout << "Vector after erase is: " << endl;
    for (auto i : ivec)
        cout << i << endl;
    
    cout << "List after erase is: " << endl;
    for (auto i : ilis)
        cout << i << endl;
    
    return 0;
}
