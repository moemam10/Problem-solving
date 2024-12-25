#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long m = (x % 100 * y % 100 * a % 100 * b % 100) % 100;
    if (m < 10) {
        cout << "0" << m;
    } else {
        cout << m;
    }

    return 0;
}
