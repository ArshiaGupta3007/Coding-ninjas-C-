#include<iostream>
using namespace std;

void PrintArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void reverse(int a[],int n){
	
	int start=0;
	int end=n-1;
	
	while(start<=end){
		int temp;
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		
		start=start+1;
		end=end-1;
	}
}
int main(){
int arr[5]={1,2,3,4,5};
int brr[6]={6,5,4,3,2,1};

reverse(arr,5);
reverse(brr,6);

PrintArray(arr,5);
PrintArray(brr,6);

}