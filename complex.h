#pragma once

#include <iostream>

class Complex {
    public:
        double Real, Imag;

        Complex() : Real(0), Imag(0){};

        Complex(double realPart) : Real(realPart), Imag(0){};

        Complex(double realPart, double imagPart) : Real(realPart), Imag(imagPart){};

        Complex& operator=(const Complex& s)
        {
            Real = s.Real;
            Imag = s.Imag;
            return *this;
        };

        Complex operator-() const
        {
            return Complex(-Real, -Imag);
        };

        Complex& operator=(double co)
        {
            Real = co;
            Imag = 0;
            return *this;
        }

        Complex operator+(const Complex& co) const
        {
            Complex summed;
            summed.Real = this->Real + co.Real;
            summed.Imag = this->Imag + co.Imag;
            return summed; 
        }

        Complex& operator-=(Complex co)
        {
            Real -= co.Real;
            Imag -= co.Imag;
            return *this;
        }

        Complex operator*(const Complex& co) const
        {
            Complex multiplied;
            multiplied.Real = this->Real * co.Real;
            multiplied.Imag = this->Imag * co.Imag;
            return multiplied;
        }

        Complex& operator*=(Complex co)
        {
            Real *= co.Real;
            Imag *= co.Imag;
            return *this;
        }

        Complex operator/(const Complex& co) const
        {
            Complex divided;
            divided.Real = this->Real / co.Real;
            divided.Imag = this->Imag / co.Imagl
            return divided;
        }

        Complex& oeprator/=(Complex co)
        {
            Real /= co.Real;
            Imag /= co.Imag;
            return *this;
        }





        Complex operator-(Complex, Complex);

        std::ostream& operator<<(std::ostream& s, const Complex& c)
        {
            s << "(" << c.Real << "," << c.Imag << ")";
            return s;
        }
};

inline Complex operator-(Complex s1, Complex s2)
{
    Complex n(s1);
    return n -= s2;
}