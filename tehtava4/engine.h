#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int hp, double disp);

    // Getterit
    int getHorsepower();
    double getDisplacement();

    // Setterit
    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif // ENGINE_H
