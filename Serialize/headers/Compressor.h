#ifndef TP2_COMPRESSOR_H
#define TP2_COMPRESSOR_H
#include <vector>
#include "Framework.h"

class Compressor {


public:
   
  template<typename T>
  std::vector<T> VectorCompressor(Vector3 val);
  template<typename T>
  T IntCompressor(int val);
  template<typename T>
  T FloatCompressor(float val);
  
   

 

};


#endif //TP2_COMPRESSOR_HD
