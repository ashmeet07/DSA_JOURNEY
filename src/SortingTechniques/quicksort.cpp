#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& a,int low,int high){
    int pivotindex=low+rand()%(high-low+1);
    int pivot=a[pivotindex];

    int i=low-1;
    int j=high+1;

   while(true) {
    do{i++;}while(a[i] < pivot); 
    do{j--;}while(a[j] > pivot);
    if(i >= j) return j; 
    swap(a[i], a[j]);     
}

    swap(a[i],a[j]);
}
void quicksort(vector<int>& a,int low,int high){
    if (low>=high) return ;
    int p=partition(a,low,high);
    quicksort(a,low,p);
    quicksort(a,p+1,high);
}
int main(){
    vector<int> a={2,3,4,-120,2,3,444,5,645,63,2};
    int n=a.size();
    quicksort(a,0,n-1);
    for(auto& x:a){
        cout<<x<<" ";
    }
    return 0;
}