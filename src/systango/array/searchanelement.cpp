#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        cin>>a;
        freq[a]=i;
    }
    int target;
    cin>>target;
    for(auto & i:freq){
       if(i.first==target){
             cout<<i.second;
       }
    }
    return  0;
}