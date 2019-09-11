#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int ia[] = {0,2,4,6,8};
    int ib[] = {0,2,4,6,8};
    
    auto na = std::end(ia) - std::begin(ia);
    auto nb = std::end(ia) - std::begin(ia);
    
    int flag = 0;
    
    if (na == nb)
    {
        for (ptrdiff_t i = 0; i != na; ++i)
        {
            if (ia[i] != ib[i])
                flag = 1;
        }
    }else
    {
        flag = 1;
    }
    
    if (flag == 0)
        cout << "The two arrays are equal" << endl;
    else
        cout << "The two arrays are not equal" << endl;
    
}
