#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;
    char c=a[0];
    int size=a.length();
    if(c==a[size-1]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}