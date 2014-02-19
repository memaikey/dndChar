/**
project: DnDChar
programmer: Maikel van Vliet
date created: 17-02-2014
date edited: 17-02-2014
misc:

Version control:
v0.7
Renamed ability to character

v0.6
Clearscreen bug fixed

v0.4
Rebuilding lost data because of bad merge. Splitting abilities class to own file.

v0.1
Setup
*/

#include <iostream> //cout
#include <String> //string
#include <unordered_map> //dictionary

using namespace std;

//#include "abilities.h" //replaced by character.h
#include "personalIncludes.h"
#include "character.h"

int main()
{
    ClearScreen();
    Character Maikel;
    Maikel.inputRolls();
    Maikel.giveInfo();
    cout << "Press return to exit." << endl;
    cin.get();
    cin.get();
    return 0;
}

