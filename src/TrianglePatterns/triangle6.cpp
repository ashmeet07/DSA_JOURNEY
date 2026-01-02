#include<bits\stdc++.h>
using namespace std;
/*
* * * * * * 
 * * * * *  
  * * * 
    *
 */
int main(){
    int n;
    cout<<"Enter the no of rows";
    cin>>n;
   for(int i=0;i<n;i++){
        for (int j=0;j<=i-1;j++)
            cout<<"  ";
        for (int k=0;k<=2*(n-i-1);k++)
            cout<<"* ";
        cout<<endl;
   }
}