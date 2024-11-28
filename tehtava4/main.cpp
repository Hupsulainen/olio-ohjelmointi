#include <iostream>
#include "car.h"

using namespace std;

int main() {

    Car objCar("Toyota", "Corolla");


    objCar.setEngine(150, 2.0);
    objCar.setWheels(17, "kesärengas");


    objCar.printDetails();

    return 0;
}
