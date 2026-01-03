#include<bits/stdc++.h>
using namespace std;

vector<int> insertionsort(vector<int> arr){
    int size=arr.size()-1;
    if (size==0){
        cout<<"Dont have elements to iterate";
        exit(0);
    }
   for(int i=1;i<size;i++){
        int val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=val;
   }
    for(auto x:arr)
        cout<<x<<" ";
    return arr;
}
int main(){
    vector<int> a={2,34,3,2,-5,34,1,1234};
    insertionsort(a);
    return 0;
}