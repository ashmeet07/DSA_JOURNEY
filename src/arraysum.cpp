#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element you want to enter";
    cin>>n;
    int i,sum=0;
    for (int j=0;j<n;j++){
        cin>>i;
        sum+=i;
    }
    cout<<"The sum :"<<sum;

    return 0;
}