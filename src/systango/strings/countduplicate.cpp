#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    unordered_map<char,int> freq;
    for(char c:a){
        freq[c]++;
    }
    for(auto& c:freq){
        if(c.second>1){
            cout<<c.first;
        }
    }
    return 0;
}