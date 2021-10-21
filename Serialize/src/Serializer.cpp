#include "Serializer.h"
using namespace std;

int main(){



}
Serializer::Serializer() {

}

template<typename T>
void Serializer::Write(T val) {

    
    write(val,sizeof(val));

}

