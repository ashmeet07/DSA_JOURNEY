#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a;
    int n;
    cin>>n;
    int maxi=INT_MIN;
    for (int i=0;i<n;i++){
        cin>>a;
        maxi=max(maxi,a);
    }
    cout<<maxi;
    return 0;
}