#include "wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int s, string t) : size(s), type(t) {}

int Wheel::getSize() {
    return size;
}

string Wheel::getType() {
    return type;
}

void Wheel::setSize(int s) {
    size = s;
}

void Wheel::setType(string t) {
    type = t;
}
