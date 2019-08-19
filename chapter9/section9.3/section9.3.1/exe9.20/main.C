#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> li = {1, 3, 8, 5, 11, 6};
    deque<int> dqe, dqo;
    
    for (auto i : li)
    {
        if (i%2 == 0)
            dqe.push_back(i);
        else
            dqo.push_back(i);
    }
    
    cout << "Even number deque " << endl;
    for (auto i : dqe)
        cout << i << endl;
    
    cout << "Odd number deque " << endl;
    for (auto i : dqo)
        cout << i << endl;
    
    return 0;
}
