#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog : public Animal
{
public:
    void callOut() const override{
        cout<<"Koira haukkuu!"<<endl;
    }

    ~Dog() override{

    }

};

#endif // DOG_H
