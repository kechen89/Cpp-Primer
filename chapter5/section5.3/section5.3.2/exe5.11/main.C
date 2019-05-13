#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main ()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, bsCnt = 0, tabCnt = 0, nlCnt = 0;
    char ch;
    
    while (cin >> std::noskipws >> ch) {
        // if ch is a vowel increment the appropriate counter
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            case ' ':
                ++bsCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++nlCnt;
                break;
        }
    }
    
    // print results
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of blank space: \t" << bsCnt << '\n'
         << "Number of tabs: \t" << tabCnt << '\n'
         << "Number of newlines: \t" << nlCnt <<  endl;
    
    return 0;
    
}
