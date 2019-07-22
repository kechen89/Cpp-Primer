#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// members are public by default
struct PersonInfo{
    string name;
    vector<string> phones;
};

bool valid(const string &nums)
{
    for (auto g : nums)
        if (!isdigit(g)) return false;
    return true;
}

string format(const string &nums)
{
    string fnums;
    
    fnums = nums.substr(0,3) + "-" + nums.substr(3,3) + "-" + nums.substr(6,3);
    
    return fnums;
}

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
        
        for (const auto &entry : people)   // for each entry in people
        {
            ostringstream formatted,badNums;      // objects created on each loop
            for (const auto &nums : entry.phones)    // for each number
            {
                if (!valid(nums))
                {
                    badNums << " " << nums;  // string in badNums
                } else
                    // "writes" to formatted string
                    formatted << " " << format(nums);
            }
                if (badNums.str().empty())       // there were no bad numbers
                    cout << entry.name << " "    // print the name
                    << formatted.str() << endl;   // and reformatted numbers
                else                              // otherwise, print the name and bad numbers
                    cerr << "input error: " << entry.name
                    << " invalid number(s) " << badNums.str() << endl;
        }
        
    }
    
    return 0;
}
