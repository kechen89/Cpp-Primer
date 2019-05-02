#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;

int main(){

    vector<vector<int> > ivec;    // legal
    // vector<string> svec = ivec;   // error: no viable conversion from 'vector<vector<int>>' to 'vector<std::__1::string>'
    vector<string> svec(10, "null"); // legal
}
