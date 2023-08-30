#include<iostream>
using namespace std;
int main(){
int C,N,i,sum=0,product=1;
cin>> N>>C;
if(C==1){
  for (i = 1; i <= N; i++) {
    sum = sum + i;
  }
  cout << sum;
}
else if(C==2){
	for(i=1;i<=N;i++){
		product=product*i;
	}
	cout<< product;
}
else{
	cout<<"-1";
}
}