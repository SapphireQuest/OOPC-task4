#pragma once

#include <iostream>

class Complex {
    public:
        double Real, Imag;

        Complex() : Real(0), Imag(0){};

        Complex(double realPart) : Real(realPart), Imag(0){};

        Complex(double realPart, double imagPart) : Real(realPart), Imag(imagPart){};

        Complex& operator=(const Complex& s);
        Complex& operator=(double co);

        Complex operator+(Complex,Complex);
        Complex& operator+=(Complex co);

        Complex operator-() const;
        Complex operator-(Complex, Complex);
        Complex& operator-=(Complex co);
       

        Complex operator*(Complex, Complex);
        Complex& operator*=(Complex co);

        Complex operator/(Complex, Complex);
        Complex& operator/=(Complex co);


       




        std::ostream& operator<<(std::ostream& s, const Complex& c);
};

