#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a;
    int n;
    cin>>n;
    int maxi=INT_MIN,second=INT_MIN;
    for (int i=0;i<n;i++){
        cin>>a;
        if(a>maxi){
            second=maxi;
            maxi=max(maxi,a);
        }else if(a<maxi && a>second){
            second=a;
        }
    }
    cout<<maxi;
    cout<<second;
    return 0;
}