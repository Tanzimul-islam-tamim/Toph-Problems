#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

int n;cin>>n;int x;
float sum[n];
float average; float avr;
for(int i=0; i<n;i++){
    cin>>x;
    sum[i]=x;

}
average = 0;

for(int i=0; i<n;i++){

 average += sum[i];//cout<<"The average: "<<average<<endl;
 avr = average/(i+1);
 cout <<avr<<endl;

}

return 0;
}