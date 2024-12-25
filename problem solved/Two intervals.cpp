#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    long long le1, r1, le2, r2;
    cin >> le1 >> r1 >> le2 >> r2 ;

    int bigle = 0, smallr = 0;

    if (le2 >= le1) {
        bigle = le2;
    } else if(le1 >= le2) {
        bigle = le1;
    }

    if (r1 >= r2) {
        smallr = r2;
    } else if(r2 >= r1) {
        smallr = r1;
    }

    if (bigle > smallr) {
        cout << "-1";
    }

     else  {
        cout << bigle << " " << smallr;
    }


}
