#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;

    string result="";
    for(int i=0;i<a.length();i++){
         if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            result+='x';
        }else{
            result+=a[i];
        }
    }
    cout<<result;
    return 0;
}