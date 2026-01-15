#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={3,4,5,6,7,8,9,2,3,4,5,6,7,8,9,67};
    int size=abs(sizeof(a)/sizeof(a[0]));
    unordered_map<int,int> freq;

    for(int i:a){
        freq[i]++;
    }

    int count=0;

    for(auto& i:freq){
        if(i.second>1){
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}