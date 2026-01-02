#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,2,2,3,3,-444,5,676,8,2};
    int size=sizeof(a)/sizeof(a[0]);
    int max=INT_MIN,min=INT_MAX;
    for (int i=0;i<size;i++){
        if(a[i]>max)
            max=a[i];
        
        if(a[i]<min)
            min=a[i];
    }
    cout<<"Max"<<max<<" Min"<<min;

    return 0;
}