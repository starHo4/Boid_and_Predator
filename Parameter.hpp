#ifndef __Parameter__
#define __Parameter__

struct Parameter
{
    //Constructor
    Parameter() {}

    // Random seed
    const unsigned int RANDOM_SEED = 1024;

    // Parameter
    const unsigned int maxTimesteps = 1000;
    const unsigned int N = 100;
    const unsigned int N_prey = 80;
    const unsigned int N_pred = N - N_prey;

    // For SFML
    const unsigned int FPS = 60;
    const double FIELD_W = 1200;
    const double FIELD_H = 1200;

    // Agent
    const double s = 1.0; // Speed
};

#endif