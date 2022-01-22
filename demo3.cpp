//
// Created by Siva Ganesh on 22-01-2022.
//
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

//template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
//#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
// change these numbers
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
using namespace std;

ll power(int a, int n) {
    int res = 1, mask = 1;
    while (mask <= n) {
        if (mask & n) {
            res = res * a;
        }
        mask <<= 1;
        a = a * a;
    }
    return res;
}

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
    char arr[20];
    cin>>arr;
    ll digits=strlen(arr),res=(1<<digits)-2;
    for(ll i=digits-1,count=0;i>=0;i--,count++){
        if(arr[i]=='7'){
            res+=(1<<count);
        }
    }
    cout<<res+1<<endl;

}

