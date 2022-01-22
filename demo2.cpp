//
// Created by Siva Ganesh on 22-01-2022.
//
#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b){
    if(a.size()<=b.size() && (a==b.substr(0,a.size())))return false;
    else if(b.size()<=a.size() && (b==a.substr(0,b.size()))) return true;
    return a<b;
}
int main() {
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end(),comp);
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
