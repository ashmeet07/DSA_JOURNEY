#include<bits/stdc++.h>
using namespace std;
bool allZeros(unordered_map<char,int>& freq){
    for(auto& c:freq){
        if(c.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string a;
    cin>>a;
    string sub;
    cin>>sub;
    int count=0,wsize=sub.length();
    unordered_map<char,int> freq;
    for(char c : sub){
        freq[c]++;
    }
    int left=0,right=0;
    while(right<a.length()){
        freq[a[right]]--;
        if(right-left+1==wsize){
            if(allZeros(freq)){
                count+=1;
            }
            freq[a[left]]++;
            left++;
        }
        right++;
    }
    cout<<count;
    return 0;
}