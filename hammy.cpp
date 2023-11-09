#include "hammy.h"
#include <iostream>
using namespace std;
hammy::hammy(){}
hammy::hammy(int a){
   num = a;
}
hammy hammy::operator*(hammy ho){
    hammy newObj;
    newObj.num = num * ho.num;
    return(newObj);
}
