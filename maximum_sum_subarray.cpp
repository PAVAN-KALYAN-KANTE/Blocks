#include<bits/stdc++.h>
using namespace std;
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
		int cursum=0,maxi=INT_MIN;
		for(int i=0;i<n;i++){
			cursum+=arr[i];
			if(arr[i]>cursum){
				cursum=arr[i];
			}
			if(cursum>maxi){
				maxi=cursum;
			}
		}
		cout<<maxi<<endl;
	}
}