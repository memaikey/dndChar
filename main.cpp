/**
project: DnDChar
programmer: Maikel van Vliet
date created: 17-02-2014
date edited: 17-02-2014
misc:

Version control:
v0.4
Rebuilding lost data because of bad merge. Splitting abilities class to own file.

v0.1
Setup
*/

#include <iostream> //cout
#include <String> //string
#include <unordered_map> //dictionary

using namespace std;

#include "abilities.h"
#include "personalIncludes.h"

int main()
{
    ClearScreen();
    Abilities Maikel;
    Maikel.inputRolls();
    Maikel.giveInfo();
    cout << "Press return to exit." << endl;
    cin.get();
    cin.get();
    return 0;
}

