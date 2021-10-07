#include "Simulation.hpp"

Simulation::Simulation()
{
    // Initialization
    mt.seed(param.RANDOM_SEED);
    // SFML
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    window.create(sf::VideoMode(param.FIELD_W, param.FIELD_H), "", sf::Style::None, settings);
    window.setFramerateLimit(param.FPS);
}

void Simulation::Run()
{
    for (int t = 0; t < param.maxTimesteps; t++)
    {
        HandleInput();
        Render();
        if (!window.isOpen())
        {
            break;
        }
    }
}

void Simulation::HandleInput()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if ((event.type == sf::Event::Closed) ||
            (event.type == sf::Event::KeyPressed &&
             event.key.code == sf::Keyboard::Escape))
        {
            window.close();
        }
    }
}

void Simulation::Render()
{
    window.clear(sf::Color(255, 240, 237));
    window.display();
}