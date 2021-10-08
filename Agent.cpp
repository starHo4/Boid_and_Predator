#include "Agent.hpp"

void Agent::init(mt19937_64 &mt, Parameter &P)
{
    uniform_real_distribution<double> udd_FW(0, P.FIELD_W);
    uniform_real_distribution<double> udd_FH(0, P.FIELD_H);
    uniform_real_distribution<double> udd_2pi(0, 2 * PI);

    pos = PVector(udd_FW(mt), udd_FH(mt));
    angle = udd_2pi(mt);
    vel = PVector(cos(angle), sin(angle));
    speed = P.s;
}

void Agent::Move()
{
    pos += (speed * vel);
}