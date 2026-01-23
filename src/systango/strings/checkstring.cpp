#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(s1.length()!=s2.length()){
        cout<<"strings are not same";
        exit(0);
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            cout<<"Strings are not equal";break;
        }
    }
    return 0;
}