#include "Compressor.h"
union compresstype
{
    uint8_t a;
    uint16_t b;
    uint32_t c;
    uint64_t d;
};

template<typename T>
 T Compressor::FloatCompressor(float val, float min) {

    int64_t absVal = (val+min) * 100;

    if (absVal <= INT8_MAX){
        int8_t valComp = absVal;
        return valComp;
    }
    else if (absVal <= INT16_MAX){

        int16_t valComp = absVal;
        return valComp;
    }
    else if (absVal < INT32_MAX){
        
        int32_t valComp = absVal;
        return valComp;
    }
    else{
        int64_t valComp = absVal;
        return valComp;
    }
    

}
 template<typename T>
 T Compressor::QuaternionCompressor(Quaternion qVal, Quaternion min)
 {
     std::vector<int64_t> vAbs = { (qVal.val_w + min.val_w) * 100, (qVal.val_x +min.val_x) * 100, (qVal.val_y + min.val_y) * 100, (qVal.val_z+min.val_z) * 100 };

     if ((vAbs[0] && vAbs[1] && vAbs[2] && vAbs[3]) <= INT8_MAX) {
         std::vector<int8_t>  valComp = vAbs;
         return valComp;
     }
     else if ((vAbs[0] && vAbs[1] && vAbs[2] && vAbs[3]) <= INT16_MAX) {

         std::vector<int16_t>valComp = vAbs;
         return valComp;
     }
     else if ((vAbs[0] && vAbs[1] && vAbs[2] && vAbs[3]) <= INT32_MAX) {

         std::vector<int32_t> valComp = vAbs;
         return valComp;
     }
     else {
         std::vector<int64_t> valComp = vAbs;
         return valComp;
     }
 }
 template<typename T>
  std::vector<T> Compressor::VectorCompressor(Vector3<float> val, Vector3<float> min)
 {
      std::vector<int64_t> vAbs = { (val.vx + min.vx) * 100, (val.vy + min.vy) * 100, abs(val.vz + min.vz) * 100};

      if ((vAbs[0] && vAbs[1] && vAbs[2]) <= INT8_MAX) {
          std::vector<int8_t>  valComp = vAbs;
          return valComp;
      }
      else if ((vAbs[0] && vAbs[1] && vAbs[2]) <= INT16_MAX) {

          std::vector<int16_t>valComp = vAbs;
          return valComp;
      }
      else if ((vAbs[0] && vAbs[1] && vAbs[2]) < INT32_MAX) {

          std::vector<int32_t> valComp = vAbs;
          return valComp;
      }
      else {
          std::vector<int64_t> valComp = vAbs;
          return valComp;
      }
 }

 template<typename T>
T Compressor::IntCompressor(int val, int min) {

    int absVal = (val + min);

    if (absVal <= INT8_MAX) {
        int8_t valComp = absVal;
        return valComp;
    }
    else if (absVal <= INT16_MAX) {

        int16_t valComp = absVal;
        return valComp;
    }
    else if (absVal < INT32_MAX) {

        int32_t valComp = absVal;
        return valComp;
    }
    else {
        int64_t valComp = absVal;
        return valComp;
    }

   
}