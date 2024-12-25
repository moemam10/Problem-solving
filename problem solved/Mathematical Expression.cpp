#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    char s,q='=';
    int x, y ,c;
    cin >> x >> s >> y >> q >>c;
    int result;
    int p = x + y;
    int m = x - y;
    int ml = x * y ;


    if (s == '+' && p == c) {
        cout << "Yes";
    }
    else if(s == '+' && p != c){
        cout<< p ;
    }
    else if (s == '-' && m == c){
        cout<< "Yes" ;
    }
     else if (s == '-' && m != c){
        cout<< m ;
    }
else if (s == '*' && ml == c){
        cout<< "Yes" ;
    }
    else if (s == '*' && ml != c){
        cout<< ml ;
    }
    return 0;
}
