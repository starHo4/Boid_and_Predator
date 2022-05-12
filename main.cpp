#include "Header.hpp"

// For test
class Clock
{
protected:
public:
    int hour;
    int minute;
    int second;
    Clock();
    virtual void Move();
};

Clock::Clock()
{
    hour = 12;
    minute = 35;
    second = 40;
}

void Clock::Move()
{
    second++;
}

class HoshiClock : public Clock
{
public:
    virtual void Move();
};

void HoshiClock::Move()
{
    second+=2;
}

int main()
{
    // Main
    Simulation simulation;
    simulation.Run();

    // For test
    Clock c;
    cout << c.hour << ":" << c.minute << ":" << c.second << endl;
    c.Move();
    cout << c.hour << ":" << c.minute << ":" << c.second << endl;

    HoshiClock hc;
    cout << hc.hour << ":" << hc.minute << ":" << hc.second << endl;
    hc.Move();
    cout << hc.hour << ":" << hc.minute << ":" << hc.second << endl;

    vector<Clock> clocks;
    clocks.clear();
    clocks.push_back(HoshiClock());
    clocks[0].(HoshiClock)Move();
    cout << clocks[0].hour << ":" << clocks[0].minute << ":" << clocks[0].second << endl;

    return 0;
}