#include "car.h"

Car::Car() : model(""), brand("") {}

Car::Car(string m, string b) : model(m), brand(b) {}

void Car::setEngine(int horsepower, double displacement) {
    objEngine.setHorsepower(horsepower);
    objEngine.setDisplacement(displacement);
}

void Car::setWheels(int size, string type) {
    for (int i = 0; i < 4; ++i) {
        wheels[i].setSize(size);
        wheels[i].setType(type);
    }
}

string Car::getModel() {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

string Car::getBrand() {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::printDetails() {
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Moottorin teho: " << objEngine.getHorsepower() << " hp" << endl;
    cout << "Moottorin tilavuus: " << objEngine.getDisplacement() << " L" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Rengas " << (i + 1) << ": " << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
    }
}
