#include<bits/stdc++.h>
using namespace std;

vector<int> bubblesort(vector<int> arr){
    int size=arr.size()-1;
    if (size==0){
        cout<<"Dont have elements to iterate";
        exit(0);
    }
    for(int i=0;i<size;i++){
        for(int j=1;j<size-i;j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(auto x:arr)
        cout<<x<<" ";
    return arr;
}
int main(){
    vector<int> a={2,34,3,2,-5,34,1,1234};
    bubblesort(a);
    return 0;
}