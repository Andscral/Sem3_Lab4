#pragma once

#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;
class ComplexNums {
public:
    ComplexNums(double _a, double _b);
    ComplexNums(double _a);
    ComplexNums();
    ~ComplexNums();

    ComplexNums(const ComplexNums &obj);

    double getA() const;
    double getB() const;
    void setA(double _a);
    void setB(double _b);

    char* c_str() {
        int size = floor(log10(abs(a))) + floor(log10(abs(b)))+13;
        char* s = new char[size+1];
        if (b >= 0) { sprintf(s, "%0.2f + %0.2fi", a, b); }
        else { sprintf(s, "%0.2f - %0.2fi", a, -b); }
        return s;
    }

    //3 лаба
    friend ostream& operator<< (ostream& os, const ComplexNums& num);
    friend istream& operator>> (istream& is, ComplexNums& num);

//поменять стиль. Методы - глаголы.
private:
    double a, b;
};

