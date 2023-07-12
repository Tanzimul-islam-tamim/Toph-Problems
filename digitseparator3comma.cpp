#include <iostream>
#include <string>
#include <math.h>
using namespace std;







int main(){


int x;int len;  string a; string b[20];






        cin>>x;

        string com = ",";int z = 0;

        a = to_string(x);
        len = a.length();

        for(int i=len; i>=0; i--){


            if(i%3==0 && i != len && i!= 0){


                b[z]= a[i];b[z+1]=com;z=z+2;

            }
            else{



                b[z]= a[i];++z;
            }
        }

        for(int y = z ; y>0; y--){
            cout<<b[y];
        }

return 0;
}