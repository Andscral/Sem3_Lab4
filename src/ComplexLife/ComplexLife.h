#ifndef TEST_CATCH_COMPLEXLIFE_H
#define TEST_CATCH_COMPLEXLIFE_H

#include "ComplexNum/ComplexNum.h"
#include <ctime>
#include <string>

class ComplexLife : public ComplexNums {

public:
    ComplexLife(double _a, double _b);
    ComplexLife(double _a);
    ComplexLife();

    ComplexLife(const ComplexLife &obj);
    string getDate() const;

private:
    time_t date;
};


#endif //TEST_CATCH_COMPLEXLIFE_H
