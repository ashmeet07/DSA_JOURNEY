#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,343,4,2,56,7,8,9,71};
    int size=sizeof(a)/sizeof(a[0]);
    int target;
    cout<<"Enter the element to search";
    cin>>target;
    bool flag=false;
    for (int i=0;i<size;i++){
        if (a[i]==target){
            flag=true;
        }
    }
    cout<<(flag==false? "Element Not Found":"Element Found");
    return 0;
}