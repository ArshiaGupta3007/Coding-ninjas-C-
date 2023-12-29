#include<iostream>
using namespace std;
int n=3;
      
   int stack[3];
   int top=-1;

void push(int data){
	
	if(top==n-1){
	
		cout<<"Stack overflow"<<endl;
	}
	else{
		
		top=top+1;
		stack[top]=data;
		cout<<"Element "<< data <<" pushed at index "<< top <<endl;
	}
}

void pop(){
	
	
	if(top==-1){
	cout<<"stack underflow";
	}
	else{
		int value;
		value=stack[top];
		
		cout<<"Element "<< value <<" popped from index "<<top<<endl;
		top--;
	}
}

int main(){
	
	
	
	push(6);
	push(7);
    push(6);
    push(4);
    pop();
    pop();
    pop();
    pop();
	
}
 
	