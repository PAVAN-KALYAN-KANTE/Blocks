#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
//
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
string make_string(const string& a,const string& b){
    string res;
    if(find(res.begin(),res.end(),a[0])==res.end()){
        res+=a[0];
    }
    if(find(res.begin(),res.end(),a[1])==res.end()){
        res+=a[1];
    }
    if(find(res.begin(),res.end(),b[0])==res.end()){
        res+=b[0];
    }
    if(find(res.begin(),res.end(),b[1])==res.end()){
        res+=b[1];
    }
    sort(res.begin(),res.end());
    return res;
}
int main() {
    int n,res=INT_MAX;
    cin>>n;
    vector<pair<string,int>> one,two,three;
    vector<string> s(n);
    map<string,int> m,m2;
    m["A"]=1,m["B"]=2,m["C"]=4,m["AB"]=3,m["BC"]=6,m["AC"]=5,m["ABC"]=7;
    for (int i = 0; i <n ; ++i) {
        cin>>s[i];
        int temp=s[i].size();
        if(temp==1){
            one.emplace_back(s[i],i);
        }else if(temp==2){
            two.emplace_back(s[i],i);
        }else{
            three.emplace_back(s[i],i);
        }
        sort(s[i].begin(),s[i].end());
        m2[s[i]]=m[s[i]];
    }
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin>>c[i];
    }
    int one_size=one.size(),two_size=two.size(),three_size=three.size();
    for (int i = 0; i <one_size; ++i) {
        //1-1
        for (int j = i; j <one_size ; ++j) {
            for (int k = i; k <one_size ; ++k) {
                if((m[one[i].first]^m[one[j].first]^m[one[k].first])==7){
                    res=min(res,c[one[i].second]+c[one[i].second]+c[one[i].second]);
                }
            }
        }
        //1-2
        for (int j = 0; j < two_size; ++j) {
            if(make_string(one[i].first,two[j].first)=="ABC"){
                res=min(res,c[one[i].second]+c[two[j].second]);
            }
        }
        //1-3
        for (int j = 0; j <three_size; ++j) {
            if(make_string(one[i].first,three[j].first)=="ABC"){
                res=min(res,c[one[i].second]+c[three[j].second]);
            }

        }
    }
    //2-2
    for (int j = 0; j < two_size; ++j) {

        //2-2
        for (int k = j; k < two_size; ++k) {
            // cout<<make_string(two[j].first,two[k].first)<<endl;
            if(make_string(two[j].first,two[k].first)=="ABC"){
                //cout<<"true"<<endl;
                res=min(res,c[two[j].second]+c[two[k].second]);
            }
        }
        //2-3
        for (int k = j; k < three_size; ++k) {
            if(make_string(two[j].first,three[k].first)=="ABC"){
                res=min(res,c[two[j].second]+c[three[k].second]);
            }
        }
    }
    //3-3
    for (int j = 0; j <three_size; ++j) {
        //3-3
        for (int k = j; k < three_size; ++k) {
            if(make_string(three[j].first,three[k].first)=="ABC"){
                res=min(res,c[three[j].second]+c[three[k].second]);
            }
        }
    }
    //int three_size=three.size();
    for (int i = 0; i <three_size ; ++i) {
        res=min(res,c[three[i].second]);
    }
    cout<<res<<endl;


}//
// Created by Siva Ganesh on 24-01-2022.
//

