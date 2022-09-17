#include <iostream>

using namespace std;

int Fib(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return Fib(n - 1) + Fib(n - 2);
    }
}

int main() {

    for (int i = 1; i < 10; ++i) {
        cout << Fib(i) << ' ';
    }

    return 0;
}
