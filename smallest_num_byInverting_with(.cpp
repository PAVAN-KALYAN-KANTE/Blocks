#include<bits/stdc++.h>
using namespace std;

signed main(){
	long long int x;
	cin>>x;
	string y=to_string(x);
//	cout<<y<<"  "<<y.length()<<endl;
	for(int i=0;i<y.length();i++){
		auto temp=(9-y[i]+48);
		//cout<<temp<<endl;
		if(y[i]-48>temp){
			y[i]=temp+48;
		}
	}
	if(y[0]=='0'){
		y[0]='9';
	}
	cout<<y<<endl;
	
}
// signed main(){
// 	long long int x;
// 	cin>>x;
// 	string y="";
// 	while(x>0){
// 		int rem=x%10;

// 		if(9-rem<rem){
//            y=to_string(9-rem)+y;
// 		}
// 		else{
// 			y=to_string(rem)+y;
// 		}

// 		x=x/10;
// 	}

// 	if(y[0]=='0'){
// 		y[0]='9';
// 	}
//     cout<<y<<endl;
	
	
// }