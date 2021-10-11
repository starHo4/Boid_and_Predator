#ifndef __Agent__
#define __Agent__

#include "HeaderBase.hpp"

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
    void init(mt19937_64 &mt, Parameter &P);
    virtual void Move();

private:
protected:
    PVector pos;
    PVector vel;
    double angle;
    double speed;
};

#endif