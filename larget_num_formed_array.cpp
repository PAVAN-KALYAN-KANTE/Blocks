#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	string X=to_string(a);
	string Y=to_string(b);
	return X+Y>Y+X;
}
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(auto &i:arr){
			cin>>i;
		}
        sort(arr,arr+n,cmp);
		for(auto i:arr){
			cout<<i;
		}cout<<endl;
	}
}