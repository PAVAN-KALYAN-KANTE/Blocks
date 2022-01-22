#include<bits/stdc++.h>
using namespace std;
signed main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &i:arr){
		cin>>i;
	}
	int target;
	cin>>target;
    //to do in O(nlogn) time sort it
	sort(arr,arr+n);

	for(int i=0;i<n-2;i++){
		int x=arr[i];
        int sum=target-x;
		int left=i+1,right=n-1;
		while(left<right){
			if(arr[left]+arr[right]==sum){
				cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;//printing triplet
				left++;
				right--;
			}
			else if(arr[left]+arr[right]>sum){
				right--;
			}
			else if(arr[left]+arr[right]<sum){
				left++;
			}
		}
	}
}