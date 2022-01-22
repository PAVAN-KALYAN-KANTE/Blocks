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
	int top=0,down=m-1,left=0,right=n-1;
	int key=1;
	while(top<=down and left<=right){
		if(key==1){
			for(int i=top;i<=down;i++){
				cout<<arr[i][left]<<", ";
			}
			left++;
			key=2;
		}
		if(key==2){
			for(int i=left;i<=right;i++){
				cout<<arr[down][i]<<", ";
			}
			down--;
			key=3;
		}
		if(key==3){
			for(int i=down;i>=top;i--){
				cout<<arr[i][right]<<", ";
			}
			right--;
			key=4;
		}
		if(key==4){
			for(int i=right;i>=left;i--){
				cout<<arr[top][i]<<", ";
			}
			top++;
			key=1;
		}
	}cout<<"END"<<endl;
}
