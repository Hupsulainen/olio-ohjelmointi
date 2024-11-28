#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
private:

public:
    virtual void callOut() const {
    cout << "Eläin ääntelee." <<endl;
    }

    virtual ~Animal() = default;
};

#endif // ANIMAL_H
