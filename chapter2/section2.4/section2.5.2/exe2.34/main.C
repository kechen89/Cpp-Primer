#include <iostream>
int main()
{
    int i = 0, &r = i;
    
    auto a = r;   // a is an int (r is an alias for i, which has type int)
    
    const int ci = i, &cr = ci;  // cr is a reference to const int
    
    auto b = ci;  // b is an int (top-level const in ci is dropped)
    
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
    
    auto d = &i;  // d is an int* (& of an int object is int*)
    
    auto e = &ci;  // e is const int* (& of a const object is low-level const, const int*)
    
    const auto f = ci;  // deduced type of ci is int; f has type const int
    
    auto &g = ci;     // g is a const int& that is bound to ci (a reference to const int)
    
    
    std::cout << "a " << a << std::endl;
    
    std::cout << "b " << b << std::endl;
    
    std::cout << "c " << c << std::endl;
    
    std::cout << "d " << d << std::endl;
    
    std::cout << "e " << e << std::endl;
    
    std::cout << "f " << f << std::endl;
    
    std::cout << "g " << g << std::endl;
    
    a = 42;
    
    b = 42;
    
    c = 42;
    
    d = 42;  // error: assigning to 'int *' from incompatible type 'int'
    
    e = 42; // error: assigning to 'const int *' from incompatible type 'int'
    
    g = 42; // error: cannot assign to variable 'g' with const-qualified type 'const int &'
    
    std::cout << "a " << a << std::endl;
    
    std::cout << "b " << b << std::endl;
    
    std::cout << "c " << c << std::endl;
    
    std::cout << "d " << d << std::endl;
    
    std::cout << "e " << e << std::endl;
    
    std::cout << "f " << f << std::endl;
    
    std::cout << "g " << g << std::endl;
    
}
