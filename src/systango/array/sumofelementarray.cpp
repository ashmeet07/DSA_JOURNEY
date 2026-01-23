#include<iostream>
using namespace std;

int main(){
    int a;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<sum;
    return 0;
}