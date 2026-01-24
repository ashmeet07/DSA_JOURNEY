#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=true;
    for(int i=2;i<floor(sqrt(n));i++){
        if(n%i==0){
            flag=false;
        }
    }
    cout<<(flag==true?"is a prime":"not a prime");
    return 0;
}