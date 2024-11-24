#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public chef
{
public:
    ItalianChef(string n);
    void makePasta();
    ~ItalianChef();

};

#endif // ITALIANCHEF_H
