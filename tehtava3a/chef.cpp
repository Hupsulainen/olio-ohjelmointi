#include "chef.h"
#include <iostream>

chef::chef(string n) {
    name = n;
     cout << "Chef "<< name <<" konstruktori"<< endl;
}

void chef::makeSalad()
{
    cout << "Chef "<< name <<" makes salad"<< endl;
}

void chef::makeSoup()
{
    cout << "Chef " <<name<<" makes soup"<< endl;
}

string chef::getName()
{
    return name;
}

chef::~chef()
{
    cout << "Chef "<< name <<" destruktori"<< endl;
}



