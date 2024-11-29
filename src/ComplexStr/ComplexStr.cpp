#include "ComplexStr/ComplexStr.h"
#include <iostream>
#include <sstream>

ComplexStr::ComplexStr(const string& str) : ComplexNums() { fromString(str); }
ComplexStr::ComplexStr(double _a, double _b) : ComplexNums(_a, _b) { complexStr = toString(); }
ComplexStr::ComplexStr(double _a) : ComplexNums(_a) { complexStr = toString(); }
ComplexStr::ComplexStr() : ComplexNums() { complexStr = toString(); }

string ComplexStr::toString() const {
    ostringstream oss;
    oss << getA() << (getB() >= 0 ? "+" : "") << getB() << "i";
    return oss.str();
}

void ComplexStr::fromString(const string& str) {
    complexStr = str;
    istringstream iss(str);
    double real, imag;
    char sign;
    iss >> real >> sign >> imag;
    setA(real);
    setB(sign == '+' ? imag : -imag);
}