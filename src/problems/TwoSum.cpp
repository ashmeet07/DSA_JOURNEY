#include<bits/stdc++.h>
using namespace std;
int main(){
    int  a[]={3,4,5,6,7,8,9,2,3,4,5,6,7,8,9,67};
    int size=abs(sizeof(a)/sizeof(a[0]));
    unordered_map<int,int> seen;
    int target=10;

    for(int i=0;i<size;i++){
         int sum=target-a[i];
        if(seen.find(sum)==seen.end()){
                cout<<a[i]<<sum<<endl;
                break;
        }
        seen[a[i]]=i;
    }
    return 0;
}