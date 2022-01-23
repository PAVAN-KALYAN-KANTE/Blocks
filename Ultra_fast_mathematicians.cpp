//
// Created by Siva Ganesh on 22-01-2022.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;
        auto n=s1.size();
        for (int i = 0; i < n; ++i) {
            if((s1[i]=='1' && s2[i]=='1')||s1[i]=='0' && s2[i]=='0'){
                s3+='0';
            }else{
                s3+='1';
            }
        }
        cout<<s3<<endl;
        //        for (int i = 0; i < ; ++i) {
        //
        //        }
    }
}