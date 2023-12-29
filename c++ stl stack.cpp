#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<string> s;
	s.push("arsh");
	s.push("gupta");
	s.push("family");

	
	cout<<"TOP : "<<s.top()<<endl;
	 
	 s.pop();
	cout<<"TOP AFTER POP: "<<s.top()<<endl;
	
	cout<<"Size-->"<<s.size()<<endl;
	
	cout<<"Empty or not :"<<s.empty();
}