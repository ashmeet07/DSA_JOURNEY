#include<bits/stdc++.h>
using namespace std;
/*
1
23
456
78910
*/
int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    int num=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}