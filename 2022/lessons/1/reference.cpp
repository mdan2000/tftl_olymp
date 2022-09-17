#include <iostream>
#include <vector>

using namespace std;

long long fastSum(const vector<long long>& x) {
    int res = 0;
    for (int i = 0; i < x.size(); ++i) {
        res += x[i];
    }
    return res;
}

long long slowSum(vector<long long> x) {
    int res = 0;
    for (int i = 0; i < x.size(); ++i) {
        res += x[i];
    }
    return res;
}

int main() {

    int n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < x.size(); ++i) {
        x[i] = i;
    }

    auto startFast = std::chrono::system_clock::now(); // записываем время старта
    int resFast = fastSum(x); // считаем сумму быстрой функцией
    auto endFast = std::chrono::system_clock::now(); // записываем время завершения
    double fastTime = std::chrono::duration<double>(endFast - startFast).count(); // считаем итоговое время

    auto startSlow = std::chrono::system_clock::now(); // записываем время старта
    int resSlow = slowSum(x); // считаем сумму медленной функцией
    auto endSlow = std::chrono::system_clock::now(); // записываем время завершения
    double slowTime = std::chrono::duration<double>(endSlow - startSlow).count(); // считаем итоговое время

    cout << "Time of work fastSum: " << fastTime << endl;
    cout << "Time of work slowSum: " << slowTime << endl;

}
