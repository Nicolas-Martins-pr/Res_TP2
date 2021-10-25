#ifndef TP2_COMPRESSOR_H
#define TP2_COMPRESSOR_H
#include <vector>
#include "Framework.h"

class Compressor {


public:
   
  template<typename T>
  std::vector<T> VectorCompressor(Vector3<float> val, Vector3<float> min);
  template<typename T>
  T IntCompressor(int val, int min);
  template<typename T>
  T FloatCompressor(float val, float min);
  template<typename T>
  T QuaternionCompressor(Quaternion val, Quaternion min);
  
   

 

};


#endif //TP2_COMPRESSOR_HD
