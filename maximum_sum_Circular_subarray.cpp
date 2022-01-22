#include<bits/stdc++.h>
using namespace std;
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int totsum=0;
		for(auto &i:arr){
			cin>>i;
			totsum+=i;
		}
		int cursum=0,mini=INT_MAX;
		for(int i=0;i<n;i++){
			cursum+=arr[i];
			if(cursum>arr[i]){
				cursum=arr[i];
			}
			if(cursum<mini){
				mini=cursum;
			}
		}
		cursum=0;int maxi=INT_MIN;
		for(int i=0;i<n;i++){
			cursum+=arr[i];
			if(cursum<arr[i]){
				cursum=arr[i];
			}
			if(cursum>maxi){
				maxi=cursum;
			}
		}
		if(mini==totsum){cout<<maxi<<endl;}else
		cout<<max(maxi,totsum-mini)<<endl;
	}
}