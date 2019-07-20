#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string str, word;
    
    vector<string> text;
    
    if (argc == 1) {
        cerr << "No input file " << endl;
    }
    else
    {
        ifstream in(argv[1]);
    
        while(getline(in, str))
        {
            text.push_back(str);
        }
    }
    
    for (auto line : text)
    {
        istringstream is(line);
        while(is >> word)
            cout << word << endl;
    }
    
    return 0;
}
