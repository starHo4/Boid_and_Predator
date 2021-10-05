#include "Simulation.hpp"

Simulation::Simulation()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    window.create(sf::VideoMode(800, 800), "", sf::Style::None, settings);
    window.setFramerateLimit(60);
}

void Simulation::Run()
{
    for (int t = 0; t < 8000; t++)
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
    window.clear();
    window.display();
}