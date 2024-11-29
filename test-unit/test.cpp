#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "ComplexNum/ComplexNum.h"
#include "ComplexStr/ComplexStr.h"
#include "ComplexLife/ComplexLife.h"

TEST_CASE("ComplexNums tests") {
    ComplexNums num1(3, 4);
    REQUIRE(num1.getA() == 3);
    REQUIRE(num1.getB() == 4);

    ComplexNums num2(num1);
    REQUIRE(num2.getA() == num1.getA());
    REQUIRE(num2.getB() == num1.getB());

    num2.setA(5);
    num2.setB(6);
    REQUIRE(num2.getA() == 5);
    REQUIRE(num2.getB() == 6);
}

TEST_CASE("ComplexStr tests") {
    ComplexStr complexStr("5-2i");
    REQUIRE(complexStr.getA() == 5);
    REQUIRE(complexStr.getB() == -2);

    string str = complexStr.toString();
    REQUIRE(str == "5-2i");
}

TEST_CASE("ComplexLife tests") {
    ComplexLife complexLife(2, 3);
    REQUIRE(complexLife.getA() == 2);
    REQUIRE(complexLife.getB() == 3);

    string Time_Date = complexLife.getDate();
    REQUIRE_FALSE(Time_Date.empty());
}
