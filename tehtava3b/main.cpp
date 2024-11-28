#include "animal.h"
#include "dog.h"
#include <iostream>

using namespace std;

int main()
{
    Animal* animal = new Animal();
    animal->callOut();
    delete animal;


    Dog* dog = new Dog();
    dog->callOut();
    delete dog;

    return 0;
}
