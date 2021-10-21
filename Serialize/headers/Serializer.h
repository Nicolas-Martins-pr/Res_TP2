#ifndef RES_TP2_SERIALIZER_H
#define RES_TP2_SERIALIZER_H
#include <WinSock2.h>
#include <iostream>
#include "../headers/Framework.h"
#include <vector>
#include <fstream>

//using std::ios::binary;
using namespace std;
class Serializer {

public:
	//TODO apply correct types to methods

	Serializer(int size);
    Serializer();
    template<typename T>
    void Serialize(T val);
    template<typename T>
	void Write(T val);
   const vector<char> GetContainer(){return container;};

	//void Write(val, int size);
private:
	//TODO change to correct types and create getters + prendre en compte resize du container si besoin 
	vector<char> container;
	char* position;
};



#endif //RES_TP2_SERIALIZER_H