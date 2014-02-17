/**
project: DnDChar
programmer: Maikel van Vliet
date created: 17-02-2014
date edited: 17-02-2014
misc:

version:
v0.2
Setup project
*/

#include <iostream> //cout
//#include <iomanip> //setw
//#include <array> //array
#include <String> //string
#include <unordered_map> //dictionary
using namespace std;

#include "Abilities.h"

int main()
{
    Abilities Maikel("Zinnealla");
    Maikel.giveInfo();
    Maikel.inputRolls();
    Maikel.giveInfo();
    return 0;
}
