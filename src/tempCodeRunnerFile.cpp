#include<bits/stdc++.h>
using namespace std;
int count=0;
bool allZeros(unordered_map<char,int> freq){
    for(auto& i :freq){
        if(i.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s="forxxxrofxofrxfor";
    string pat="fox";
    int windowlen=pat.size();
    unordered_map<char,int> freq;
    for(char i : pat){
        freq[i]++;
    }
    int left=0,right=0,count=0;
    while(right<s.size()){
       freq[s[right]]--;
       if(right-left+1==windowlen){
            if(allZeros(freq)){
                // count=count+1;
                cout<<"Start"<<left<<"end"<<right;
            }
            freq[s[left]]++;
            left++;
       }
       right++;
    }
    cout<<count;
    return 0;
}