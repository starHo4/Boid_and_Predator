#ifndef __Prey__
#define __Prey__

#include "HeaderBase.hpp"
#include "Agent.hpp"

class Prey : public Agent
{
private:
   const bool F_live = false;

public:
   Prey() {}

   // Getter
   bool getFLive() { return F_live; };
};

#endif