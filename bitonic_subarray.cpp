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
		int inc[n],dec[n];
		inc[0]=1,dec[n-1]=1;

		for(int i=1;i<n;i++){
			if(arr[i-1]<=arr[i]){
				inc[i]=inc[i-1]+1;
			}
			else{
				inc[i]=1;
			}
		}
		for(int i=n-2;i>=0;i--){
			if(arr[i+1]<=arr[i]){
				dec[i]=dec[i+1]+1;
			}
			else{
				dec[i]=1;
			}
		}

		int res=0;
		for(int i=0;i<n;i++){
			res=max(res,inc[i]+dec[i]-1);
		}
		cout<<res<<endl;
	}
}