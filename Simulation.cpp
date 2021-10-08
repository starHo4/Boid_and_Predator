#include "Simulation.hpp"

Simulation::Simulation()
{
    // Initialization
    param = new Parameter();
    flock = new Flock();
    // Set a random seed of mt.
    mt.seed(param->RANDOM_SEED);
    // Init a flock
    for (int i = 0; i < param->N; i++)
    {
        Agent a;
        a.init(mt, *param);
        flock->addAgent(a);
    }

    // SFML
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    window.create(sf::VideoMode(param->FIELD_W, param->FIELD_H), "", sf::Style::None, settings);
    window.setFramerateLimit(param->FPS);
}

void Simulation::Run()
{
    for (int t = 0; t < param->maxTimesteps; t++)
    {
        HandleInput();
        MainProcess();
        Render();
        if (!window.isOpen())
        {
            break;
        }
    }
}

void Simulation::MainProcess()
{
    flock->flocking(mt);
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

    DrawFlock();

    window.display();
}

void Simulation::DrawFlock()
{
    for (int i = 0; i < param->N; i++)
    {
        sf::ConvexShape shape;
        double r = 5;
        shape.setPointCount(3);
        shape.setOrigin(0, 0);
        shape.setPoint(0, sf::Vector2f(0, -r));
        shape.setPoint(1, sf::Vector2f(-r * cos(54 * PI / 180), r * sin(54 * PI / 180)));
        shape.setPoint(2, sf::Vector2f(r * cos(54 * PI / 180), r * sin(54 * PI / 180)));
        shape.rotate(flock->getAgent(i).getAngle() * 180 / PI + 90);
        shape.setPosition(flock->getAgent(i).getPos().x, flock->getAgent(i).getPos().y);
        shape.setOutlineColor(sf::Color::Black);
        shape.setOutlineThickness(0.5);
        shape.setFillColor(sf::Color::Red);

        window.draw(shape);
    }
}