#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* prev;

	node(int val){
		data=val;
		prev=NULL;
	}
};
 void print(node* tail){

    if(tail==NULL){
        return;
    }
    print(tail->prev);
    cout<<tail->data;
 	
 }

node* multipy(node* tail,int n){
	int carry=0;
	node* firstnode=tail;
	node* temp=tail;
	while(temp!=NULL){
		int val=(temp->data)*n+carry;
		carry=val/10;
		temp->data=val%10;
	    firstnode=temp;
		temp=temp->prev;
	}
	while(carry!=0){
		int val=carry%10;
		node* n=new node(val);
		firstnode->prev=n;
		firstnode=firstnode->prev;
		carry=carry/10;
	}
	return tail;
}
signed main(){
	int n;
	cin>>n;
	node* res;
	node* tail=new node(1);
	for(int i=2;i<=n;i++){
		res=multipy(tail,i);
	}
	print(res);
}