#include<unordered_map>
#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    unordered_map<char,int> freq;
    for(char i:a){
        freq[i]++;
    }
    for(char c:a){
        if(freq[c]==1){
            cout<<c;
            return 0;
        }
    }
    return 0;
}