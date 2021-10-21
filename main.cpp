#include <iostream>
#include <Compressor.h>
#include "Serializer.h"
#include "Deserializer.h"

struct Vector3{

    float vx, vy, vz;

    void write(Serializer ser){
        ser.Write<float>(vx);
        ser.Write<float>(vy);
        ser.Write<float>(vz);
    }
    void read(Deserializer des){
        des.Read<float>();
        des.Read<float>();
        des.Read<float>();
    }
};
int	main() {

	std::cout << "Hello world" << std::endl;
    int size;
    Serializer ser = Serializer();
    int data1 = 123343;
    int data2 = -1233434;
    float data3 = 1233.434;
    float data4 = -1233.43;
    struct Vector3 data5;
    data5.vx = 25;
    data5.vy= 65463;
    data5.vz = -35;
    ser.Write<int>(data1);
    ser.Write<int>(data2);
    ser.Write<float>(data3);
    ser.Write<float>(data4);
    data5.write(ser);
    Deserializer des = Deserializer(ser.GetContainer(),sizeof(ser.GetContainer()));
    int result1 =des.Read<int>();
    int result2 =des.Read<int>();
    float result3 =des.Read<float>();
    float result4 =des.Read<float>();
    struct Vector3 result5;
    result5.read(des);
    cout<<(result1)<<endl;
    cout<<(result2)<<endl;
    cout<<(result3)<<endl;
    cout<<(result4)<<endl;
    cout<<(result5.vx)<<endl;

    return 0;

}
