#ifndef RES_TP2_DESERIALIZER_H
#define RES_TP2_DESERIALIZER_H
#include <fstream>


class Deserializer {

public:
	//TODO apply template ? and correct types to methods
	Deserializer(std::vector<char> container);
    template<typename T>
	T Read();

private:
	//TODO add correct variables and getters ??
};


#endif //RES_TP2_DESERIALIZER_H