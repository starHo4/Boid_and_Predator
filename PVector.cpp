#include "PVector.hpp"

// Operator overload
PVector operator+(const PVector &v1, const PVector &v2)
{
    double _x = v1.x + v2.x;
    double _y = v1.y + v2.y;
    return PVector(_x, _y);
}
PVector operator-(const PVector &v1, const PVector &v2)
{
    double _x = v1.x - v2.x;
    double _y = v2.y - v2.y;
    return PVector(_x, _y);
}
PVector operator*(const double &a, const PVector &v)
{
    double _x = a * v.x;
    double _y = a * v.y;
    return PVector(_x, _y);
}

// Methods
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