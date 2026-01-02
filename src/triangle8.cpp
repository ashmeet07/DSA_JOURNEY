#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want to print the pascal triangle";
    cin>>n;
    for (int i=0;i<n;i++){
        int val=1;
        for (int j=0;j<=i;j++){
            cout<<val;
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}