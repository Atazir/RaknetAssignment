#include "Player.h"

Player::Player()
{
	userName = "Cleric";
	thisType = Cleric;
}

Player::Player(std::string name, ClassType classType, int uid)
{
	userName = name;
	thisType = classType;
	userID = uid;
	if (classType == Warrior)
	{
		health = 15;
		attack = 4;
		healVal = 1;
	}
	else if (classType == Rogue)
	{
		health = 10;
		attack = 4;
		healVal = 2;
	}
	else if (classType == Wizard)
	{
		health = 7;
		attack = 5;
		healVal = 2;
	}
	else if (classType == Cleric)
	{
		health = 10;
		attack = 3;
		healVal = 4;
	}
}
