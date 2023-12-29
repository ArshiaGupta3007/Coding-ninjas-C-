#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_front(3);
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<endl;
	d.pop_back();
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<endl;
	d.pop_front();
	for(int i:d){
		cout<<i<<" ";
	}
	
	d.push_back(1);
	d.push_back(2);
	d.push_front(3);
	cout<<endl;
	//3 1 1 2
	cout<<"Element at 2nd index : "<<d.at(2)<<endl;
	cout<<"Empty or not : "<<d.empty()<<endl;
	
	cout<<"First element : "<<d.front()<<endl;
	cout<<"Last element : "<<d.back()<<endl;
	
/*	cout<<"Before clear :"<<d.size()<<endl;
	d.clear();
	cout<<"After clear :"<<d.size()<<endl;*/
	
	cout<<"Before erase :"<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"After erase :"<<d.size()<<endl;
}