#include<bits/stdc++.h>
using namespace std;
signed main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &i:arr){
		cin>>i;
	}
	int left[n],right[n];
	left[0]=0,right[n-1]=0;
	for(int i=1;i<n;i++){
		left[i]=max(arr[i-1],left[i-1]);
	}
	for(int i=n-2;i>=0;i--){
		right[i]=max(arr[i+1],right[i+1]);
	}
	// for(auto i:left){cout<<i<<" ";}cout<<endl;
	// for(auto i:right){cout<<i<<" ";}cout<<endl;

    int res=0;
	for(auto i=0;i<n;i++){
		if(left[i]>arr[i] and right[i]>arr[i]){
			int temp=min(left[i],right[i]);
			res+=temp-arr[i];
		}
	}
	cout<<res<<endl;
}
