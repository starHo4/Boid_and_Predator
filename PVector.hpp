#ifndef __PVector__
#define __PVector__

#include <cmath>

struct PVector
{
    double x, y;

    // Constructors
    PVector() {}
    PVector(double _x, double _y)
    {
        x = _x;
        y = _y;
    }

    // Substitute PVector
    PVector operator=(const PVector v)
    {
        x = v.x;
        y = v.y;
        return *this;
    }
    // whether or not this vector is another vector.
    bool operator==(const PVector &v)
    {
        return (x == v.x && y == v.y);
    }
    bool operator!=(const PVector &v)
    {
        return (x != v.x || y != v.y);
    }
    // Overload of operator "+="
    PVector operator+=(const PVector &v)
    {
        x += v.x;
        y += v.y;
        return *this;
    }
    // Overload of operator "-="
    PVector operator-=(const PVector &v)
    {
        x -= v.x;
        y -= v.y;
        return *this;
    }

    // Methods
    double Dot(PVector v);
    double Norm();
    void Normalize();
    double Dist(PVector v);
    PVector NullVector();
};

PVector operator+(const PVector &v1, const PVector &v2);
PVector operator-(const PVector &v1, const PVector &v2);
PVector operator*(const double &a, const PVector &v);

#endif