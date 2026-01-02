#include<bits\stdc++.h>
using namespace std;

int main(){
    int a[]={2,2,3,4,5,6,7,8,9,11,11};
    unordered_map<int,int> freq;

    for (int x:a){
        if (freq[x]==0){
            cout<<x<<" ";
        }
        freq[x]++;
    }
    for (auto x :freq){
        if (x.second>1)
            cout<<x.first;
    }
    return 0;
}