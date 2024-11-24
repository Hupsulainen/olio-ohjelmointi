#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class chef
{

protected:
    string name;

public:
    chef(string n);
    void makeSalad();
    void makeSoup();
    ~chef();
    string getName();

};

#endif // CHEF_H
