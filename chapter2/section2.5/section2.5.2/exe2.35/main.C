#include <iostream>

int main()
{
    const int i = 42;   // i is a const int
    auto j = i;         // j is an int
    const auto &k = i;  // k is a reference to const int
    auto *p = &i;       // p is a pointer to const int
    const auto j2 = i, &k2 = i;  // j2 is a const int, k2 is a reference to const int
    
    std::cout << "Type of i is " << typeid(i).name() << std::endl;
    std::cout << "Type of j is " << typeid(j).name() << std::endl;
    std::cout << "Type of k is " << typeid(k).name() << std::endl;
    std::cout << "Type of p is " << typeid(p).name() << std::endl;
    std::cout << "Type of j2 is " << typeid(j2).name() << std::endl;
    std::cout << "Type of k2 is " << typeid(k2).name() << std::endl;
    
}
