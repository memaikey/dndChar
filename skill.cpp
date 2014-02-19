/**
project: DnDChar
programmer: Maikel van Vliet
date created: 19-02-2014
date edited: 19-02-2014
misc:
*/


#ifndef _skill_
#define _skill_

#include <iostream> //cout
#include <String> //string
#include <unordered_map> //dictionary

using namespace std;

Class Skills ()
{

}

struct skills {string name, string ability, int ranks, int bonus, int misc, bool untrained, bool classSkill, int armorPenalty}; //bonus = race, feats and synergy. Fav. enemy not added.
//need to chance armor penalty for double penalty
#endif //_skill_


/* to skills.h
// (name, ability, rank,, bonus, misc, untrained, class, penalty)
stats.emplace("Appraise", "Int", 0, 0, 0, 0, 1, 0);
stats.emplace("Balance", "Dex", 0, 0, 0, 0, 1, 1);
stats.emplace("Bluff", "Cha", 0, 0, 0, 0, 1, 0);
stats.emplace("Climb", "Str", 0, 0, 0, 0, 1, 1);
stats.emplace("Concentration", "Con", 0, 0, 0, 0, 1, 0);
stats.emplace("Craft", "Int", 0, 0, 0, 0, 1, 0);
stats.emplace("Decipher Script", "Int", 0, 0, 0, 0, 0, 0);
stats.emplace("Diplomacy", "Cha", 0, 0, 0, 0, 1, 0);
stats.emplace("Disable Device", "Int", 0, 0, 0, 0, 0, 0);
stats.emplace("Disguise", "Cha", 0, 0, 0, 0, 1, 0);
stats.emplace("Escape Artist", "Dex", 0, 0, 0, 0, 1, 1);
stats.emplace("Forgery", "Int", 0, 0, 0, 0, 1, 0);
stats.emplace("Gather Information", "Cha", 0, 0, 0, 0, 1, 0);
stats.emplace("Handle Animal", "Cha", 0, 0, 0, 0, 0, 0);
stats.emplace("Heal", "Wis", 0, 0, 0, 0, 1, 0);
stats.emplace("Jump", "Str", 0, 0, 0, 0, 1, 1);
stats.emplace("Knowledge (arcana)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (architecture and engineering)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (dungeoneering)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (geography)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (history)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (local)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (nature)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (nobility and royalty)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (religion)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Knowledge (the planes)", "", 0, 0, 0, 0, 0, 0);
stats.emplace("Hide", "", 0, 0, 0, 0, 1, 1);
stats.emplace("Intimidate", "Cha", 0, 0, 0, 0, 1, 0);
stats.emplace("Listen", "Wis", 0, 0, 0, 0, 1, 0);
stats.emplace("Move Silently", "Dex", 0, 0, 0, 0, 1, 1);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
stats.emplace("", "", 0, 0, 0, 0, 1, 0);
*/
