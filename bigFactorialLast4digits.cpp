#include <iostream>
#include <string>
#include <math.h>
using namespace std;




int main(){
string fa; string f; string s;
long long int a;long long int fact=1.0;long long int x;int solution;
cin>>a;
if(a<0){cout<<"error";}
else if(a<7){
    for(int i=a;i>0;i--){
        fact *=i;
}
cout<<fact;}

else if(a<21){
for(int i=a;i>0;i--){
     fact *=i;
}                                    
fa = to_string(fact);
x = fa.length();
for(int i=x-1; i>x-5;i--){f += fa[i];}
for(int i = 3; i>= 0;i--){s += f[i];}
solution = stoi(s);
cout<<solution;
}
else{cout<<0;}
return 0;
}
