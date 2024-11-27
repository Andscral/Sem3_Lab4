#include "ComplexStr/ComplexStr.h"
#include <cmath>
#include <iostream>
#include <cstring>
#include <sstream>

ComplexStr::ComplexStr(const char* input) : ComplexNums(0, 0) {
    strncpy(str, input, sizeof(str)); // Копируем строку
    str[sizeof(str) - 1] = '\0'; // Обеспечиваем завершение строки
    strToComplex(); // Преобразуем строку в комплексное число
}

ComplexStr::ComplexStr(double _a, double _b) : ComplexNums(_a, _b) {}

const char* ComplexStr::fromString() const {
    return str;
}

ComplexNums ComplexStr::strToComplex() {
    double real, imag;
    char sign;

    sscanf(str, "%lf %c %lf", &real, &sign, &imag);
    setA(real);
    setB(sign == '+' ? imag : -imag);

    return {getA(), getB()};
}

char* ComplexStr::complexToStr() {
    snprintf(str, sizeof(str), "%0.1lf %c %0.1lfi", getA(), getB() >= 0 ? '+' : '-', fabs(getB()));
    return str;
}