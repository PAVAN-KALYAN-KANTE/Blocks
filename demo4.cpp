#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    //hello
    int arr[n];
    for(auto &i:arr){
        cin>>i;
    }
    int target;
    cin>>target;
    //hi there
    sort(arr,arr+n);
    int left=0,right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==target){
            cout<<arr[left]<<" and "<<arr[right]<<endl;
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
