#ifndef RES_TP2_DESERIALIZER_H
#define RES_TP2_DESERIALIZER_H


class Deserializer {

public:
	//TODO apply template ? and correct types to methods
	Deserializer(std::vector<char> container, int size);
    template<typename T>
	T Read();

private:
	//TODO add correct variables and getters ??
	std::vector<char> containerToRead;
	int sizeOfContainer;
};



#endif //RES_TP2_DESERIALIZER_H