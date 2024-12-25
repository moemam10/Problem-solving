#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x ;
 cin>>x;
    int firstdigit=x/1000 ;


    if (firstdigit % 2 ==0){
        cout<<"EVEN" ;
    }
        else {
            cout <<"ODD" ;
        }
    return 0;
}
