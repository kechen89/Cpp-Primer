#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> svec{"Hello", "World"};
    
    vector<string>::iterator iter;
    
    iter = svec.begin();
    
    // (a)
    cout << *iter++ << endl;  // *iter++, iterator plus one, dereference the original iterator, print Hello
    
    // (b)
    // (*iter)++; error: cannot increment value of type 'std::__1::basic_string<char>'
    
    //(c)
    // *iter.empty(); error: no member named 'empty' in 'std::__1::__wrap_iter<std::__1::basic_string<char> *>'
    
    // (d)
    cout << iter->empty() << endl; // print 0
    
    // (e)
    // ++*iter;   error: cannot increment value of type 'std::__1::basic_string<char>'
    
    // (f)
    cout << iter++->empty() << endl;  // iterator plus one, dereference the original iterator and fetch member function    
    
    return 0;
}
