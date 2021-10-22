#ifndef TP2_COMPRESSOR_H
#define TP2_COMPRESSOR_H
#include <vector>


class Compressor {


public:
  int IntCompressor(int val);
  float FloatCompressor(float val);
  template<typename T>
  std::vector<T> VectorCompressor(std::vector<T> val);

  

private:

};


#endif //TP2_COMPRESSOR_H
