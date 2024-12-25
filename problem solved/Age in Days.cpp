#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    long long n ;
    cin>>n ;

    long long y =(n/365) ;
     long long x=( n- (y*365) ) /30 ;
     long long z= n- ((x*30)+(y*365));

    cout<< y <<" years"<<"\n"<< x<< " months"<<"\n"<< z<< " days" ;
    return 0;
}
