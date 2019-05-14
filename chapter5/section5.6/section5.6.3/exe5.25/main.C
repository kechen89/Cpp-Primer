#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main ()
{
    int i, j;
    
    cout << "Enter two integers" << endl;
    
    while (cin >> i >> j) {
    
        try {
            if (j == 0)
                throw runtime_error("The divisor can not be zero");
            
            cout << "The result of dividing the first number by the second is:" << i/j << endl;
            
        } catch (runtime_error err) {
            cout << err.what()
            << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }

}
