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

#include <iostream> //cout and cin
#include <String> //string
#include <unordered_map> //dictionary
using namespace std;

#include "Abilities.h"

Abilities::Abilities(string n) : name(n)
{
    stats.emplace("Str", 10);
    stats.emplace("Dex", 10);
    stats.emplace("Con", 10);
    stats.emplace("Int", 10);
    stats.emplace("Cha", 10);
    stats.emplace("Wis", 10)
    ;
}

void Abilities::giveInfo()
{
    cout << name << endl;
    for (const auto &s: stats)
    {
        cout << s.first << ": " << s.second << endl;
    }
    cout << endl;
}

void Abilities::inputRolls()
{
    cout << "Give the 6 values you rolled" << endl;
    for(auto i : stats)
    {
        int temp;
        cout << "What did you roll for " << i.first <<"?" << endl;
        cin >> temp;
        editStats(i.first, temp);
        cout << i.first << ": " << temp << endl << endl;
    }
    cout << endl;
}

void Abilities::editStats(string s, int n)
{
    stats[s] = n;
}
