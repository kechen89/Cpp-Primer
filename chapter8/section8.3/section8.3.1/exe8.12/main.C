#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// members are public by default
struct PersonInfo{
    string name = "peter";         // in-class initializer is ok but not necessary, it is replaced by record >> info.name
    vector<string> phones{"123","456"};  // error: phones much be initialized as empty vector, otherwise, info.phones.push_back(word) will add elements
};

int main(int argc, char **argv)
{
    string line, word;    // will hold a line and word from input, respectively
    vector<PersonInfo> people;    // will hold all the records from the input
    
    if (argc == 1)
    {
        cerr << "No input file " << endl;
    }
    else
    {
        ifstream fin(argv[1]);
        
        istringstream record;
        
        // read the input a line at a time until cin hits end-of-file (or another error)
        while (getline(fin, line))
        {
            PersonInfo info;         // create an object to hold this record's data
            
            record.clear();          // Note, this clear function is neccessary to reset the eofbit
            
            record.str(line);        // bind record to the line we just read
            
            record >> info.name;     // read the name
            
            while (record >> word)     // read the phone numbers
                info.phones.push_back(word);    // and store them
            
            people.push_back(info);       // append this record to people
        }
        
        for (auto per : people)
        {
            cout << per.name << " ";
            for (auto pho : per.phones)
                cout << pho << " ";
            cout << endl;
        }
        
    }
    
    return 0;
}
