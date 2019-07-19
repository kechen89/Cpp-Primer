#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string str;
    
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
        
        for (auto i : text)
            cout << i << endl;
    }
    
    return 0;
}
