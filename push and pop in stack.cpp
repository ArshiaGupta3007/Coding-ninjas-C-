#include<iostream>
using namespace std;


void push(int data){
	int top,n;
	int stack[n];
	if( top== n-1){
		cout<<"Stack overflow";
	}
	else{
		top=top+1;
		stack[top]=data;
		cout<<"Element "<<data <<" pushed at index "<<top<<endl;
	}
}

void pop(){
	int top;
	int n;
	int stack[n];
	if(top==-1){
		cout<<"stack underflow";
	}
	else{
		int value;
		value=stack[top];
		top--;
		cout<<"Element "<< value <<" popped from index "<<top<<endl;
	}
}

int main(){
	
	int n;
cin>>n;
int stack[n];
int top=-1;
	
	push(6);
	push(7);
	push(8);
	push(6);
	
}