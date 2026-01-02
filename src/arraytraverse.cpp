#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,91,19,1929,22,11};
    
    int size=sizeof(a)/sizeof(a[0]);
    for (int i=0; i<size;i++)
        cout<<a[i]<<" ,";
    cout<<endl;
    for (int i : a)
        cout<<i<<" ,";
        
    cout<<endl;
    int i=0;
    while(i<size){
        cout<<a[i]<<" ,";
        i+=1;
    }
 
    cout<<endl;
    
    return 0;
}