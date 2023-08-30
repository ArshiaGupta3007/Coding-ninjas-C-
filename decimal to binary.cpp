#include<iostream>
using namespace std;
int main(){
	 int n,rem,i=0;
	 int a[15];
	 cin>>n;
	 if(n==0){
		 cout<<"0";
	 }
	 else{
	 while(n){
		rem=n%2;
		n=n/2;
		a[i]=rem;
		i++;
	 }
         for (int j = i - 1; j >= 0; j--) {
           cout << a[j];
         }
         }
}