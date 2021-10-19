#ifndef RES_TP2_PLAYER_H
#define RES_TP2_PLAYER_H

struct quaternion_t
{
	float val_w;
	float val_x;
	float val_y;
	float val_z;
};

struct vector3_t
{
	float val_x;
	float val_y;
	float val_z;
};


class Player {

public:
	Player();

private:
	//TODO change to correct types and ranges and create getters
	vector3_t position;
	vector3_t taille;
	quaternion_t rotation;
	int health;
	int armure;
	int argent;
	//TODO max 128 char
	char* name;
};


#endif //RES_TP2_PLAYER_H