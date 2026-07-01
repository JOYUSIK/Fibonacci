#include "gmock/gmock.h"
#include "fibonacci.cpp"

using namespace testing;

TEST(FibonacciTest, Of0) {
    Fibonacci fib;
    EXPECT_EQ(0, fib.of(0));
}
