#include "ComplexLife.h"
#include <iostream>

ComplexLife::ComplexLife(double _a, double _b) : ComplexNums(_a, _b) { date = time(nullptr); }
ComplexLife::ComplexLife(double _a) : ComplexNums(_a) { date= time(nullptr); }
ComplexLife::ComplexLife() : ComplexNums() { date = time(nullptr); }

ComplexLife::ComplexLife(const ComplexLife &obj) : ComplexNums(obj), date(obj.date) {}

string ComplexLife::getDate() const {
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &date);
    return string(buffer);
}