#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int size=a.length();
    int left=0;
    int right = size-1;
    while(left<right){
        if(a[left]!=a[right]){
            cout<<"not palindrome";
            return 0;
        }
        left++;
        right--;
    }
    cout<<"String is palindrome";
    return 0;
}