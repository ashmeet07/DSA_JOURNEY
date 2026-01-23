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
        freq[a]++;
    }
    for(auto & i:freq){
       if(i.second>1){
            continue;
       }else{
            cout<<i.first;
       }
    }
    return  0;
}