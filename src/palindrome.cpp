#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    if (s.size()<=0){
            return false;
    }
    int i=s.size()-1;
    string result="";
    while(i>=0){
        result+=s[i--];
    }
    if(result !=s){
        return false;
    }
    return true;
}
int main(){
    string s="lllmlll";
    bool p=palindrome(s);
    cout<<p;
    return 0;
}