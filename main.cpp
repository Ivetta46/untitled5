#include <iostream>
#include <iomanip>
#include <conio.h>

class Energy
{
    static const double Pi;

public:
    Energy(double value = 100):
            _value(value)
    {
    }

    void set_radius(double radius)
    {
        _radius = radius;
    }

    double get_radius() const
    {
        return _radius;
    }

    double area() const
    {
        return Pi * _radius * _radius;
    }

    double circuit() const
    {
        return 2.0 * Pi * _radius;
    }

    double diameter() const
    {
        return 2.0 * _radius;
    }

private:
    double _radius;
};

const double Circle::Pi = 3.14159265358979323;
