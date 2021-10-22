#include <cstdint>
#include <iostream>
#include <algorithm>
#include "Serializer.h"
#include "Deserializer.h"


struct Vector3 {

	float vx, vy, vz;

	void write(Serializer * ser) {
		ser->Write<float>(vx, sizeof(vx));
		ser->Write<float>(vy, sizeof(vy));
		ser->Write<float>(vz, sizeof(vz));
	}

	void read(Deserializer * des) {
		vx = des->Read<float>();
		vy = des->Read<float>();
		vz = des->Read<float>();
	}
};


enum class PlatformEndianness
{
	BigEndian,
	LittleEndian
};

constexpr PlatformEndianness DetectEndianness()
{

	union
	{
		uint32_t i;
		char c[4];
	} testEndian = { 0x01020304 };

	return (testEndian.c[0] == 1) ? PlatformEndianness::BigEndian : PlatformEndianness::LittleEndian;
}

template<typename T>
void SwapEndian(T &val)
{

	union U
	{
		T val;
		std::array<std::uint8_t, sizeof(T)> raw;
	} src, dst;

	src.val = val;
	std::reverse_copy(src.raw.begin(), src.raw.end(), dst.raw.begin());
	val = dst.val;
}