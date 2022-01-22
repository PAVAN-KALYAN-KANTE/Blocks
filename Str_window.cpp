//
// Created by Siva Ganesh on 22-01-2022.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    getline(cin,s);
    getline(cin,t);
    map<char,int> mt,ms;
    int n1=s.size(),n2=t.size(),ct=0;
    if(n2>n1) cout<<"No String";
    else if(n1==1 && n2==1){
        if(s[0]==t[0]){
            cout<<s<<endl;
        }
        cout<<"No String";
    }else{
        for(int i=0;i<n2;i++){
            if(mt.find(t[i])==mt.end()){
                mt[t[i]]=1;
                ms[t[i]]=0;
                ct++;
            }else{
                mt[t[i]]++;
            }
        }
        int i=0,j=0,cs=0,mini=-1,maxi=-1,diff=INT_MAX;
        bool f=false;
        while(j!=n1){
            if(cs==ct){
                //cout<<"True"<<endl;
                f=true;
                if(diff>j-i){
                    mini=i;
                    maxi=j;
                    diff=j-i;
                }
                //cout<<ms[s[i]]<<" "<<mt[s[i]]<<endl;
                ms[s[i]]--;
                if(ms[s[i]]<mt[s[i]])
                {//cout<<s[i]<<endl;
                    cs--;
                }
                i++;
            }else if(ct>cs){

                ms[s[j]]++;
                if(ms[s[j]]==mt[s[j]])cs++;

                j++;
            }
            // cout<<cs<<endl;
        }
        //cout<<mt['a']<<endl;
        if(cs==ct){
            f=true;
        }
        while(true){
            ms[s[i]]--;
            if(ms[s[i]]<mt[s[i]])cs--;
            if(cs!=ct){
                break;
            }
            i++;
        }
        //cout<<ms['a']<<endl;
        if(diff>j-i){
            mini=i;
            maxi=j;
            diff=j-i;
        }
        string res="";
        //cout<<diff<<endl;
        if(f){
            for(int i=mini;i<maxi;i++){
                res+=s[i];
            }
            cout<<res<<endl;
        }
        else{
            cout<<"No String";
        }
    }

    return 0;
}
