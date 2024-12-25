#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     double π = 3.141592653, r ;
     cin>> r ;
     double result = pow (r ,2) ;
     cout<< π  * pow ( r ,2 ) ;
     return 0 ;
}
