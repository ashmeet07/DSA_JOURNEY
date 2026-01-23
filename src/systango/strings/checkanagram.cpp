#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    if(a.length()!=b.length()){
        cout<<"Strings are not anagram";
        exit(0);
    }
    unordered_map<char,int> freq;
    for(char c:a){
        freq[c]++;
    }
    for(char c:b){
        freq[c]--;
    }
    for(auto& c:freq){
        if(c.second<0){
            cout<<"Strings are not anagram";
            return 0;
        }
    }
    cout<<"Strings are anagram";
    return 0;
}