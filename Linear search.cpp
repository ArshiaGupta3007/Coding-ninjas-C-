#include<iostream>
using namespace std;




int linear_search(int arr[],int n,int num){
	
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			cout<<"Element found at index : ";
			return i;
		}
	}
}

int main()
{
	int n;
	cout<<"Size of array : ";
	cin>>n;
	int stack[n];
	cout<<"Array :";
	for(int i=0;i<n;i++){
		cin>>stack[i];
	}
	
	int num;
	cout<<"Enter the element to be found : ";
	cin>> num;
	cout<< linear_search(stack,n,num);
	  
}
