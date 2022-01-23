//
// Created by Siva Ganesh on 22-01-2022.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int no_of_setbits(int i) {
    int c = 0;
    while (i > 0) {
        i = i & (i - 1);
        c++;
    }
    return c;
}

vector<int> primes() {
    vector<int> prime;
    int fact = 1;
    for (int k = 2; k < 20; k++) {
        fact = fact * (k - 1);
        if ((fact + 1) % k == 0)
            prime.push_back(k);
    }
    return prime;
}

//ll popcount(ll i){
//    ll c=0,mask=1;
//    while (mask<=i){
//        if(mask&i){
//            c++;
//        }
//        mask<<=1;
//    }
//    return c;
//}
int main() {
    vector<int> primes={2,3,5,7,11,13,17,19};
    int t;
    cin>>t;
    while (t--){
        ll n,res=0;
        cin>>n;
        int no=(1<<8)-1;
        for (int i = 1; i <=no; ++i) {
            int noOfSetbit=no_of_setbits(i),denom=1,mask=1;
            for (int j = 0; j < 8; ++j) {
                if(mask&i){
                    denom=denom*primes[j];
                }
                mask<<=1;
            }
            if(noOfSetbit & 1){
                res+=n/denom;
            }else{
                res-=n/denom;
            }
            //cout<<res<<endl;
        }
        cout<<res<<endl;
    }
}

