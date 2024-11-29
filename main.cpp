#include <iostream>
#include "ComplexNum/ComplexNum.h"
#include "ComplexStr/ComplexStr.h"
#include "ComplexLife/ComplexLife.h"

using namespace std;

int main() {
    ComplexNums num1(2, 3);
    cout << "ComplexNum: " << num1 << endl;

    ComplexStr complexStr("5-2i");
    cout << "ComplexStr: " << complexStr.toString() << endl;

    ComplexLife complexLife(2, 3);
    cout << "ComplexLife: " << complexLife << endl;
    cout << "Creation Date: " << complexLife.getDate();

    return 0;
}
