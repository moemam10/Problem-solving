#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
   float x ;
   cin >> x ;

   int s = floor(x) ;
   float y = x - s ;

   if (y == 0){
     cout << "int" << " " << s;
   }
   else {
     cout << "float" << " " << s << " " << setprecision(3) << fixed << y;
   }
}
