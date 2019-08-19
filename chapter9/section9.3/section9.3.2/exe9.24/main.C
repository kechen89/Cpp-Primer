#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vecs;
    
    //cout << vecs[0] << endl;  // Segmentation fault: 11
    //cout << vecs.at(0) << endl; // libc++abi.dylib: terminating with uncaught exception of type std::out_of_range: vector Abort trap: 6
    //cout << vecs.front() << endl; //  Segmentation fault: 11
    //cout << *vecs.begin() << endl; // Segmentation fault: 11
    
    return 0;
}
