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

Abilities::Abilities(string n) : name(n)
{
    stats.emplace("str", 10);
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

int main()
{
    Abilities Maikel("Zinnealla");
    Maikel.giveInfo();
    Maikel.inputRolls();
    Maikel.giveInfo();
    return 0;
}
