#include "C.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<NoDefault> vec(10); // error: ./C.h:9:5: note: candidate constructor not viable: requires single argument 'i', but no arguments were provided
    
    return 0;
}


