/**
project: DnDChar
programmer: Maikel van Vliet
date created: 17-02-2014
date edited: 19-02-2014
misc:
*/


#ifndef _abilities_
#define _abilities_

#include <iostream> //cout
#include <String> //string
#include <unordered_map> //dictionary

using namespace std;

class Character
{
public:
    Character();
    void giveInfo();
    void inputRolls();
    void editStats(string s, int n);
    void giveName();
private:
    unordered_map<string, int> stats;
    string name;
};

#endif //_abilities_
