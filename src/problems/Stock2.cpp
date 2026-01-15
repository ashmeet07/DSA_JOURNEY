#include<bits/stdc++.h>
using namespace std;

int main(){
    int prices[]={7,1,2,5,9,2};
    int maxprofit=0;
    for (int i=1;i<6;i++){
        if(i+1<6 && prices[i]-prices[i-1]>0){
            maxprofit=maxprofit+prices[i]-prices[i-1];
        }
    }
    cout<<"the profit we can achieve"<<maxprofit;
    return 0;
}