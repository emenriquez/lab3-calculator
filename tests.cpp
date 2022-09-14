// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
using namespace std;

#include "Calculator.h"

TEST_CASE("display", "[setup]") {
    Calculator test;

    CHECK_NOTHROW(test.clear());
    int sample;
    CHECK(test.display() == 0.0);
    CHECK(typeid(test.display()) != typeid(sample));
};

TEST_CASE("add", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = (rand() % 100) / 10.0;
    float n2 = -(rand() % 100) / 10.0;

    test.add(n1);
    CHECK(test.display() == n1);

    test.add(n1);
    CHECK(test.display() == 2*n1);

    test.add(n2);
    CHECK(test.display() == (2*n1 + n2));
};

TEST_CASE("subtract", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = (rand() % 100) / 10.0;
    float n2 = -(rand() % 100) / 10.0;

    test.subtract(n1);
    CHECK(test.display() == -n1);

    test.subtract(n1);
    CHECK(test.display() == -2*n1);

    test.subtract(n2);
    CHECK(test.display() == -(2*n1 + n2));
}

TEST_CASE("multiply", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = (rand() % 100) / 10.0;
    float n2 = -(rand() % 100) / 10.0;

    test.multiply(n1);
    CHECK(test.display() == 0);

    test.add(n1);
    CHECK(test.display() == n1);

    test.multiply(n1);
    CHECK(test.display() == n1*n1);

    test.multiply(n2);
    CHECK(test.display() == (n1*n1*n2));
}

TEST_CASE("divide", "[functions]") {
    srand(time(0));
    Calculator test;
    float n1 = ((rand() % 100) +.1) / 10.0;
    float n2 = (-(rand() % 100) -.1) / 10.0;

    test.divide(n1);
    CHECK(test.display() == 0);

    test.add(n1);
    CHECK(test.display() == n1);

    test.divide(n1);
    CHECK(test.display() == 1.0);

    test.divide(n2);
    CHECK(test.display() == (1/n2));

    test.divide(0);
    CHECK(test.display() == 0);
}

TEST_CASE("Calculator", "[constructor]") {
    srand(time(0));
    float n1 = ((rand() % 100) +.1) / 10.0;
    float n2 = (-(rand() % 100) -.1) / 10.0;

    Calculator test1(n1);
    Calculator test2(n2);

    
    CHECK(test1.display() == n1);
    CHECK(test2.display() == n2);
}