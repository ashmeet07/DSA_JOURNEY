//how to take input in tcs nqt
//Covers all input in this
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

vector<int> spaceseperatedarray(){
    vector<int> arr;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int num;
    while(ss >>num){
        arr.push_back(num);
    }
    for(int x:arr)
        cout<<x<<" ";
    return arr;
}
vector<int> commaseperatedarray(){
    vector<int> arr;
    string line;
    getline(cin,line);
    stringstream ss(line);
    string token;
    while(getline(ss,token,',')){
        arr.push_back(stoi(token));
    }

    for(int x:arr){
        cout<<x<<" ";
    }
    return arr;
}
vector<int> bracketseperatedarray(){
    vector<int> arr;
    string line;
    getline(cin,line);
    line.erase(remove(line.begin(),line.end(),'['),line.end());
    line.erase(remove(line.begin(),line.end(),']'),line.end());
    stringstream ss(line);
    string token;
    while(getline(ss,token,',')){
        arr.push_back(stoi(token));
    }

    for(int x:arr){
        cout<<x<<" ";
    }
    return arr;
}
vector<string> stringspaceseperatedwords(){
    vector<string> words;
    string line;
    getline(cin,line);
    stringstream ss(line);
    string word;
    while(ss>>word){
        words.push_back(word);
    }
    for (auto&w:words){
        cout<<w<<" ";
    }
    return words;
}
int main(){
    // spaceseperatedarray();
    // commaseperatedarray();
    // bracketseperatedarray();
    // stringspaceseperatedwords();
    return 0;
}