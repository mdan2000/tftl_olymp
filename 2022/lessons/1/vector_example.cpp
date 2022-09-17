#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        x.push_back(tmp);
    }

    cout << endl << "Cout my vector:" << endl;

    for (int i = 0; i < x.size(); ++i) {
        cout << x[i] << ' ';
    }


    return 0;
}
