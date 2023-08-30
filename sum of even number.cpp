#include<iostream>
using namespace std;


int main(){
int N,sum,i;

cin >>N;
sum=0;
i=0;
while (i<=N){
	
	sum=sum+i;
	i=i+2;
}
cout<< sum;
}