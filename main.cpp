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
#include <array> //array
#include <String> //string
using namespace std;

class Abilities
{
public:
    Abilities(string n);
    void giveAbilities(array<int,6> input);
    void giveInfo();
    void inputRolls();
private:
    int Str;
    int Dex;
    int Con;
    int Int;
    int Cha;
    int Wis;
    string name;
};

Abilities::Abilities(string n)
{
    name = n;
}

void Abilities::giveAbilities(array<int,6> input)
{
    Str = input[0];
    Dex = input[1];
    Con = input[2];
    Int = input[3];
    Cha = input[4];
    Wis = input[5];
}

void Abilities::giveInfo()
{
    cout << name << endl;
    cout << "Str = " << setw(2) << Str << endl;
    cout << "Dex = " << setw(2) << Dex << endl;
    cout << "Con = " << setw(2) << Con << endl;
    cout << "Int = " << setw(2) << Int << endl;
    cout << "Cha = " << setw(2) << Cha << endl;
    cout << "Wis = " << setw(2) << Wis << endl;
    cout << endl;
}

void Abilities::inputRolls()
{
    array<int,6> input;
    cout << "Give the 6 values you rolled" << endl;
    cout << "The order is Str, Dex, Con, Int, Cha and Wis." << endl;
    for(int i = 0; i<6; ++i)
    {
        cin >> input[i];
    }
    giveAbilities(input);
    cout << endl;
}

int main()
{
    Abilities Maikel("Zinnealla");
    array<int,6> myArray;
    myArray.fill(10);
    Maikel.giveAbilities(myArray);
    Maikel.giveInfo();
    Maikel.inputRolls();
    Maikel.giveInfo();
    return 0;
}
