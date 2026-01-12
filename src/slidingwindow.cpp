#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,6,7,10,11,100};
    int size=sizeof(a)/sizeof(a[0]);
    int left=0,right=0,sum=0,maxsum=0;
    int k=14;
    while(right<size){
        sum=sum+a[right];
        while(sum>k){
                sum=sum-a[left];
                left+=1;
        }
        if(sum<=k){
            maxsum=max(maxsum,sum);
        }
        cout<<"left"<<left<<"right"<<right;
        right+=1;
    }
    cout<<maxsum;
    return 0;
}