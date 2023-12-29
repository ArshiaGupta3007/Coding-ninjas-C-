#include<iostream>
using namespace std;

int main(){
	int m,n;
	cout<<"No of rows : ";
	cin>>m;
	cout<<"No of columns : ";
	cin>>n;
	int arr[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int max=arr[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	int min=arr[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(min>arr[i][j]){
				min=arr[i][j];
			}
		}
	}
	
	
	cout<<"Max :" <<max<< endl;
	cout<<"Min :" <<min<<endl;
}