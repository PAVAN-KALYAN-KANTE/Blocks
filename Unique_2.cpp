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

int main() {
    int n, xo = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        xo ^= v[i];
    }
    int mask = 1, temp = 0;
    while (mask <= xo) {
        if (mask & xo) {
            break;
        }
        mask <<= 1;
    }
    for (int i = 0; i < n; ++i) {
        if (mask & v[i]){
            temp^=v[i];
        }
    }
    cout<<min(temp,temp^xo)<<" "<<max(temp,temp^xo)<<endl;
    //cout<<no_of_setbits(7)<<endl;
}