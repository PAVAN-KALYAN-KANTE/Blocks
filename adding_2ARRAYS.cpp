#include<bits/stdc++.h>
using namespace std;
signed main(){
	int n;
	cin>>n;
	int a1[n];
	for(auto &i:a1){
		cin>>i;
	}
	int m;
	cin>>m;
	int a2[m];
	for(auto &i:a2){
		cin>>i;
	}
    int l=n>m?n:m;
	int res[l];
	int i=n-1,j=m-1,k=l-1;
	int carry=0;
	while(k>=0){
		int sum=carry;
		if(i>=0){
			sum+=a1[i];
		}
		if(j>=0){
			sum+=a2[j];
		}
		res[k]=sum%10;
		carry=sum/10;
		i--;
		j--;
		k--;
	}
	if(carry!=0)cout<<carry<<", ";
	for(auto i:res){cout<<i<<", ";}cout<<"END"<<endl;

}