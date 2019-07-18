#include <iostream>
#include "Debug.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    constexpr Debug io_sub(false, true, false);   // debugging IO
    if (io_sub.any())       // equivalent to if (true)
        cerr << "print appropriate error messages" << endl;
    
    constexpr Debug prod(false);     // no debugging during the production
    if (prod.any())
        cerr<< "print an error message" << endl;
    return 0;
}
