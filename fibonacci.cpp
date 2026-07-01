#include <vector>

using std::vector;

class Fibonacci {
public:
    int of(int n) {
        if (n <= 1) return n;
        return of(n - 1) + of(n - 2);
    }
};
