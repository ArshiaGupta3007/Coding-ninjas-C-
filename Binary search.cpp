#include<iostream>
using namespace std;




int binary_search(int arr[],int n,int num){
	
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		
		if (arr[mid]==num){
			cout<<"Element found at index : ";
			return mid;
			
			
		}
		
		else if(arr[mid]>num){
			e=mid-1;
			 
		}
		else {
			s=mid+1;
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
	cout<< binary_search(stack,n,num);
	  
}
