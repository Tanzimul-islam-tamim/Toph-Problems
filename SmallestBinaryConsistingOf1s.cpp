#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;


//function proto
int convert(long long);


int main(){

string bin; int len; string bi = ""; string one ="1";
long long int n, b=0, remainder, product=1; long long int finB;
cin>>n;

while(n!=0){
    remainder = n%2;
    b = b + (remainder*product);
    n = n / 2;
    product *= 10;
    }
bin = to_string(b);
len = bin.length();
for(int i=0 ;i<len;i++){
       

    if(bin[i]!= '0'){bi += one;}
}
finB = stoi(bi);

cout<<convert(finB)<<endl;



return 0;
}




// function def
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
