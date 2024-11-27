#include "ComplexNum/ComplexNum.h"
#include "ComplexStr/ComplexStr.h"
#include "ComplexLife/ComplexLife.h"

using namespace std;

int main() {
    ComplexNums complexNum(2, 3);
    ComplexStr complexStr("2 + 3i");
    ComplexLife complexLife(3, 4);

    // Демонстрация создания
    cout << "Complex Number: " << complexNum << endl;
    cout << "Complex Number from C-style String: " << complexStr.strToComplex() << endl;
    complexLife.getDate();

    // Копирование объектов
    ComplexNums complexCopy = complexNum;
    cout << "Copied Complex Number: " << complexCopy << endl;
    ComplexNums complexCopy2 = complexStr;
    cout << "Copied Complex string Number: " << complexCopy2 << endl;

    return 0;
}
