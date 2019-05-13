#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main ()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, bsCnt = 0, tabCnt = 0, nlCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, ch_old;
    
    while (cin >> std::noskipws >> ch) {
        // if ch is a vowel or white space increment the appropriate counter
        switch (ch) {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i':
                if (ch_old == 'f')
                    ++fiCnt;
            case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
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
            case 'f':
                if (ch_old == 'f')
                    ++ffCnt;
                break;
            case 'l':
                if (ch_old == 'f')
                    ++flCnt;
                break;
        }
        ch_old = ch;
    }
    
    // print results
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of blank space: \t" << bsCnt << '\n'
         << "Number of tabs: \t" << tabCnt << '\n'
         << "Number of newlines: \t" << nlCnt << '\n'
         << "Number of ff: \t" << ffCnt << '\n'
         << "Number of fl: \t" << flCnt << '\n'
    << "Number of fi: \t" << fiCnt << endl;
    
    return 0;
    
}
