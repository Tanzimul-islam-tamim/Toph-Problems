#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

long long int n, b=0, remainder, product=1;
cin>>n;

while(n!=0){
    remainder = n%2;                cout<<"#1 remainder (remainder = n%2)          : "<<remainder<<"\n";

    b = b + (remainder*product);    cout<<"#2 Binary (b = b + (remainder*product)) : "<<b<<"\n";

    n = n / 2;                      cout<<"#3 Number (n = n / 2)                   : "<<n<<"\n";

    product *= 10;                  cout<<"#4 product (product *= 10)              : "<<product<<"\n \n \n";

}
cout<<"The number in Binary form is: "<<b;
return 0;
}