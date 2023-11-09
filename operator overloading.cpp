#include <iostream>
#include "hammy.h"
#include "hammy.cpp"
using namespace std;
int main(){
    hammy a(4);
    hammy b(2);
    hammy c;

    c = a * b;
    cout << c.num << endl;
}
