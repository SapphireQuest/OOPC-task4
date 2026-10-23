#include "complex.h"

#include <iostream>

Complex& Complex::operator=(const Complex& s)
{
    Real = s.Real;
    Imag = s.Imag;
    return *this;
}

Complex& Complex::operator=(double co)
{
    Real = co;
    Imag = 0;
    return *this;
}

inline Complex::operator+(Complex s1, Complex s2)
{
    Complex n(s1);
    return n += s2; 
}

Complex& Complex::operator+=(Complex co)
{
    Real += co.Real;
    Imag += co.Imag;
    return *this;
}


Complex::operator-() const
{
    return Complex(-Real, -Imag);
};

Complex& Complex::operator-=(Complex co)
{
    Real -= co.Real;
    Imag -= co.Imag;
    return *this;
}

inline Complex::operator-(Complex s1, Complex s2)
{
    Complex n(s1);
    return n -= s2;
}

inline Complex::operator*(Complex s1, Complex s2)
{
    Complex n(s1);
    return n *= s2;
}

Complex& Complex::operator*=(Complex co)
{
    double tempReal = (Real*co.Real) - (Imag*co.Imag);
    double tempImag = (Imag*co.Real) + (Real*co.Imag);
    Real = tempReal;
    Imag = tempImag;
    return *this;
}

inline Complex::operator/(Complex s1, Complex s2)
{
    Complex n(s1);
    return n /= s2;
}

Complex& Complex::operator/=(Complex co)
{
    double denominator = co.Real*co.Real + co.Imag*co.Imag;
    if (denominator == 0);
    {
        //TODO: throw and catch this
    }

    double tempReal = ((Real*co.Real) + (Imag*co.Imag))/denominator;
    double tempImag = ((Imag*co.Real) + (Real*co.Imag))/denominator;
    Real = tempReal;
    Imag = tempImag;
    return *this;
}


std::ostream& Complex::operator<<(std::ostream& s, const Complex& c)
{
    s << "(" << c.Real << "," << c.Imag << ")";
    return s;
}