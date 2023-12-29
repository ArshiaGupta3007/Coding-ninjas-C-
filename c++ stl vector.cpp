#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	
	cout<<"Size-->"<<v.capacity()<<endl;
	v.push_back(1);
	cout<<"Size-->"<<v.capacity()<<endl;
	v.push_back(2);
	cout<<"Size-->"<<v.capacity()<<endl;
	v.push_back(3);
	cout<<"Size-->"<<v.capacity()<<endl;
	cout<<"Number of elements-->"<<v.size()<<endl;
	// capacity tells us the memory allocated and it doubles itself
	//size tells us the number of elements present
	
	
	cout<<"Element at 2nd index : "<<v.at(2)<<endl;
	cout<<"Empty or not : "<<v.empty()<<endl;
	
	cout<<"First element : "<<v.front()<<endl;
	cout<<"Last element : "<<v.back()<<endl;
	
	cout<<"BEFORE POP"<<endl;
	for(int i:v){
		cout<<i<<endl;
		
	}
	
	cout<<"AFTER POP"<<endl;
	v.pop_back();
	for(int i:v){
		cout<<i<<endl;	
	}
	
	cout<<"Before clear :"<<v.size()<<endl;
	v.clear();
	cout<<"After clear :"<<v.size()<<endl;
	
	vector<int> arr(5,10);
	for(int i:arr){
		cout<<i<<endl;	
	}
	
	
	
}