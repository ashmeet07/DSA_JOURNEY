#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    getline(cin,a);

    int count=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}