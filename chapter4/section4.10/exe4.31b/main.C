#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1 , 2, 3, 4, 5};
    vector<int>::size_type cnt = ivec.size();
    // assign values from size ... 1 to the elements in ivec
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
    {
        ivec[ix] = cnt;
        cout << ivec[ix] << " ";
    }
    cout << endl;
}
