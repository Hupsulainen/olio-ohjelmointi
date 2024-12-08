#include "classb.h"
#include <iostream>
using namespace std;


ClassB::ClassB() : info("") {}


string ClassB::getInfo() {
    return info;
}


void ClassB::setInfo(string newInfo) {
    info = newInfo;
}
