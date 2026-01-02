#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num=1;
    cout<<"Enter no of rows";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<num++;
        }
        cout<<endl;
    }
    return 0;
}