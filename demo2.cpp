
#include<bits/stdc++.h>
using namespace std;
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
