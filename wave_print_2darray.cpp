#include<bits/stdc++.h>
using namespace std;
signed main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<m;j++){
				cout<<arr[j][i]<<", ";
			}
		}
		else{
			for(int j=m-1;j>=0;j--){
				cout<<arr[j][i]<<", ";
			}
		}
	}cout<<"END"<<endl;
}