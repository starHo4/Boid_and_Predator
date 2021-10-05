#include "Header.hpp"

int main()
{
    // Main
    Simulation simulation;
    simulation.Run();

    // For test
    PVector A(1, 1);
    PVector B(0, 2);
    if (A == B)
    {
        cout << "hoshi" << endl;
    }
    PVector C = A + B;
    cout << "A + B = " << C.x << ", " << C.y << endl;
    double dot = A.Dot(B);
    cout << "A @(dot) B = " << dot << endl;
    double norm = A.Norm();
    cout << "Norm of A = " << norm << endl;
    A.Normalize();
    cout << "Normalize A = " << A.x << ", " << A.y << endl;
    double dist = A.Dist(B);
    cout << "Distance A and B = " << dist << endl;

    return 0;
}