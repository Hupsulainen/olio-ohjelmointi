#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>
#include <iostream>

using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel wheels[4];
    string model;
    string brand;

public:
    Car();
    Car(string m, string b);

    void setEngine(int horsepower, double displacement);
    void setWheels(int size, string type);

    string getModel();
    void setModel(string m);

    string getBrand();
    void setBrand(string b);

    void printDetails();
};

#endif // CAR_H
