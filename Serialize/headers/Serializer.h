#ifndef RES_TP2_SERIALIZER_H
#define RES_TP2_SERIALIZER_H
#include "Framework.h"
#include <vector>

//using std::ios::binary;
using namespace std;
class Serializer {

public:
	//TODO apply correct types to methods

	Serializer(int size);
    template<typename T>
    void Serialize(T val);
    template<typename T>
	void Write(T val, int size);
   const vector<char> GetContainer(){return container;};

	//void Write(val, int size);
private:
	//TODO change to correct types and create getters + prendre en compte resize du container si besoin 
	vector<char> container;
	int position;
};



#endif //RES_TP2_SERIALIZER_H