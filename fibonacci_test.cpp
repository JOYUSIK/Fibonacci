#include "gmock/gmock.h"
#include "fibonacci.cpp"

using namespace testing;

class FibFixture : public Test {
public:
    Fibonacci fib;
};

TEST_F(FibFixture, Of0) {
    EXPECT_EQ(0, fib.of(0));
}

TEST_F(FibFixture, Of1) {
    EXPECT_EQ(1, fib.of(1));
}

TEST_F(FibFixture, Of2) {
    EXPECT_EQ(1, fib.of(2));
}

TEST_F(FibFixture, Of3) {
    EXPECT_EQ(2, fib.of(3));
}

TEST_F(FibFixture, Of5) {
    EXPECT_EQ(5, fib.of(5));
}

TEST_F(FibFixture, Of10) {
    EXPECT_EQ(55, fib.of(10));
}
