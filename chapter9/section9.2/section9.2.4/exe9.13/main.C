#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> lisi = {0, 3, 2, 8, 5, 9, 10};
    
    vector<int> veci = { 8, 5, 9, 2, 10};
    
    vector<double> vecd(lisi.begin(), lisi.end());
    
    vector<double> vecd2(veci.begin(), veci.end());
    
    for (auto i : vecd)
        cout << i << endl;
    
    for (auto i : vecd2)
        cout << i << endl;
    
    return 0;
}
