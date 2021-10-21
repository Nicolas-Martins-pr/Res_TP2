#include "Deserializer.h"

template<typename T>
T Deserializer::Read() {
	mcpy(containerToRead, val, sizeOfContainer);
	return val;
}

Deserializer::Deserializer(std::vector<char> container, int size) {
	containerToRead = container;
	sizeOfContainer = size;
}
