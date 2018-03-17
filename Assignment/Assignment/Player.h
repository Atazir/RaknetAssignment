#include <iostream>
#include <string>
#include <RakNetTypes.h>
#include <RakString.h>

class Player
{
public:
	enum ClassType { Warrior, Wizard, Rogue, Cleric };

	Player();
	Player(std::string name, ClassType classType, int uid);

	int userID = -1;
	bool alive = true;

private:
	ClassType thisType;
	std::string userName;
	RakNet::SystemAddress address;
	int health;
	int attack;
	int healVal;
};