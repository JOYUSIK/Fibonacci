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
