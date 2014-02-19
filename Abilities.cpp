/**
project: DnDChar
programmer: Maikel van Vliet
date created: 17-02-2014
date edited: 17-02-2014
misc:
*/

#include <iostream> //cout
#include <String> //string
#include <unordered_map> //dictionary

using namespace std;

#include "abilities.h"

Abilities::Abilities()
{
    giveName();
    stats.emplace("str", 8);
    stats.emplace("Dex", 8);
    stats.emplace("Con", 8);
    stats.emplace("Int", 8);
    stats.emplace("Cha", 8);
    stats.emplace("Wis", 8);
}

void Abilities::giveInfo()
{
    cout << string( '\n', 100 ); //cls
    cout << name << endl;
    for (const auto &s: stats)
    {
        cout << s.first << ": " << s.second << endl;
    }
    cout << endl;
}

void Abilities::inputRolls()
{
    cout << "Roll your six ability scores, roll 4d6 and add the best 3 dice." << endl << "Do this six times and then distribute these scores below:" << endl << endl;
    for(auto& i : stats)
    {
        cout << "What did you roll for " << i.first << "?" << endl;
        cin >> i.second;
        //cout << i.first << ": " << i.second << endl << endl; //used for debug and feedback, did not look good.
    }
    cout << endl;
}

void Abilities::editStats(string s, int n)
{
    stats[s] = n;
}

void Abilities::giveName()
{
    string temp;
    cout << "What is the name of the character? To end input type \"0\" " << endl;
    while (cin >> temp && temp != "0")
    {
        cout << string( '\n', 100 ); //cls
        name.append(temp);
        name.append(" ");
        cout << "What is the name of the character? To end input type \"0\" " << endl;
        cout << name << endl;
    }
    cout << string( '\n', 100 ); //cls
    cout << "Hello " << name << ", press return to continue." << endl;
    cin.get();
    cin.get();
    cout << string( '\n', 100 ); //cls
}

