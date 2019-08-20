#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

void find_insert(forward_list<string> &flst, const string &str1, const string &str2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    
    while (curr != flst.end())
    {
        if (*curr == str1)
        {
            prev = curr;
            curr = flst.insert_after(curr,str2);
            return;
        }
        else
        {
            prev = curr;
            ++curr;
            
            if (curr == flst.end())
                flst.insert_after(prev,str2);
        }
    }
    return;
}


int main()
{
    string str1, str2;
    forward_list<string> flst = {"Find", "String", "Word", "Insert"};
    
    cout <<"Input the two strings " << endl;
    
    cin >> str1 >> str2;
    
    find_insert(flst, str1, str2);
    
    for (auto s : flst)
        cout << s << endl;
    
    return 0;
}
