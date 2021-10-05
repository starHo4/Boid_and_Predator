#include "PVector.hpp"

double PVector::Dot(PVector v)
{
    double a = x * v.x + y * v.y;
    return a;
}

double PVector::Norm()
{
    return sqrt(this->Dot(*this));
}

void PVector::Normalize()
{
    double norm = this->Norm();
    if (norm == 0)
    {
        x = 0;
        y = 0;
    }
    else
    {
        x = x / norm;
        y = y / norm;
    }
}

double PVector::Dist(PVector v)
{
    PVector w = *this - v;
    return w.Norm();
}

PVector PVector::NullVector()
{
    PVector w;
    w.x = 0;
    w.y = 0;
    return w;
}