#include "Serializer.h"
#include "Deserializer.h"
#include "Player.h"


using namespace std;
int	main() {



    int terrainXYMax = 500;
    int terrainXYMin = -500;
    int terrainZMax = 100;
    int terrainZMin = 0;


    Quaternion playerRot = {1,1,1,1};
    Vector3<float> position = { 0,0,0 };
    Vector3<float> taille = { 1,1,1 };
    Player * player = new Player(position,taille,playerRot, 50,100, 10000, "Patrick");



    //int size = 10000;
    Serializer* ser = new Serializer();

    ser->Serialize<Player>(*player, sizeof(player));


    Deserializer* des = new Deserializer(ser->GetContainer(), sizeof(ser->GetContainer()));

    Player resultPlayer = des->Read<Player>();

    std::cout << resultPlayer.GetName() << endl;

    /*
    int data1 = 123343;
    int data2 = -1233434;
    float data3 = 1233.454;
    float data4 = -1233.43;
    struct Vector3<float> data5;
    data5.vx = 25;
    data5.vy= 65463;
    data5.vz = -35;
    struct Quaternion data6;
    data6.val_w = 0;
    data6.val_x = 1.1;
    data6.val_y = 2.2;
    data6.val_z = 3.3;

    ser->Serialize<int>(data1, sizeof(data1));
    ser->Serialize<int>(data2, sizeof(data2));
    ser->Serialize<float>(data3, sizeof(data3));
    ser->Serialize<float>(data4, sizeof(data4));
    data5.write(ser);
    data6.write(ser);
    Deserializer * des = new Deserializer(ser->GetContainer(),sizeof(ser->GetContainer()));
    int result1 = des->Read<int>();
    int result2 = des->Read<int>();
    float result3 = des->Read<float>();
    float result4 = des->Read<float>();
    struct Vector3<float> result5;
    result5.read(des);
    struct Quaternion result6;
    result6.read(des);
    cout<<result1<<endl;
    cout<<result2<<endl;
    cout<<result3<<endl;
    cout<<result4<<endl;
    cout<<result5.vx<< "/"<<result5.vy << "/"<<result5.vz << endl;
    cout<<result6.val_w<< "/"<< result6.val_x << "/"<< result6.val_y << "/" << result6.val_z << endl;*/

    return 0;

}
