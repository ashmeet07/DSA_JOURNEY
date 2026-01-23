#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a;
    int n;
    cin>>n;
    int mini=INT_MAX;
    for (int i=0;i<n;i++){
        cin>>a;
        mini=min(mini,a);
    }
    cout<<mini;
    return 0;
}