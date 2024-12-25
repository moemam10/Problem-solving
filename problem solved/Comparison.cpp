#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    char s;
    int x, y;
    cin >> x >> s >> y;

    if (s == '>' && x > y) {
        cout << "Right";
    }
    else if (s == '<' && x < y) {
        cout << "Right";
    }
    else if (s == '=' && x == y) {
        cout << "Right";
    }
    else {
        cout << "Wrong";
    }
    return 0;
}

