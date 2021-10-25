#include "Serializer.h"
#include "Deserializer.h"
#include "Player.h"


using namespace std;
int	main() {

    Quaternion playerRot = { 0.194,-0.003,-0.931 ,0.310 };
    Vector3<float> position = { 200,-300,50 };
    Vector3<float> taille = { 1,1,1 };
    Player * player = new Player(position,taille,playerRot, 50,25, 111.111, "Patrick");

    
    Serializer* ser = new Serializer();

    player->write(ser);

    Deserializer* des = new Deserializer(ser->GetContainer(), sizeof(ser->GetContainer()));

    Player * resultPlayer = new Player();
	resultPlayer->read(des);

    resultPlayer->printInfos();

    return 0;

}
