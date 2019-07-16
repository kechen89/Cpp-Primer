#include <iostream>
#include <string>
#include "Screen.h"

using std::cin;
using std::cout;

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    /*
     Screen tmp1 = myScreen.move(4,0);
     Screen tmp2 = tmp1.set('#');
     tmp2.display(cout);
     */
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
}

/*
 XXXXXXXXXXXXXXXXXXXX#XXXX
 XXXXXXXXXXXXXXXXXXXXXXXXX
 */
