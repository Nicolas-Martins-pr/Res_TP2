#ifndef RES_TP2_SERIALIZER_H
#define RES_TP2_SERIALIZER_H
#include <vector>

class Serializer {

public:
	Serializer(int size);
	Serializer();
    template<typename T>
    void Serialize(T val);

    template<typename T>
	void Write(T val, size_t size)
	{
		memcpy(container.data() + position, & val, size);
		position += size;
	}

    const std::vector<char> GetContainer(){return container;}
private:
	std::vector<char> container;
	int position = 0;
};


#endif //RES_TP2_SERIALIZER_H