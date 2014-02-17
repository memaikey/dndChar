/**
project: DnDChar
programmeur: Maikel van Vliet
datum aangemaakt: 17-02-2014
datum aangepast: 17-02-2014
overig:

versie:
v0.1
Setup project
*/

#include <iostream> //cout
#include <iomanip> //setw
//#include <array> //array
#include <String> //string
#include <unordered_map> //dictionary

using namespace std;

/// additional includes:

void ClearScreen()
{
    cout << string( 100, '\n' );
}
/// end additional includes

class Abilities
{
public:
    Abilities();
    void giveInfo();
    void inputRolls();
    void editStats(string s, int n);
    void giveName();
private:
    unordered_map<string, int> stats;
    string name;
};

Abilities::Abilities()
{
    giveName();
    stats.emplace("str", 8);
    stats.emplace("Dex", 8);
    stats.emplace("Con", 8);
    stats.emplace("Int", 8);
    stats.emplace("Cha", 8);
    stats.emplace("Wis", 8)
    ;
}

void Abilities::giveInfo()
{
    ClearScreen();
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
        cout << "What did you roll for " << i.first <<"?" << endl;
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
    cout << "What is the name of the character? End" << endl;
    while (cin >> temp)
    {
        name.append(temp);
    }
    cout << "Hello " << name << ", Press return to continue." << endl;
    cin.get();
    cin.get();
    ClearScreen();
}



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

