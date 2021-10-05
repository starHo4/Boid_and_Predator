#ifndef __Simulation__
#define __Simulation__

#include "Header.hpp"

class Simulation
{
private:
    // SFML
    sf::RenderWindow window;

    // Parameter param;

    // Flock flock;

    void Render();
    void HandleInput();

public:
    Simulation();
    void Run();
};

#endif