#ifndef TEST_CATCH_COMPLEXLIFE_H
#define TEST_CATCH_COMPLEXLIFE_H

#include "ComplexNum/ComplexNum.h"
#include <ctime>

class ComplexLife : public ComplexNums {

public:
    ComplexLife(double _a, double _b);
    ComplexLife();

    void getDate() const;
private:
    time_t date;
};


#endif //TEST_CATCH_COMPLEXLIFE_H
