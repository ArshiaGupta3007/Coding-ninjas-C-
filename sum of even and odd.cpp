#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N,r,sum_even=0,sum_odd=0;
	cin >>N;
	
	while (N>0){
          r = N % 10;
		   if (r % 2 == 0) {
			    sum_even = sum_even + r; }
		  else{sum_odd=sum_odd+r;}
          N = N / 10;

	}
	cout << sum_even << " "<< sum_odd;
}
