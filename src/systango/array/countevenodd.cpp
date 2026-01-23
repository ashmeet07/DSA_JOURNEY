#include<iostream>
using namespace std;

int main(){
    int a;
    int n;
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==0){
           count+=1; 
        }
    }
    cout<<"Even"<<count;
    cout<<"Odd"<<n-count;
    return 0;
}