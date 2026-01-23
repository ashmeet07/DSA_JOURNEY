#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    stringstream ss(a);
    int count=0;
    string word;
    while(ss>>word){
        count+=1;
    }
    cout<<count;
    return 0;
}