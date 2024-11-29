#ifndef TEST_CATCH_COMPLEXSTR_H
#define TEST_CATCH_COMPLEXSTR_H

#include "ComplexNum/ComplexNum.h"
#include <string>

class ComplexStr : public ComplexNums {
public:
    ComplexStr(const string& str);
    ComplexStr(double _a, double _b);
    ComplexStr(double _a);
    ComplexStr();

    string toString() const;
    void fromString(const string& str);

private:
    string complexStr;
};


#endif //TEST_CATCH_COMPLEXSTR_H
