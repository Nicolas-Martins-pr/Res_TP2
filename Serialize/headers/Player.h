#ifndef RES_TP2_PLAYER_H
#define RES_TP2_PLAYER_H

#include "Framework.h"



class Player {

public:
	Player(Vector3<float> position, Vector3<float> taille, struct Quaternion rotation, int hp, int armor, float money, char * playerName) : position(position), taille(taille), health(hp), armor(armor), money(money), name(playerName)
	{
	}
	Player();


	const Vector3<float> GetPosition() { return position; }
	const Vector3<float> GetTaille() { return taille; }
	const Quaternion GetRotation() { return rotation; }
	const int GetHealth() { return health; }
	const int GetMaxHealth() { return healthMax; }
	const int GetMinHealth() { return healthMin; }
	const int GetArmor() { return armor; }
	const int GetMaxArmor() { return armorMax; }
	const int GetMinArmor() { return armorMin; }
	const float GetMoney() { return money; }
	const float GetMaxMoney() { return moneyMin; }
	const float GetMinMoney() { return moneyMax; }
	const char* GetName() { return name; }
private:
	Vector3<float> position;
	Vector3<float> taille;
	struct Quaternion rotation;
	int health;
	int healthMax = 300;
	int healthMin = 0;
	int armor;
	int armorMax = 50;
	int armorMin = 0;
	float money;
	float moneyMax = 99999.99;
	float moneyMin = -99999.99;
	//TODO 128 max characters
	char * name;
};


#endif //RES_TP2_PLAYER_H