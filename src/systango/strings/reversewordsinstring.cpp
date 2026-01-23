#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int size=a.length();
    int start=0;
    for(int i=0;i<=size;i++){
        if(i==size || a[i]==' '){
            int ws=start;
            int we=i-1;
            while(ws<we){
                swap(a[ws],a[we]);
                ws++;
                we--;
            }
            start=i+1;
        }
    }
    cout<<a;
    return 0;
}