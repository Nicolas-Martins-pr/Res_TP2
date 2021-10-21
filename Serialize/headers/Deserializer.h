#ifndef RES_TP2_DESERIALIZER_H
#define RES_TP2_DESERIALIZER_H
#include <fstream>
//#include "sstream"


class Deserializer {

public:
	//TODO apply template ? and correct types to methods
	Deserializer(std::vector<char> container, int size);
    template<typename T>
	T Read();

private:
	//TODO add correct variables and getters ??
};



#endif //RES_TP2_DESERIALIZER_H