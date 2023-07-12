#include <iostream>
#include <string>
#include <math.h>
using namespace std;




int main(){

double angle,inward, h,m,x; x=5.5;
cin>>h;
cin>>m;


angle = abs((30*h)-(x*m));

if(angle>180){
    inward = 360-angle;
    cout<<inward;
}
else{
cout<<angle;}


return 0;
}
