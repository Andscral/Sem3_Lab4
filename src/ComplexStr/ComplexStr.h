#ifndef TEST_CATCH_COMPLEXSTR_H
#define TEST_CATCH_COMPLEXSTR_H

#include "ComplexNum/ComplexNum.h"

class ComplexStr : public ComplexNums {
public:
    ComplexStr(const char* str);
    ComplexStr(double _a, double _b);

    const char* fromString() const;

    ComplexNums strToComplex();
    char* complexToStr();
private:
    char str[100];
};


#endif //TEST_CATCH_COMPLEXSTR_H
