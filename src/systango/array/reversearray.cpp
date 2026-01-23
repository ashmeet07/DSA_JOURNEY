#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left=0;
    int right=n-1;
    while(left<right){
        swap(a[left],a[right]);
        left++;right--;
    }
    for(int i:a){
        cout<<i;
    }
    return 0;
}