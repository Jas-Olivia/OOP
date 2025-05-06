// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();

        testMixtures();
        testZeros();
        testSpecialCase();
        testBigPositive();
        testBigNegative();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testMixtures() {
        Addition addition;
        if (addition.add(-5, 10) != 5) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZeros() {
        Addition addition;
        if (addition.add(0, 1) != 1) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testSpecialCase() {
        Addition addition;
        if (addition.add(1, -1) != 1) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    void testBigPositive() {
        Addition addition;
        if (addition.add(100, 250) != 350) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void testBigNegative () {
        Addition addition;
        if (addition.add(-200, -700) != -900) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }

    // Add other test functions here
};