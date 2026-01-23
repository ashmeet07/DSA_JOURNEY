#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;

    string result="";
    for(int i=0;i<a.length();i++){
        if((a[i]>=65 && a[i]<=90)){
            char temp=a[i]+char(32);
            result+=temp;
        }
        else if( (a[i]>=97 && a[i]<=122)){
            char temp=a[i]-char(32);
            result+=temp;
        }else{
            result+=a[i];
        }
    }
    cout<<result;
    return 0;
}