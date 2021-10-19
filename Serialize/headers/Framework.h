#include <cstdint>

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