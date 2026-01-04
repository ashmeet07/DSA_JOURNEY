#include <bits/stdc++.h>
using namespace std;

vector<int> mergesort(vector<int> a, int n) {
    if (n<=1){
        return a;
    }
    int mid=n/2;
    vector<int> left(a.begin(),a.begin()+mid);
    vector<int> right(a.begin()+mid,a.end());
    left=mergesort(left,left.size());
    right=mergesort(right,right.size());

    int i=0,j=0;
    vector<int> result;

    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            result.push_back(left[i++]);
        }else{
            result.push_back(right[j++]);
        }
    }

    while(i<left.size()){
        result.push_back(left[i++]);
    }
    while(j<right.size()){
        result.push_back(right[j++]);
    }
    return result;
}
    
int main() {
    vector<int> a = {2,34,3,2,-5,34,1,1234};
    a = mergesort(a, a.size());

    for (int x : a)
        cout << x << " ";

    return 0;
}
