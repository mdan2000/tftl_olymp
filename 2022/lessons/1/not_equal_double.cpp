#include <iostream>
#include <cmath>

using namespace std;


const double eps = 0.0000001;

int main() {
    double a = 0.1, b = 0.2;
    double c = 0.3;
    if (abs((a + b) - c) < eps) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
}
