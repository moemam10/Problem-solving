#include <iostream>
using namespace std;

int main() {
    int a,b,c ;
    cin>> a>>b>>c;
    if (a<=b && a<=c){
        cout<<a<<"\n";
    }
    else if (b<=a && b<=c) {
        cout <<b<<"\n" ;
    }
    else if (c<=a && c<=b){
        cout << c<<"\n";
    }
     if (a>=b && a<=c) {
        cout<<a<<"\n";
    }
    else if (a>=c && a<=b) {
        cout<<a<<"\n" ;
    }
    else if (b>=a && b<=c){
        cout<<b<<"\n";
    }
    else if (b>=c && b<=a){
        cout <<b<<"\n" ;
    }
    else if (c>=a && c<=b){
        cout<<c<<"\n" ;
    }
    else if (c>=b && c<=a){
        cout <<c<<"\n" ;
    }
     if (a>=b && a>=c){
        cout<<a<<"\n" ;
    }
    else if (b>=a && b>=c) {
        cout<<b<<"\n" ;
    }
    else if (c>=a && c>=b){
        cout<<c<<"\n" ;
    }
    cout<<"\n" ;
    cout <<a<<"\n"<<b<<"\n"<<c<<"\n" ;
    return 0;
}
