#ifndef __Simulation__
#define __Simulation__

#include "Header.hpp"

class Flock;

class Simulation
{
private:
    // SFML
    sf::RenderWindow window;

    // Parameter
    Parameter *param;
    // Global random generator
    mt19937_64 mt;

    Flock *flock;

    // SFML
    void Render();
    void HandleInput();
    void DrawFlock();
    // Main process
    void MainProcess();

public:
    Simulation();
    void Run();
};

#endif