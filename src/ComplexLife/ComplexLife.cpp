#include "ComplexLife.h"
#include <iostream>

ComplexLife::ComplexLife(double _a, double _b) : ComplexNums(_a, _b) {
    date = time(nullptr);
}
void ComplexLife::getDate() const {
    cout << "Created on: " << ctime(&date);
}