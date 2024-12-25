#include <iostream>
using namespace std ;
int main() {
    long long  N;
    std::cin >> N;

    long long  sum = (N * (N + 1)) >> 1;

    cout << sum << endl;

    return 0;
}
