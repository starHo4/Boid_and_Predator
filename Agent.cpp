#include "Agent.hpp"

void Agent::Move()
{
    pos += (speed * vel);
}