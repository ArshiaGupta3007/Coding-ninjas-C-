#include<iostream>
#include<queue>
using namespace std;
int main(){
	
	queue<string> q;
	q.push("arsh");
	q.push("gupta");
	q.push("family");
	
	cout<<"First element : "<<q.front()<<endl;
	q.pop();
	cout<<"First element after pop : "<<q.front()<<endl;
	
	cout<<"Size-->"<<q.size()<<endl;
	
	cout<<"Empty or not :"<<.empty();
	
}