#include <iostream>

using namespace std;

int main()
{
    int x , y , z;
    cin>> x  >>y >>z ;
    if (x <= y && x <= z){
        cout<<x ;

    }
    else if (z<=y && z<=x  ) {
        cout<<z ;
    }
    else if (y<=z && y<=x) {
        cout<<y ;
    }

cout<< " " ;
 if (x >= y && x >= z){
    cout<<x ;
 }
else if (z>=y && z>=x  ) {
        cout<<z ;
}
   else if (y>=z && y>=x) {
    cout<<y ;
   }
    return 0;
}
