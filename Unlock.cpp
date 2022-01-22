//
// Created by Siva Ganesh on 22-01-2022.
//

#include<bits/stdc++.h>

using namespace std;


//template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;


//#define s second
;
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n),temp(n);
    map<long long ,long long> m;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        m[v[i]]=i;
        temp[i]=n-i;
    }
    long long i=0;
    while(k && i<n){
        //int j = 0, q = n - 1;
        if(v[i]!=temp[i]){

            long long t1=m[v[i]],t2=m[temp[i]];
            m[v[i]]=t2;
            m[temp[i]]=t1;
            // cout<<t1<<" "<<t2<<endl;
            swap(v[t1],v[t2]);
            // cout<<m[v[i]]<<" "<<m[temp[i]]<<endl;
            k--;
        }
        i++;

    }
    for ( i = 0; i < n; ++i) {
        cout<<v[i]<<" ";
    }
}