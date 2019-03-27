#include <iostream>
int main()
{
    int val = 10;
    // keep executing the while as long as val is larger than or equal to 1
    while (val >= 0)
    {
        std::cout << "Val is "
        << val << std::endl;
        --val;         // subtract 1 to val
    }
    return 0;
}
