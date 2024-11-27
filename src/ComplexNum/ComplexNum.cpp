#include "ComplexNum.h"
#include <iostream>

ComplexNums::ComplexNums(double _a, double _b) : a(_a), b(_b) {}
ComplexNums::ComplexNums(double _a) : ComplexNums(_a, 0) {}
ComplexNums::ComplexNums() : ComplexNums(0, 0) {}
ComplexNums::~ComplexNums() = default;

ComplexNums::ComplexNums(const ComplexNums &obj) { this->a = obj.a; this->b = obj.b; }

double ComplexNums::getA() const { return a; }
double ComplexNums::getB() const { return b; }

void ComplexNums::setA(double _a) { a = _a; }
void ComplexNums::setB(double _b) { b = _b; }

ostream& operator<<(ostream& os, const ComplexNums& num) {
    os << num.getA() << showpos << num.getB() << noshowpos << "i";
    return os;
}

istream& operator>>(istream& is, ComplexNums& num) {
    double real, imag;
    char sign;

    is >> real >> sign >> imag;
    num.setA(real);

    if (sign == '+') {
        num.setB(imag);
    } else if (sign == '-') {
        num.setB(-imag);
    }
    return is;
}