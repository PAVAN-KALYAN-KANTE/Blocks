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
    int left=0,right=n-1;
    //to find all the pairs with target sum
    while(left<right){
        if(arr[left]+arr[right]==target){
            cout<<arr[left]<<" and "<<arr[right]<<endl;//printing pairs
            left++;
            right--;
        }
        else if(arr[left]+arr[right]>target){
            right--;
        }
        else if(arr[left]+arr[right]<target){
            left++;
        }
    }
}