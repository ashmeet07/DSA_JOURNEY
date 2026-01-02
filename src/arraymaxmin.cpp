#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={-6,2,33,56,2,333,56};
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<7;i++){
        if(a[i]>max)
            max=a[i];
        
        if(min>a[i])
            min=a[i];
    }
    cout<<"Max "<<max<<" Min"<<min;
    return 0;
}