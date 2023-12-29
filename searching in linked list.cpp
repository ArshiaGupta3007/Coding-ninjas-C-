#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node*head=NULL;


void insert_at_Starting(int data){

	struct node*new_node = (struct node*)malloc(sizeof(struct node));
	
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void display(){
	struct node*pointer;
	pointer=head;
	while(pointer!=NULL){
		cout<<pointer->data<<endl;
		pointer=pointer->next;
	}}

void length(){
int count=0;
struct node* temp;
temp=head;
while(temp!=NULL){
	count=count+1;
	temp=temp->next;
}
cout<<count<<endl;
}

void search(int key){
	struct node*temp;
	temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			cout<<key<<" found ";
		}
		
		temp=temp->next;		
		
		}
		
	
	}
	
	

int main(){
	insert_at_Starting(5);
	insert_at_Starting(4);
	insert_at_Starting(3);
	insert_at_Starting(6);
	
	display();
	length();
	search(2);
	search (3);
}
