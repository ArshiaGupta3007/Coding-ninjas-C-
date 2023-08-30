#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
	int d=2;
	while(d<n){
		
		if(n%d==0){
			return false;
		}
		d++;
		
		
		}
		
		
			return true;
	
	
}


int main(){
	
	int a =isprime(97);
	int b=isprime(100);
	cout<<a<<endl<<b;
}