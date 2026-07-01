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
