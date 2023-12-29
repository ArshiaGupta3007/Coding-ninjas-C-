#include<iostream>
using namespace std;
int main(){
	int A[5];
	// garbage values
	
	int B[3]={1,2,3};
	// normal
	
	int C[4]={1,2};
	//other elements will be 0
	
	int D[4]={0};
	// array of just 0
	
	int E[]={1,2,3,4,5};
	//will itself make the array of size 5
	
	int E_size=sizeof(E)/sizeof(int);
	cout<<E_size;
}