#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void recursive_print(const vector<int> &vi)
{
    if (vi.size() > 1)
        recursive_print(vector<int>(vi.begin(), vi.end() - 1));
    cout << vi[vi.size() - 1] << endl;
}

int main ()
{
    recursive_print({1,2,3,4,5});
    return 0;
}

