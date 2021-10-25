#ifndef RES_TP2_PLAYER_H
#define RES_TP2_PLAYER_H

#include "Framework.h"



class Player {

public:
	Player(Vector3<float> position, Vector3<float> taille, struct Quaternion rotation, int hp, int armor, float money, char* playerName);
	Player();

	void write(Serializer* ser);
	void read(Deserializer* des);

	void printInfos();

	Vector3<float> GetPosition() const { return position; }
	Vector3<float> GetTaille() const { return taille; }
	Quaternion GetRotation() const { return rotation; }
	int GetHealth() const { return health; }
	int GetArmor() const { return armor; }
	float GetMoney() const { return money; }
	char* GetName() const { return name; }

	void SetPosition(Vector3<float> newPosition);
	void SetTaille(Vector3<float> newTaille);
	void SetRotation(Quaternion newRotation);
	void SetHealth(int newHealth);
	void SetArmor(int newArmor);
	void SetMoney(float newMoney);
	void SetName(char * newName);

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
	size_t nameMaxSize = 128;
	char * name;
};


#endif //RES_TP2_PLAYER_H