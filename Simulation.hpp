#ifndef __Simulation__
#define __Simulation__

#include "Header.hpp"

class Simulation
{
private:
    // SFML
    sf::RenderWindow window;

    // Parameter
    Parameter param;
    // Global random generator
    mt19937_64 mt;

    // Flock flock;

    void Render();
    void HandleInput();

public:
    Simulation();
    void Run();
};

#endif