#include<iostream>
using namespace std;

void PrintArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void swapping(int arr[],int n){
	for(int i=0;i<n;i=i+2){
		if(i+1<n){
		
		int temp;
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;}
	}
}
int main(){
int arr[5]={1,2,3,4,5};
int brr[6]={6,5,4,3,2,1};

swapping(arr,5);
swapping(brr,6);

PrintArray(arr,5);
PrintArray(brr,6);

}