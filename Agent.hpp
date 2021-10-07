#ifndef __Agent__
#define __Agent__

#include "Header.hpp"

class Agent
{
public:
    // Constructor
    Agent() {}

    // Getter
    PVector getPos() { return pos; };
    PVector getVel() { return vel; };
    double getAngle() { return angle; };
    double getSpeed() { return speed; };

    // Public methods
    void Move();

private:
    PVector pos;
    PVector vel;
    double angle;
    double speed;
};

#endif