#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string n) : chef(n) {
    name=n;
    cout << "Italian Chef "<< name <<" konstruktori"<< endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef "<<name<< " makes pasta"<<endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef "<< name <<" destruktori"<< endl;
    }
