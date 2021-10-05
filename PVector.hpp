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

    // whether or not this vector is another vector.
    bool operator==(const PVector &v) const
    {
        return (x == v.x && y == v.y);
    }
    bool operator!=(const PVector &v) const
    {
        return (x != v.x || y != v.y);
    }
    PVector operator+(const PVector &v) const
    {
        double _x = x + v.x;
        double _y = y + v.y;
        return PVector(_x, _y);
    }
    PVector operator-(const PVector &v) const
    {
        double _x = x - v.x;
        double _y = y - v.y;
        return PVector(_x, _y);
    }
    PVector operator*(const double &a) const
    {
        double _x = a * x;
        double _y = a * y;
        return PVector(_x, _y);
    }

    // Methods
    double Dot(PVector v);
    double Norm();
    void Normalize();
    double Dist(PVector v);
    PVector NullVector();
};

#endif