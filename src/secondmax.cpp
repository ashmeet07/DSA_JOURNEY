#include<bits\stdc++.h>
using namespace std;

int main(){
    int a[]={-1,-22,-9,-11,-101,-3,-4,-5};
    int max1=INT_MIN,max2=-1;
    for (int i=0;i<8;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }else if(a[i]>max2 && a[i]<max1){
            max2=a[i];
        }
    }
    cout<<"Max1 "<<max1<<" Max2 "<<max2;

    return 0;
}