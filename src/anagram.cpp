#include<bits/stdc++.h>
using namespace std;

bool anagram(string s,string s2){
    unordered_map<char,int> seen;
    for (int i=0;i<s.size();i++){
        seen[s[i]]++;
    }
    for (int i=0;i<s2.size();i++){
        if (seen.find(s2[i])==seen.end()){
            return false;
        }
        seen[s2[i]]--;
    }
    for (auto& x:seen){
        if(x.second !=0){
            return false;
        }
    }

    return true;
}

int main(){
    string s="silen",s2="listen";
    bool p=anagram(s,s2);
    cout<<p;
    return 0;
}