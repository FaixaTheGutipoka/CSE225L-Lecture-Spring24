#include "complex.h"
#include <iostream>
#include <math.h>
using namespace std;
Complex::Complex(){
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i){
    Real = r;
    Imaginary = i;
}
Complex Complex::operator+(Complex a){
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
Complex Complex::operator*(Complex a){
    Complex t;
    t.Real = (Real * a.Real) - (Imaginary * a.Imaginary);
    t.Imaginary = (a.Real * Imaginary) + (Real * a.Imaginary);
    return t;
}
Complex Complex::operator/(Complex a){
    Complex t;
    t.Real = ((Real * a.Real) + (Imaginary * a.Imaginary))/(pow(a.Real, 2)+pow(a.Imaginary,2));
    t.Imaginary = ((a.Real * Imaginary) - (Real * a.Imaginary))/(pow(a.Real, 2)+pow(a.Imaginary,2));
    return t;
}
bool Complex::operator!=(Complex a){
    if(Real == a.Real && Imaginary == a.Imaginary){
        return false;
    }
    return true;
}
void Complex::Print(){
    cout << Real << endl;
    cout << Imaginary << endl;
}
