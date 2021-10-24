#include "Compressor.h"
union compresstype
{
    uint8_t a;
    uint16_t b;
    uint32_t c;
    uint64_t d;
};

template<typename T>
 T Compressor::FloatCompressor(float val) {

    uint64_t absVal = abs(val) * 100;

    if (absVal <= UINT8_MAX){
        uint8_t valComp = absVal;
        return valComp;
    }
    else if (absVal <= UINT16_MAX){

        uint16_t valComp = absVal;
        return valComp;
    }
    else if (absVal < UINT32_MAX){
        
        uint32_t valComp = absVal;
        return valComp;
    }
    else{
        uint64_t valComp = absVal;
        return valComp;
    }
    

}
 template<typename T>
  std::vector<T>Compressor::VectorCompressor(Vector3 val)
 {
      std::vector<uint64_t> vAbs = { abs(val.vx) * 100, abs(val.vy) * 100, abs(val.vz) * 100};

      if ((vAbs[0] && vAbs[1] && vAbs[2]) <= UINT8_MAX) {
          std::vector<uint8_t>  valComp = vAbs;
          return valComp;
      }
      else if ((vAbs[0] && vAbs[1] && vAbs[2]) <= UINT16_MAX) {

          std::vector<uint16_t>valComp = vAbs;
          return valComp;
      }
      else if ((vAbs[0] && vAbs[1] && vAbs[2]) < UINT32_MAX) {

          std::vector<uint32_t> valComp = vAbs;
          return valComp;
      }
      else {
          std::vector<uint64_t> valComp = vAbs;
          return valComp;
      }
 }

 template<typename T>
T Compressor::IntCompressor(int val) {

    unsigned int absVal = abs(val);

    if (absVal <= UINT8_MAX) {
        uint8_t valComp = absVal;
        return valComp;
    }
    else if (absVal <= UINT16_MAX) {

        uint16_t valComp = absVal;
        return valComp;
    }
    else if (absVal < UINT32_MAX) {

        uint32_t valComp = absVal;
        return valComp;
    }
    else {
        uint64_t valComp = absVal;
        return valComp;
    }

   
}