#include<bits/stdc++.h>
using namespace std;

int main(){
    int prices[]={7,1,2,5,9,2};
    int maxprofit=0;
    int minprofit=INT_MAX;
    for(int i:prices){
        minprofit=min(minprofit,i);
        maxprofit=max(maxprofit,i-minprofit);
    }
    cout<<"the max profit we can achieve is "<<maxprofit;
    return 0;
}