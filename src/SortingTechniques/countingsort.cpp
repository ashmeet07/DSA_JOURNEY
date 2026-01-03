#include<bits/stdc++.h>
using namespace std;

vector<int> countingsort(vector<int> a){
    int size=a.size();
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>max)
            max=a[i];
    }
    vector<int> count(max+1,0);
    for (int i=0;i<size;i++){
        count[a[i]]++;
    }
    int ind=0;
    for(int i=0;i<=max;i++){
        while(count[i]>0){
            a[ind]=i;
            ind++;
            count[i]--;
        }
    }
    return a;
}
int main(){
     vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    arr=countingsort(arr);
     for(int x:arr){
        cout<<x<<" ";
     }
     return 0;
}