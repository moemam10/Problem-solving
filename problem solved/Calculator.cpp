#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()

{
char s;
    int x,y ;
    cin>>x>>s>>y ;
    int p=x+y;
    int m=x-y;
    int ml=x*y;
    int di=x/y;


    if(  s=='/'){
            cout<< di ;
    }
    else if(s=='+') {
        cout<<p ;

    }
    else if(s=='-'){
        cout<<m;
    }
    else if(s== '*'){
        cout<<ml ;
    }
    return 0;
}
