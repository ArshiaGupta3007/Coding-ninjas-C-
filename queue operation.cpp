#include<iostream>
using namespace std;
int rear=-1;
int front=-1;
int size=5;
int queue[5];

int isEmpty()
{
	if(rear==-1 && front==-1){
		return 1;
	}
	else{ return 0;
	}	
}

int isFull(){
	if(front==size-1){
		return 1;
	}
	else {
		return 0;
	}
}

int enqueue(int value){
	if(isFull()){
		return -1;
	}
	else if(isEmpty){
		rear=front=0;
		
	}
	else{
		int value;
		rear++;
		queue[rear]=value;
		cout<<"Elemene"<<value<<"added at index"<<rear;
	}
}

int main()
{
	enqueue(5);
	
return 0;
}
