#ifndef WHEEL_H
#define WHEEL_H
#include <string>

using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int s, string t);

    // Getterit
    int getSize();
    string getType();

    // Setterit
    void setSize(int s);
    void setType(string t);
};

#endif // WHEEL_H
