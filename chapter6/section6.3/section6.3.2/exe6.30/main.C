#include <iostream>


using std::cout;
using std::endl;
using std::string;

// incorrect return values, this code will not compile
bool str_subrange(const string &str1, const string &str2)
{
    // same sizes: return normal equality test
    if (str1.size() == str2.size())
        return str1 == str2;   // ok: == return bool
    //find the size of the smaller string; conditional operator
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    // look at each element up to the size of the smaller string
    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i])
            return;  // error: non-void function 'str_subrange' should return a value [-Wreturn-type]
    }
    //error
}   // warning: control may reach end of non-void function [-Wreturn-type]

int main ()
{
    str_subrange("Hello", "Hello World");
}

