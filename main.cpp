#include "Header.hpp"

int main()
{
    // Main
    // Simulation simulation;
    // simulation.Run();

    // For test
    mt19937_64 mt;
    Parameter P;
    mt.seed(P.RANDOM_SEED);
    uniform_int_distribution<int> uid_10(0, 10);
    for (int i = 0; i < 100; i++)
    {
        cout << uid_10(mt) << " ";
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}