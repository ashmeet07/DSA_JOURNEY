#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int result=0;
    while(temp!=0){
        int digit=temp%10;
        result=result*10+digit;
        temp/=10;
    }
    if(result==n){
        cout<<"number is palindrome";
    }
    return 0;
}