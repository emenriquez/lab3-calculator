// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
using namespace std;

#include "Calculator.h"

TEST_CASE("validClass", "[setup]") {
    Calculator test;
};

TEST_CASE("display", "[setup]") {
    Calculator test;

    test.clear();
    int sample;
    REQUIRE(test.display() == 0.0);
    REQUIRE(typeid(test.display()) != typeid(sample));
};

TEST_CASE("add", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = (rand() % 100) / 10.0;
    float n2 = -(rand() % 100) / 10.0;

    test.add(n1);
    REQUIRE(test.display() == n1);

    test.add(n1);
    REQUIRE(test.display() == 2*n1);

    test.add(n2);
    REQUIRE(test.display() == (2*n1 + n2));
};

TEST_CASE("subtract", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = (rand() % 100) / 10.0;
    float n2 = -(rand() % 100) / 10.0;

    test.subtract(n1);
    REQUIRE(test.display() == -n1);

    test.subtract(n1);
    REQUIRE(test.display() == -2*n1);

    test.subtract(n2);
    REQUIRE(test.display() == -(2*n1 + n2));
}

TEST_CASE("multiply", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = (rand() % 100) / 10.0;
    float n2 = -(rand() % 100) / 10.0;

    test.multiply(n1);
    REQUIRE(test.display() == 0);

    test.add(n1);
    REQUIRE(test.display() == n1);

    test.multiply(n1);
    REQUIRE(test.display() == n1*n1);

    test.multiply(n2);
    REQUIRE(test.display() == (n1*n1*n2));
}

TEST_CASE("divide", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = ((rand() % 100) +.1) / 10.0;
    float n2 = (-(rand() % 100) -.1) / 10.0;

    test.divide(n1);
    REQUIRE(test.display() == 0);

    test.add(n1);
    REQUIRE(test.display() == n1);

    test.divide(n1);
    REQUIRE(test.display() == 1.0);

    test.divide(n2);
    REQUIRE(test.display() == (1/n2));

    test.divide(0);
    REQUIRE(test.display() == 0);
}

TEST_CASE("Calculator", "[constructor]") {
    srand(time(0));
    float n1 = ((rand() % 100) +.1) / 10.0;
    float n2 = (-(rand() % 100) -.1) / 10.0;

    Calculator test1(n1);
    Calculator test2(n2);

    
    REQUIRE(test1.display() == n1);
    REQUIRE(test2.display() == n2);
}