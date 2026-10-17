#pragma once

class Complex {
    public:
        double Real, Imag;

        Complex() : Real(0), Imag(0){};

        Complex(double realPart) : Real(realPart), Imag(0){};

        Complex(double realPart, double imagPart) : Real(realPart), Imag(imagPart){};

        
        
};