#include <iostream>
int main()
{
    int sum = 0;
    // executing the for loop
    for (int i = 50; i <= 100; ++i)
    {
        sum += i;    // assign sum + i to sum
    }
    std::cout << "Sum of 50 to 100 inclusive is "
    << sum << std::endl;
    return 0;
}
