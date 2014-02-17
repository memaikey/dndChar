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

#include <String> //string
#include <unordered_map> //dictionary
using namespace std;

class Abilities
{
public:
    Abilities(string n);
    void giveInfo();
    void inputRolls();
    void editStats(string s, int n);
private:
    unordered_map<string, int> stats;
    string name;
};
