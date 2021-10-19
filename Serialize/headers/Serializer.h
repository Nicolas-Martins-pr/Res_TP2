#ifndef RES_TP2_SERIALIZER_H
#define RES_TP2_SERIALIZER_H


template<typename T>
class Serializer {

public:
	//TODO apply correct types to methods
	Serializer(int size);
	Serializer();
	void Write(T val);
private:
	//TODO change to correct types and create getters + prendre en compte resize du container si besoin 
	char* container;
	char* position;
};


#endif //RES_TP2_SERIALIZER_H