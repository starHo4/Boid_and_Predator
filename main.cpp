#include "Header.hpp"

int main()
{
    // Main
    // Simulation simulation;
    // simulation.Run();

    // For test
    PVector A(1, 2);
    PVector B(2, 3);
    A += B;
    cout << A.x << ", " << A.y << endl;
    A -= B;
    cout << A.x << ", " << A.y << endl;
    double a = 5;
    A = a * A;
    cout << A.x << ", " << A.y << endl;
    PVector C = A;
    cout << C.x << ", " << C.y << endl;

    return 0;
}