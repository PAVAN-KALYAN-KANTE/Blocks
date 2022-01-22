#include<bits/stdc++.h>
using namespace std;
signed main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int x;
	cin>>x;

    //start from right top corner of matrix
	int idx1=0,idx2=m-1;
	bool flag=false;
	while(idx1<n and idx2>=0){
		if(arr[idx1][idx2]==x){
			flag=true;
			break;
		}
		else if(arr[idx1][idx2]<x){
			idx1++;
		}
		else if(arr[idx1][idx2]>x){
			idx2--;
		}
	}
	
	flag==true?cout<<1<<endl : cout<<0<<endl;

    //time complexity O(n+m)
}