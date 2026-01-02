#include<bits\stdc++.h>
using namespace std;
/*
      *
    * * * 
  * * * * * 
 * * * * * *  
  * * * * *  
    * * * 
      *
 */
int main(){
    int n;
    cout<<"Enter no of rows you wan to print the diamond";
    cin>>n;
  for (int i=0;i<n;i++){
    for (int j=0;j<n-i;j++)
        cout<<" ";
    for(int k=0;k<i*2-1;k++)
        cout<<"*";
    cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int k=0;k<2*(n-i)-1;k++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}