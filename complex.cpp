#pragma once

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

inline Complex::operator+(const Complex& co) const
{
    Complex summed;
    summed.Real = this->Real + co.Real;
    summed.Imag = this->Imag + co.Imag;
    return summed; 
}

Complex::operator-() const
{
    return Complex(-Real, -Imag);
};