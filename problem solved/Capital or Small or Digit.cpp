#include <iostream>

using namespace std;

int main()
{
    char a='n';

    cin>>a ;
    int c=a ;

     if(c>=97 && c<=122){
        cout<< "ALPHA"<<"\n"<<"IS SMALL" ;
     }
  else   if ( c>=65 && c<=90) {
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL";

     }
     else if (c>=48 && c<=57){
        cout<<"IS DIGIT" ;

     }

    return 0;
}
