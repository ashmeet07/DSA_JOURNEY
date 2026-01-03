#include<bits/stdc++.h>
using namespace std;

vector<int> selectionsort(vector<int> arr){
    int size=arr.size()-1;
    if (size==0){
        cout<<"Dont have elements to iterate";
        exit(0);
    }
   for(int i=0;i<size;i++){
        int ind=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[ind]){
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
   }
    for(auto x:arr)
        cout<<x<<" ";
    return arr;
}
int main(){
    vector<int> a={2,34,3,2,-5,34,1,1234};
    selectionsort(a);
    return 0;
}